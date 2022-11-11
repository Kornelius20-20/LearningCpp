#include <iostream>

using namespace std;

int main() {
    int end_num = 4000000;

    int fib1 = 1, fib2 = 2, sum = 2, tmp;
    while (true) {
        tmp = fib1;
        fib1 = fib2;
        fib2 += tmp;

        if (fib2 >= end_num) { break; }
        if (fib2 % 2 == 0) {
            sum += fib2;
        }

    }
    cout << sum << endl;
}