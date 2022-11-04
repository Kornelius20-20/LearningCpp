#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long num, long currentnum=2) {
    if (currentnum > sqrt(num)) {
        return true;
    } else if (num % currentnum == 0){
        return false;
    } else {
        isPrime(num,++currentnum);
    }
}

int main() {
    int stop = 10001;
    long num=1;
    bool aprime;

    for (int i=0;i<stop;i++) {
        aprime = false;
        // num = prev_prime;

        while (aprime==false) {
            aprime = isPrime(++num);
            // prev_prime = num;
        }
        
    }
    cout << num << ' ';
}