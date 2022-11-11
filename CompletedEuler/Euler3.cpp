#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long final_number, long long current_number=2) {
    if (final_number == 1) {return true;}
    if (current_number >= sqrt(final_number)) { return true; }
    else if (final_number % current_number++ == 0) { return false; }
    else { return isPrime(final_number,current_number); }
    
}


int main() {
    long long final_num = 600851475143;
    long long current_factor;
    for (long long i = 1; i < sqrt(final_num); i++) {
        if (isPrime(i) & final_num % i == 0) { current_factor = i;}
    }

   cout << current_factor << endl;
}