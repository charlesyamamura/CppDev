#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> list{};
    string item;

    cout << "Please enter your shopping items (type 'done' to finish):" << endl;
    getline(cin, item);

    while (item != "done") {
        list.push_back(item);
        cout << "You've entered: " << item << endl;
        cout << "Please enter another item, or type 'done'." << endl;
        getline(cin, item);
    }

    cout << "\nHere is your shopping list:" << endl;
    for (const string& i : list) {
        cout << "- " << i << endl;
    }

    return 0;
}
