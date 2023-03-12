/* A program that prompts the user to enter three cities
and displays them in ascending order */
#include <iostream>
#include <string>

int main(){
    // Prompt user for three cities
    std::string city1, city2, city3;
    std::cout << "Enter the first city: "; std::getline(std::cin, city1);
    std::cout << "Enter the second city: "; std::getline(std::cin, city2);
    std::cout << "Enter the third city: "; std::getline(std::cin, city3);

    // Display the cities in alphabetical order
    std::cout << "The cities in alphabetical order are ";
    // Rearrange if city3 is the first alphabetical order
    if ((city3 < city1) && (city3 < city2)){
        if (city1 < city2) {
            std::cout << city3 << " " << city1 << " " << city2 << std::endl;
        } else {
            std::cout << city3 << " " << city2 << " " << city1 << std::endl;
        }
    // Rearrange if city2 is the first alphabetical order
   } else if ((city2 < city1) && (city2 < city3)){
        if (city1 < city3){
            std::cout << city2 << " " << city1 << " " << city3 << std::endl;
        } else {
            std::cout << city2 << " " << city3 << " " << city1 << std::endl;
        }
    // Rearrange if city3 is the first alphabetical order
   } else if ((city1 < city2) && (city1 < city3)){
        if (city2 < city3){
            std::cout << city1 << " " << city2 << " " << city3 << std::endl;
        } else {
            std::cout << city1 << " " << city3 << " " << city2 << std::endl;
        }
   }
}