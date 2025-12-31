#include <iostream>
#include <random>
using namespace std;

int main() {
    char you;

    // Generate random move for computer
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(0, 2);
    char moves[3] = {'R', 'P', 'S'};
    char comp = moves[dist(gen)];

    cout << "Choose your move (R, P, or S): ";
    cin >> you;  // read into the correct variable
    cout << "You played: " << you << "\n";
    cout << "Computer played: " << comp << "\n";

	if (you == comp) {
		cout << "It's a tie!" << endl;
	}
	else if (
			(you == 'R' && comp == 'S') ||
			(you == 'S' && comp == 'P') ||
			(you == 'P' && comp == 'R')
		) {
		cout << "You win!" << endl;
	}
	else {
		cout << "Computer wins" << endl;
	}


    return 0;
}
