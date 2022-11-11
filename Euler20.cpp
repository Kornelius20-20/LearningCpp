#include <iostream>
#include <vector>


using namespace std;

int main() {
    int factorial = 50; 
    long long sum = 1;

    for (int i = factorial; i > 0 ; i--) {
        sum *= i;
    }

    cout << sum << endl;

    string num = to_string(sum);
    long sum2 = 0; 
    for (char i : num) {
        sum2 += (int) i - '0';
    }

    cout << sum2;

}