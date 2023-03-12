/* A program that prompts the user to enter a letter and 
check whether the letter is vowel or consonant */

#include <iostream>
#include <string>

char vowelOrCons(char c){
    std::string vowel = "AaEeIiOoUu";
    int counter = 0;
    for (int i = 0; i <= vowel.size(); i++){
        if (c == vowel[counter]){
            std::cout << c << " is a vowel" << std::endl;
            break;
        } else if ((counter == vowel.size()) && (c != vowel[counter])){
            std::cout << c << " is a consonant" << std::endl;
        } else {
            counter++;  
        }
    }
}

int main(){
    char cinput;
    std::cout << "Enter a letter: "; std::cin >> cinput;
    std::cout << vowelOrCons(cinput) << std::endl;
}