#include<bits/stdc++.h>
using namespace std;

int numberOfAttempts(int number, int count){
    int guessNumber;
    cout << "Enter your guess: ";
    cin >> guessNumber;
    count++;

    if(guessNumber < number){
        cout << "Too low! Try again." << endl;
        numberOfAttempts(number, count);
    }
    else if( guessNumber > number){
        cout << "Too high! Try again." << endl;
        numberOfAttempts(number, count);
    }
    else {
        return count;
    }
}

int main(){
    srand(time(0));
    int number = rand() % 100 + 1;
    int count = 1;
    int attempts = numberOfAttempts(number, count);

    cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts!\n";

    return 0;
}