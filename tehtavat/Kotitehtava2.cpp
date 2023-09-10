#include <iostream>
#include <cstdlib>
#include <ctime>

class Game {
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

public:
   
    Game(int max) : maxNumber(max), playerGuess(0), randomNumber(0), numOfGuesses(0) {
        
        srand(static_cast<unsigned>(time(0)));

        
        randomNumber = rand() % maxNumber + 1;

        
        std::cout << "Luokan konstruktori tulostaa maksimiarvon: " << maxNumber << std::endl;
    }

    
    ~Game() {
       
        std::cout << "Destruktori tulostaa viestin." << std::endl;
    }

    
    void play() {
        std::cout << "Tervetuloa arvauspeliin! Arvaa luku väliltä 1-" << maxNumber << "." << std::endl;
        
        do {
            std::cout << "Syötä arvauksesi: ";
            std::cin >> playerGuess;
            numOfGuesses++;

            if (playerGuess < randomNumber) {
                std::cout << "Luku on suurempi." << std::endl;
            } else if (playerGuess > randomNumber) {
                std::cout << "Luku on pienempi." << std::endl;
            } else {
                std::cout << "Onneksi olkoon, arvasit oikein! Luku oli " << randomNumber << "." << std::endl;
                break;
            }
        } while (true);

       
        printGameResult();
    }

    
    void printGameResult() {
        std::cout << "Peli päättyi " << numOfGuesses << " arvauksella." << std::endl;
    }
};

int main() {
    int max;
    std::cout << "Syötä maksimiluku arvauspelille: ";
    std::cin >> max;

    Game game(max);

    game.play();
    
    return 0;
}