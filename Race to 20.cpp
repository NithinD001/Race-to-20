#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Constants
const int WINNING_NUMBER = 20;
const int MAX_CHOICES = 3;

// Function to print game rules
void printRules() {
    cout << "<------Game Rules------>" << endl;
    cout << "--> Choose who starts the game" << endl;
    cout << "--> Game starts from 1" << endl;
    cout << "--> On each turn, a player can choose up to 3 numbers" << endl;
    cout << "--> The first to reach 20 wins the game\n" << endl;
}

// Function to handle the computer's move
void computerMove(int &current) {
    // Use a strategy to make the computer's move more intelligent
    int move = (4 - (current % 4));
    if (move > MAX_CHOICES) {
        move = rand() % MAX_CHOICES + 1;  // Random move between 1 and 3
    }
    current += move;
    cout << "System chooses: " << move << endl;
}

// Function to handle player's move
void playerMove(int &current) {
    vector<int> choices;
    int num;
    while (true) {
        cout << "Enter up to " << MAX_CHOICES << " numbers (separated by space): ";
        choices.clear();
        while (cin >> num) {
            if (num < 1 || num > MAX_CHOICES) {
                cout << "Please enter numbers between 1 and " << MAX_CHOICES << "." << endl;
                choices.clear();
                break;
            }
            choices.push_back(num);
            if (cin.peek() == '\n') break;
        }
        if (choices.size() > MAX_CHOICES) {
            cout << "You can choose at most " << MAX_CHOICES << " numbers." << endl;
        } else {
            break;
        }
    }
    current += choices.size();
}

// Main game function
void playGame(int startingPlayer) {
    int playerScore = 0, computerScore = 0;
    bool playerTurn = (startingPlayer == 2);

    while (playerScore < WINNING_NUMBER && computerScore < WINNING_NUMBER) {
        if (playerTurn) {
            cout << "Player's turn: ";
            playerMove(playerScore);
            cout << "Current number: " << playerScore << endl;
        } else {
            computerMove(computerScore);
            cout << "Current number: " << computerScore << endl;
        }
        playerTurn = !playerTurn; // Switch turn
    }

    if (playerScore >= WINNING_NUMBER) {
        cout << "You Won the game!!" << endl;
    } else {
        cout << "You Lost!!" << endl;
    }
}

// Main function
int main() {
    srand(time(0)); // Seed the random number generator

    printRules();

    cout << "Who wants to start the game? (1 for Computer, 2 for Player): ";
    int starter;
    cin >> starter;

    if (starter != 1 && starter != 2) {
        cout << "Invalid choice. Defaulting to Player starts." << endl;
        starter = 2;
    }

    playGame(starter);

    return 0;
}
