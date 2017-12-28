#include <stdio.h>
#include "BasicGates.hpp"

class Or3 : public Gate{
    public:
        Or3(const bool A, const bool B, const bool C){
            Or or2(A, B);
            Or orOut(or2.output,C);
            output = orOut.output;
            name = "Or3";
        }
};

class And3 : public Gate{
    public:
        And3(const bool A, const bool B, const bool C){
            And and2(A, B);
            And andOut(and2.output,C);
            output = andOut.output;
            name = "And3";
        }
};

class NOr3 : public Gate{
    public:
        NOr3(const bool A, const bool B, const bool C){
            Or3 or1(A, B, C);
            Not notOut(or1.output);
            output = notOut.output;
            name = "NOr3";
        }
};

class NAnd3 : public Gate{
    public:
        NAnd3(const bool A, const bool B, const bool C){
            And3 and1(A, B, C);
            Not notOut(and1.output);
            output = notOut.output;
            name = "NAnd3";
        }
};

class XOr3 : public Gate{
    public:
        XOr3(const bool A, const bool B, const bool C){
            XOr xor1(A, B);
            XOr xorOut(xor1.output, C);
            output = xorOut.output;
            name = "XOr3";
        }
};

class XNOr3 : public Gate{
    public:
        XNOr3(const bool A, const bool B, const bool C){
            XOr3 xor1(A, B, C);
            Not notOut(xor1.output);
            output = notOut.output;
            name = "XNOr3";
        }
};