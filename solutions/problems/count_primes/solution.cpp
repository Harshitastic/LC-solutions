class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // No primes less than 2

        vector<bool> isPrime(n, true); // Create a boolean array
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

        for (int i = 2; i * i < n; i++) { // Iterate over potential primes
            if (isPrime[i]) {
                // Mark multiples of i as not prime
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Count the number of primes
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};
