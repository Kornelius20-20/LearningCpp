#include <iostream>

using namespace std;

int main() {
    int end_num = 1000;

    int sum = 0;
    for (int i=1;i < end_num;i++) {
        if (i%5 == 0  || i%3 == 0) {
            sum += i;
        }
    }

    cout << sum << endl;
}