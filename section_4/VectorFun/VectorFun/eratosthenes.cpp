#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

void sieveOfEratosthenes(int n) {
    // Create a boolean array "isPrime[0..n]" and initialize
    // all entries as true. A value in isPrime[i] will
    // finally be false if i is Not a prime, else true.
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers.

    for (int p = 2; p * p <= n; ++p) {
        // If isPrime[p] is not changed, then it is a prime
        if (isPrime[p]) {
            // Update all multiples of p as not prime, starting from p*p
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    // Print all prime numbers
    std::cout << "Prime numbers up to " << n << " are: " << std::endl;
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p]) {
            std::cout << p << " ";
        }
    }
    std::cout << std::endl;
}

// Example usage in main function:
int main() {
    int limit = 100; // Find primes up to 100
    sieveOfEratosthenes(limit);
    return 0;
}
