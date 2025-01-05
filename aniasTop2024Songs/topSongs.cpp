#include <iostream>  // For input and output
#include <vector>    // For dynamic arrays (vectors)
#include <string>    // For handling text (strings)
#include <algorithm> // For sorting
using namespace std;

int main() {
    // Step 1: Welcome message
    cout << "Welcome to your personalized favorite Artists list, inspired by Spotify wrapped!" << endl;
    cout << "You'll enter your favorite artists and rank them by how much you love them.\n" << endl;

    // Step 2: Create two vectors to store artist names and their ranks
    vector<string> artists;  // To store artist names
    vector<int> ranks;       // To store artist rankings (scores)

    // Step 3: Input artist names and ranks
    string artist;  // Temporary variable to store the artist name
    int rank;       // Temporary variable to store the artist rank
    
    cout << "Enter your top 5 favorite artists and rank them from 1 to 10 (10 = most favorite):" << endl;

    for (int i = 1; i <= 10; i++) {
        // Input artist name
        cout << "Artist " << i << ": ";
  
        getline(cin, artist);
        artists.push_back(artist); // Add the artist name to the vector

        // Input artist rank
        cout << "Rank for " << artist << " (1-5): ";
        cin >> rank;
        ranks.push_back(rank); // Add the rank to the vector
        cin.ignore();          // Clear the input buffer for the next line of input
    }

    // Step 4: Sort artists by their ranks
    // We use a sorting method to rearrange the artists based on their ranks

    for (int i = 0; i < artists.size() - 1; i++) {
        for (int j = i + 1; j < artists.size(); j++) {
            if (ranks[i] < ranks[j]) { // If the current rank is less than the next rank, swap
                swap(ranks[i], ranks[j]);   // Swap the ranks
                swap(artists[i], artists[j]); // Swap the corresponding artists
            }
        }
    }


    // Step 5: Display the "Spotify Wrapped" playlist
    cout << "\nHere's your personalized 'Spotify Wrapped' favorites list:" << endl;
    for (int i = 0; i < artists.size(); i++) {
        cout << i + 1 << ". " << artists[i] << " (Rank: " << ranks[i] << ")" << endl;
    }

    // Step 6: Ask if they want to add another artist
 
    cout << "\nWould you like to add another artist to your list? (yes/no): ";
    string response;
    getline(cin, response);

    if (response == "yes") {
        cout << "Enter the name of the new artist: ";
        getline(cin, artist);

        cout << "Rank for " << artist << " (1-10): ";
        cin >> rank;
        cin.ignore();

        // Add the new artist and rank to the vectors
        artists.push_back(artist);
        ranks.push_back(rank);

        // Sort the updated playlist

        for (int i = 0; i < artists.size() - 1; i++) {
            for (int j = i + 1; j < artists.size(); j++) {
                if (ranks[i] < ranks[j]) { // Sort by rank in descending order
                    swap(ranks[i], ranks[j]);
                    swap(artists[i], artists[j]);
                }
            }
        }

        // Display the updated playlist
        cout << "\nHere’s your updated 'Spotify Wrapped themed' favorites list:" << endl;
        for (int i = 0; i < artists.size(); i++) {
            cout << i + 1 << ". " << artists[i] << " (Rank: " << ranks[i] << ")" << endl;
        }
    } else {
        cout << "\nThanks for creating your 'Spotify Wrapped' favorites list!" << endl;
    }

    return 0; // End of the program
}