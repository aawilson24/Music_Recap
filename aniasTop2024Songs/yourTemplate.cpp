#include <iostream>  // For input and output
#include <vector>    // For dynamic arrays (vectors)
#include <string>    // For handling text (strings)
#include <algorithm> // For sorting
using namespace std;

int main() {
    // Step 1: Welcome message
    cout << "Welcome to your personalized favorite Artists list, inspired by your favorite music apps!" << endl;
    cout << "You'll enter your favorite artists and rank them by how much you love them.\n" << endl;

    // Step 2: Create two vectors to store artist names and their ranks
    vector<string> artists;  // To store artist names
    vector<int> ranks;       // To store artist rankings (scores)

    // Step 3: Input artist names and ranks - Omitted
   
    // Step 4: Sort artists by their ranks in ascending order - Omitted
   
    // Step 5: Display the favorites list
    cout << "\nHere's your personalized favorites list:" << endl;
    for (int i = 0; i < artists.size(); i++) {
        cout << i + 1 << ". " << artists[i] << " (Rank: " << ranks[i] << ")" << endl;
    }

    // Step 6: Ask if they want to add another artist - Omitted
   


        // Display the updated playlist
        cout << "\nHere’s your updated favorites list:" << endl;
        for (int i = 0; i < artists.size(); i++) {
            cout << i + 1 << ". " << artists[i] << " (Rank: " << ranks[i] << ")" << endl;
        }
    } else {
        cout << "\nThanks for creating your favorites list!" << endl;
    }

    return 0; // End of the program
}
