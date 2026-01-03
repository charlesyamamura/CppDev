#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    vector<string> titles;
    vector<double> ratings;
    string title;
    double rating;

    while (true) {
        cout << "Type in a movie title (or 'done' to finish): ";
        getline(cin, title);

        if (title == "done") {
            break;
        }

        titles.push_back(title);

        cout << "Type in its rating: ";
        cin >> rating;
        ratings.push_back(rating);
        cin.ignore(); // clears newline from buffer
    }

    for (size_t i = 0; i < titles.size(); i++) {
        cout << "You rated " << titles[i]
             << " a rating of " << ratings[i] << "/10." << endl;
    }

    return 0;
}
