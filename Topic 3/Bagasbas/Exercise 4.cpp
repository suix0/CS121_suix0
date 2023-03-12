// A program that plays the popular scissor, rock, paper game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // Generate a random number between 0, 1, 2 representing scissor, rock, paper
    srand(time(NULL));
    int computer = rand() % 3;
    
    // Prompt user to input a number
    int user = 0;
    cout << "scissor (0), rock (1), paper (2): "; cin >> user;

    //Display the result in case user input is 0
    if (user == 0 && computer == 1){
        cout << "The computer is rock" << ". You are scissor" << "." << " The computer won." << endl;
    } else if (user == 0 && computer == 2) {
        cout << "The computer is paper" << ". You are scissor" << "." << " You won." << endl;
    } else if (user == 0 && computer == 0){
        cout << "The computer is scissor" << ". You are scissor" << "." << " It's a draw." << endl;

    } else if (user == 1 && computer == 0){
        cout << "The computer is scissor" << ". You are rock" << "." << " You won." << endl;
    } else if (user == 1 && computer == 2) {
        cout << "The computer is paper" << ". You are rock" << "." << " The computer won." << endl;
    } else if (user == 1 && computer == 1){
        cout << "The computer is rock" << ". You are rock" << "." << " It's a draw." << endl;

    } else if (user == 2 && computer == 0){
        cout << "The computer is scissor" << ". You are paper" << "." << " The computer won." << endl;
    } else if (user == 2 && computer == 1) {
        cout << "The computer is rock" << ". You are paper" << "." << " You won." << endl;
    } else if (user == 2 && computer == 2) {
        cout << "The computer is paper" << ". You are paper" << "." << " It's a draw." << endl;
    }
}