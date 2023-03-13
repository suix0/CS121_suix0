/* A program that prompts the user to enter a letter and 
check whether the letter is vowel or consonant */
#include <iostream>
#include <string>

// Define a function that will loop through a string of vowels and check if
// the input letter is vowel or consonant
char vowelOrCons(char c){
    std::string vowel = "AaEeIiOoUu";
    // The counter will be what we will use to check each index of the string
    int counter = 0;
    // Loop through each string in the vowel variable and check if the letter is vowel or consonant
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