#include <bits/stdc++.h>
using namespace std; 

int main() {
    
    // Generting random number n
    srand(time(0));
    int n = 1+ (rand() % 10000);

    int x;

    cout << " \t\t Welcome to the Number Guessing Game!\n";
    cout << "\tGuess a number between 1 and 10000: ";

    do {
    
    // Taking the guess from player
        cin >> x;
        cout<<endl;
    
    //checking whether the guess matches
        if (x == n) {
            cout << "Congratulations! You guessed the correct number{"<< x <<"}\n";
        } else if (x < n) {
            cout<< x << " is too low!"<<"\nTry again: ";
        } else {
            cout<< x << " is too high!"<<"\nTry again: ";
        }
    } while (x != n);

    return 0;
}
