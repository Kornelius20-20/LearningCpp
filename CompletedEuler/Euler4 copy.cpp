#include <iostream>
#include <cmath>
#include <typeinfo.h>

using namespace std;

class Stack {
    int depth,currentpos=0;
    char value;
    bool emptyflag;
    char* arrpointer;

    public:
    Stack(int depth) {
        this->depth = depth;
        char stack[depth];
        arrpointer = stack;
    }
    void push (char item) {
        *(arrpointer+ ++currentpos) = item;
    }
    char pop () {
        return *(arrpointer + currentpos--);
    }
    bool isEmpty () {
        if (currentpos == 0) {return true;}
        else {return false;}
    }    

};


int main() {
    int num_digits=2,depth;
    long num1, num2;
    long long result;
    long number = pow(10,num_digits) -1;
    string textform;

    
    for (num1 = number; num1 > 0; num1--) {
        for (num2 = number; num2 > 0; num2--) {
            result = 7622;// num1*num2;

            textform = to_string(result);
            depth = textform.length()/2;
            Stack tmpstack = Stack(depth);
            textform = textform.c_str();

            for (int i = 0; i < depth; i++) {
                tmpstack.push(textform[i]);
                // cout << typeid(textform[i]) <<endl;
            }


            for (int i = depth; i < textform.length(); i++) {
                cout << tmpstack.pop() << "|" << textform[i] <<  endl;
                
            }
            
        }   
        break; 
    }
    

}