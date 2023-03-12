// A program that plays the popular scissor, rock, paper game.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    // Generate a random number between 0, 1, 2 representing scissor, rock, paper
    srand(time(NULL));
    int computer = rand() % (4 - 1);
    cout << "Computer number is " << computer << endl;
}