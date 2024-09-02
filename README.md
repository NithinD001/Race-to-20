# Race to 20

## Overview

The Race to 20 is a simple interactive game where a player competes against a computer to be the first to reach the number 20. The game starts from 1, and each player can choose up to 3 numbers on their turn. The player or computer that first reaches exactly 20 wins the game.

## Game Rules

1. **Starting the Game**: Choose who will start the game (Player or Computer).
2. **Gameplay**: 
   - The game starts from 1.
   - On each turn, the player or computer can choose 1 to 3 numbers to add to the current total.
   - The goal is to be the first to reach exactly 20.
3. **Winning**: The first to reach exactly 20 wins the game.

## How to Play

1. **Clone the Repository**: Clone this repository to your local machine.
```console
git clone https://github.com/NithinD001/Race-to-20.git
cd Race-to-20
```
2. **Compile the Code:** Use a C++ compiler to compile the code. For example, with `g++`:
```console
g++ Race\ to\ 20.cpp -o number_game
```
3. **Run the Game:** Execute the compiled binary.
```console
./number_game
```
4. **Follow the Prompts:** The game will prompt you to choose who starts the game and then guide you through the gameplay.

## Game Features
- **Two Modes:** Play against the computer or against another player.
- **User Input Handling:** Validate and handle user input to ensure it is within the acceptable range.
- **Computer Strategy:** Basic strategy for computer moves to avoid simple randomness.

## Example Gameplay
```console
User@Github:~$ ./number_game 
<------Game Rules------>
--> Choose who starts the game
--> Game starts from 1
--> On each turn, a player can choose up to 3 numbers
--> The first to reach 20 wins the game

Who wants to start the game? (1 for Computer, 2 for Player): 2
Player's turn: Enter up to 3 numbers (separated by space): 1 2
Current number: 2
System chooses: 3
Current number: 3
Player's turn: Enter up to 3 numbers (separated by space): 2 2
Current number: 4
System chooses: 1
Current number: 4
```

## To-Do List
- **Enhance Computer Strategy:**
    - Implement a more sophisticated algorithm for the computer to make optimal moves.
    - Consider adding different levels of difficulty.
- **Improve User Interface:**
    - Add a graphical user interface (GUI) for a more engaging experience.
    - Provide more detailed instructions and feedback during the game.
- **Add More Features:**
    - Introduce different game modes or variations.
    - Implement a scoring system or statistics tracking.
- **Code Refactoring:**
    - Organize code into classes for better structure and maintainability.
    - Separate game logic and user interface code.
- **Testing and Debugging:**
    - Write unit tests to ensure the game logic works correctly.
    - Perform thorough testing to find and fix any bugs.
- **Documentation:**
    - Improve and expand documentation with more examples and detailed explanations.
    - Add a section for FAQs and troubleshooting tips.

## Contributing

Feel free to fork the repository and submit pull requests if you have improvements or bug fixes.

## Acknowledgments
- The basic game concept is inspired by classic counting games.
- Special thanks to the contributors and the open-source community for their support.

### Notes:

1. **TODO List Items**: This section outlines tasks that could enhance the project. You can update it as progress is made or as new ideas come up.