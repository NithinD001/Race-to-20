#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void rules() {
    cout << "<------Game Rules------>" << endl;
    cout << "-->Choose who can start the game" << endl;
    cout << "-->Game should start from 1" << endl;
    cout << "-->In Every turn, player can choose at most 3 numbers" << endl;
    cout << "-->The one who reaches 20 first wins the game\n" << endl;
}

void computersum(int &n) {
    if ((n + 1) % 4 == 0) {
        n = n + 1;
    } else if ((n + 2) % 4 == 0) {
        n = n + 2;
    } else if ((n + 3) % 4 == 0) {
        n = n + 3;
    } else {
        n = n + rand() % 3 + 1;  // Random number between 1 and 3
    }
}

void game1() {
    cout << "1. Computer" << endl;
    cout << "2. Player" << endl;

    int p;
    cout << "Who wants to start the game: ";
    cin >> p;

    int cn1 = 0, cn2 = 0;
    vector<int> n;
    int num;
    
    if (p == 1) {
        while (cn1 < 20 && cn2 < 20) {
            cout << "System Chooses: ";
            n.clear();
            while (cin >> num) {
                n.push_back(num);
                if (cin.peek() == '\n') break;
            }
            if (n.size() > 3) {
                cout << "Invalid input" << endl;
                continue;
            }
            cn1 = cn2 + n.size();
            cout << "Current num: " << cn1 << endl;

            cout << "How many numbers you want to choose: ";
            n.clear();
            while (cin >> num) {
                n.push_back(num);
                if (cin.peek() == '\n') break;
            }
            if (n.size() > 3) {
                cout << "Invalid input" << endl;
                continue;
            }
            cn2 = cn1 + n.size();
            cout << "Current num: " << cn2 << endl;
        }
        if (cn1 == 20) {
            cout << "You Lost!!" << endl;
        }
        if (cn2 == 20) {
            cout << "You Won the game.!!" << endl;
        }
    } else {
        while (cn1 < 20 && cn2 < 20) {
            cout << "How many numbers you want to choose: ";
            n.clear();
            while (cin >> num) {
                n.push_back(num);
                if (cin.peek() == '\n') break;
            }
            if (n.size() > 3) {
                cout << "Invalid input" << endl;
                continue;
            }
            cn1 = cn2 + n.size();
            cout << "Current num: " << cn1 << endl;

            cout << "System chooses: ";
            n.clear();
            while (cin >> num) {
                n.push_back(num);
                if (cin.peek() == '\n') break;
            }
            if (n.size() > 3) {
                cout << "Invalid input" << endl;
                continue;
            }
            cn2 = cn1 + n.size();
            cout << "Current num: " << cn2 << endl;
        }
        if (cn1 == 20) {
            cout << "You Won The game.!!" << endl;
        }
        if (cn2 == 20) {
            cout << "You Lost!!" << endl;
        }
    }
}

int main() {
    rules();
    game1();
    return 0;
}
