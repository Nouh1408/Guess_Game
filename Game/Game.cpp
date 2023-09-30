#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));

    int minNum, maxNum;

    
    cout << "Enter the minimum number: ";
    cin >> minNum;
    cout << "Enter the maximum number: ";
    cin >> maxNum;

    
    if (minNum >= maxNum) {
        cout << "Invalid input. Maximum number must be greater than minimum number." << endl;
        return 1; 
    }

    
    int secretNumber = minNum + rand() % (maxNum - minNum + 1);

    int guess, attempts = 0;

    cout << "Guess the number between " << minNum << " and " << maxNum << "." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
            break;
        }
        else if (guess < secretNumber) {
            cout << "Try a higher number." << endl;
        }
        else {
            cout << "Try a lower number." << endl;
        }
    } while (true);

    return 0;
}
