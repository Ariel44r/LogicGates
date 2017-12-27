#include <stdio.h>
#include "ThreeInputGates.hpp"
#include <iostream>

using namespace std;

class SemiSum{
    public:
        bool output, carry;
        SemiSum(){
            output = false;
            carry = false;
        }
        SemiSum(const bool A, const bool B){
            XOr xorOut(A, B);
            And andOut(A, B);
            output = xorOut.output;
            carry = andOut.output;
        }

        void printOutputs(){
            cout << "\n output = " << output << "\n carry = " << carry << "\n";
        }
};