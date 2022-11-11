#include <iostream>
#include <vector>
#include <thread>
#include <mutex>


using namespace std;

mutex m;
long long maxiters = 0, maxinput = 0;

void colatz(long number) {
        long long iters = 1;
        long long n = number;

        while (n > 1) {

        if (!(n & 1)) { n = n/2; }
        else { n = 3*n + 1; }

        iters++;

        }
    
        m.lock();
        if (iters > maxiters) { 
                maxiters = iters;
                maxinput = number;
            }
        m.unlock();
}

int main() {
    const int NUM_THREADS = 8;
    long endnum = 5000000;
    
    long previ = 2;
    for (long i = 2; i < endnum; i+= NUM_THREADS) {
        vector<thread> future;

        for (int j=0; j < NUM_THREADS; j++) {
            future.push_back(thread(colatz,i+j));
        }

        for (auto &th : future) {
        th.join();
        }
        if (i > (previ + 10000)) {
            cout <<i << endl;
            previ = i; 
            }
    }

    cout << maxinput << " : " << maxiters << endl;

    long long n = maxinput;
    while (n > 1) {
        cout << n << "->";
        if (!(n & 1)) { n = n/2; }
        else { n = 3*n + 1; }

    }
    
        cout << n << endl;

}