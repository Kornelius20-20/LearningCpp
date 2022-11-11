#include <iostream>
 
 using namespace std; 
#include <iostream>

using namespace std;

int main()
{
    long n = 113374;

    for (long i = 113374; i < 114390 ; i++) {
        long n = i;

            while (n > 1) {
        if (!(n & 1)) { n = n/2; }
        else { n = 3*n + 1; }

    }
        cout << i << endl;
    }

    

}