#include "ThreeInputGates.hpp"
#include <iostream>
#include <string>

using namespace std;

class SemiSum{
    public:
        string name;
        bool output, carry;
        SemiSum(){
            output = false;
            carry = false;
            name = "Semi Sum";
        }
        SemiSum(const bool A, const bool B){
            XOr xorOut(A, B);
            And andOut(A, B);
            output = xorOut.output;
            carry = andOut.output;
            name = "Semi Sum";
        }

        void printOutputs(){
            cout << name << "\n output = " << output << "\n carry = " << carry << "\n";
        }
};

class CompSum{
    public:
        bool output, carry;
        string name;
        CompSum(){
            output = false;
            carry = false;
            name = "Complete Sum";
        }
        CompSum(const bool A, const bool B, const bool Ci){
            output = this->getSum(A,B,Ci);
            carry = this->getCarry(A,B,Ci);
            name = "Complete Sum";
        }
        bool getSum(const bool A, const bool B, const bool Ci){
            XOr xor1(A, B);
            XOr xor2(Ci, xor1.output);
            return xor2.output;
        }
        bool getCarry(const bool A, const bool B, const bool Ci){
            And and1(A,B); 
            And and2(A,Ci);
            And and3(B,Ci);
            Or3 or3in(and1.output, and2.output, and3.output);
            return or3in.output;
        }
        void printOutputs(){
            cout << name << "\n output = " << output << "\n carry = " << carry << "\n";
        }
};