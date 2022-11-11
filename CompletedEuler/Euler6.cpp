#include <iostream>

using namespace std;

int main() {
    long long sum_sq=0,sq_sum=0;
    int limit=100,sum_nums=0;

    for (int i=1; i < limit+1;i++) {
        sum_sq += i*i;
        sum_nums += i;
    }
    sq_sum = sum_nums*sum_nums;

    cout << sq_sum - sum_sq << endl;

}