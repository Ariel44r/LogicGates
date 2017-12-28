#include <string>

using namespace std;

class Gate{
    public:
        string name;
        bool output;
};

class Or : public Gate{
    public:
        Or(const bool A, const bool B){
            output = (A || B);
            name = "Or";
        }
        ~Or(){}
};

class And : public Gate{
    public:
        And(const bool A, const bool B){
            output = (A && B);
            name = "And";
        }
        ~And(){}
};

class Not : public Gate{
    public:
        Not(const bool A){
            output = !A;
            name = "Not";
        }
        ~Not(){}
};

class NOr : public Gate{
    public:
        NOr(const bool A, const bool B){
            Or or1(A, B);
            Not not1(or1.output);
            output = not1.output;
            name = "NOr";
        }
        ~NOr(){}
};

class NAnd : public Gate{
    public:
            NAnd(const bool A, const bool B){
                And and1(A, B);
                Not not1(and1.output);
                output = not1.output;
                name = "NAnd";
            }
            ~NAnd(){}
};

class XOr : public Gate{
    public:
        XOr(const bool A, const bool B){
            Not notA(A);
            Not notB(B);
            And andA(A,notB.output);
            And andB(notA.output,B);
            Or orOut(andA.output, andB.output);
            output = orOut.output;
            name = "XOr";
        }
        ~XOr(){}
};

class XNor : public Gate{
    public:
        XNor(const bool A, const bool B){
            XOr xor1(A,B);
            Not notOut(xor1.output);
            output = notOut.output;
            name = "XNOr";
        }
};