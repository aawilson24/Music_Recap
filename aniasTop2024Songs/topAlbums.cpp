#include <iostream>  // For input and output
#include <vector>    // For dynamic arrays (vectors)
#include <string>    // For handling text (strings)
#include <algorithm> // For sorting
using namespace std;

int main() {

    // Step 1: Welcome message
    cout << "Welcome to your personalized favorite Artists list, inspired by your favorite music apps!" << endl;
    cout << "You'll enter your favorite artists and rank them by how much you love them.\n" << endl;

    // Step 2: Create vectors to store artist names, ranks, albums, and ratings
    vector<string> artists;  // To store artist names
    vector<int> ranks;       // To store artist rankings (scores)
    vector<string> albums;   // To store album names for each artist
    vector<string> ratings;  // To store album ratings in stars

    // Step 3: Input artist names and ranks
    string artist;  // Temporary variable to store the artist name
    int rank;       // Temporary variable to store the artist rank

    cout << "Enter your top 5 favorite artists and rank them from 1 to 10 (1 = most favorite):" << endl;

    for (int i = 1; i <= 5; i++) {
        // Input artist name
        cout << "Artist " << i << ": ";
        getline(cin, artist);
        artists.push_back(artist);

        // Input artist rank
        cout << "Rank for " << artist << " (1-10): ";
        cin >> rank;
        ranks.push_back(rank);
        cin.ignore(); // Clear the input buffer for the next line of input
    }

    // Step 4: Ask for albums and their ratings
    cout << "\nNow let's add albums and rate them for each artist to complete your playlist!" << endl;

    string album;  // Temporary variable to store the album name
    int albumRating; // Temporary variable to store the album rating (1-5)

    for (int i = 0; i < artists.size(); i++) {
        cout << "Enter the most iconic album for " << artists[i] << ": ";
        getline(cin, album);
        albums.push_back(album);  // Add the album name to the vector

        // Input album rating
        cout << "Rate the album \"" << album << "\" on a scale of 1 to 5 stars: ";
        cin >> albumRating;
        cin.ignore(); // Clear the input buffer for the next line of input

        // Convert numeric rating to stars
        string stars(albumRating, '★');
        ratings.push_back(stars);  // Add the star rating to the vector
    }

    // Step 5: Sort all data based on ranks
    for (int i = 0; i < ranks.size() - 1; i++) {
        for (int j = 0; j < ranks.size() - i - 1; j++) {
            if (ranks[j] > ranks[j + 1]) {
                // Swap ranks
                swap(ranks[j], ranks[j + 1]);
                // Swap corresponding artists
                swap(artists[j], artists[j + 1]);
                // Swap corresponding albums
                swap(albums[j], albums[j + 1]);
                // Swap corresponding ratings
                swap(ratings[j], ratings[j + 1]);
            }
        }
    }

    // Step 6: Display the complete playlist
    cout << "\nHere's your personalized favorites list with albums and ratings (sorted by rank):" << endl;
    for (int i = 0; i < artists.size(); i++) {
        cout << i + 1 << ". " << artists[i] 
             << " (Rank: " << ranks[i] << ")"
             << " - Album: " << albums[i]
             << " - Rating: " << ratings[i] << endl;
    }

    cout << "\nThanks for creating your favorites list!" << endl;

    return 0; // End of the program
}
