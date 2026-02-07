#include <iostream>
#include <vector>
#include <algorithm>

int main() {

    std::vector<int> nums{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout << "Original vector: ";
    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    for (auto it = nums.begin(); it != nums.end();) {
        if (*it % 2 == 0) {
            it = nums.erase(it);
        }
        else {
            ++it;
        }
    }
    std::cout << "After removing even numbers: ";
    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // for (int n : nums) {
    //     if (n % 2 == 0) {
    //         nums.erase(remove(nums.begin(), nums.end(), n), nums.end());
    //     }
    // }
    // std::cout << "After removing even numbers: ";
    // for (int n : nums) {
    //     std::cout << n << " ";
    // }

    return 0;
}