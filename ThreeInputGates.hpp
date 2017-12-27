#include <stdio.h>
#include "BasicGates.hpp"

class Or3{
    public:
        bool output;
        Or3(const bool A, const bool B, const bool C){
            Or or2(A, B);
            Or orOut(or2.output,C);
            output = orOut.output;
        }
};

class And3{
    public:
        bool output;
        And3(const bool A, const bool B, const bool C){
            And and2(A, B);
            And andOut(and2.output,C);
            output = andOut.output;
        }
};

class NOr3{
    public:
        bool output;
        NOr3(const bool A, const bool B, const bool C){
            Or3 or1(A, B, C);
            Not notOut(or1.output);
            output = notOut.output;
        }
};

class NAnd3{
    public:
        bool output;
        NAnd3(const bool A, const bool B, const bool C){
            And3 and1(A, B, C);
            Not notOut(and1.output);
            output = notOut.output;
        }
};

class XOr3{
    public:
        bool output;
        XOr3(const bool A, const bool B, const bool C){
            XOr xor1(A, B);
            XOr xorOut(xor1.output, C);
            output = xorOut.output;
        }
};

class XNOr3{
    public:
        bool output;
        XNOr3(const bool A, const bool B, const bool C){
            XOr3 xor1(A, B, C);
            Not notOut(xor1.output);
            output = notOut.output;
        }
};