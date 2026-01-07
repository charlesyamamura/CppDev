#include <iostream>
using namespace std;

int countEvens(int arr[], int size);

int main() {
    int numbers[] = {2, 7, 10, 5, 6, 1, 100, 10};
    int count = countEvens(numbers, 8);
    cout << count << endl;
    return 0;
}

int countEvens(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
