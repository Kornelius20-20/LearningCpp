#include <iostream>
#include <cmath>
#include <typeinfo.h>

using namespace std;

int main() {
    int num_digits=3;
    long num1, num2;
    long long result;
    long number = pow(10,num_digits) -1;
    bool isPalindrome;
    string textform;

    
    for (num1 = number; num1 > 0; num1--) {
        for (num2 = number; num2 > 0; num2--) {
            result =  num1*num2;

            textform = to_string(result);
            textform = textform.c_str();
            
            isPalindrome = true;
            for (int i=0; i < textform.length()/2; i++) {
                if (textform[i] != textform[(textform.length()-1)-i]) {
                    isPalindrome = false;
                }
            }
            if (isPalindrome == true) {
            cout << result << ' ' << isPalindrome << endl;
            goto endloop;
            }
            
        }
    }
    endloop:
    cout << "done!" << endl;
}
