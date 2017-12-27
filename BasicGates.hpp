#include <stdio.h>

class Or{
    public:
        bool output;
        Or(const bool A, const bool B){
            output = (A || B);
        }
        ~Or(){}
};

class And{
    public:
        bool output;
        And(const bool A, const bool B){
            output = (A && B);
        }
        ~And(){}
};

class Not{
    public:
        bool output;
        Not(const bool A){
            output = !A;
        }
        ~Not(){}
};

class NOr{
    public:
        bool output;
        NOr(const bool A, const bool B){
            Or or1(A, B);
            Not not1(or1.output);
            output = not1.output;
        }
        ~NOr(){}
};

class NAnd{
    public:
    bool output;
        NAnd(const bool A, const bool B){
            And and1(A, B);
            Not not1(and1.output);
            output = not1.output;
        }
        ~NAnd(){}
};

class XOr{
    public:
        bool output;
        XOr(const bool A, const bool B){
            Not notA(A);
            Not notB(B);
            And andA(A,notB.output);
            And andB(notA.output,B);
            Or orOut(andA.output, andB.output);
            output = orOut.output;
        }
        ~XOr(){}
};

class XNor{
    public:
        bool output;
        XNor(const bool A, const bool B){
            XOr xor1(A,B);
            Not notOut(xor1.output);
            output = notOut.output;
        }
};