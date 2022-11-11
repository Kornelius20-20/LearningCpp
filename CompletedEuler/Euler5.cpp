#include <iostream>

using namespace std;

int main() {
    int start = 1, stop = 20;
    long long smolnum = 1;
    bool dirty_divide;
    
    while (true) {
        dirty_divide = false;
        for (int i = start; i < stop+1; i++) {
            if (smolnum % i != 0) {
                dirty_divide = true;
                break;
            }
        }
        if (dirty_divide==false) {
            cout << smolnum << endl;
            break;
        }
        smolnum++;
    }
    
}