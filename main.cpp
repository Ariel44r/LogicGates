#include <stdio.h>
#include <iostream>
#include "LogicCircuits.hpp"

using namespace std;

void trueOrFalse(const bool outputGate);

int main()
{

/*
    //TwoInputGates
    {
        Or or1(0, 1);
        And and1(1,1);
        Not not1(0);
        NOr nor1(0,0);
        NAnd nand1(1,1);
        XOr xor1(0,1);
        XNor xnor1(0,1);

        {
            trueOrFalse(or1.output);
            trueOrFalse(and1.output);
            trueOrFalse(not1.output);
            trueOrFalse(nor1.output);
            trueOrFalse(nand1.output);
            trueOrFalse(xor1.output);
            trueOrFalse(xnor1.output);
        }
        
    }

    //ThreeInputGates
    {
        Or3 or3(0,0,1);
        And3 and3(1,1,0);
        NOr3 nor3(0,0,1);
        NAnd3 nand3(1,1,0);
        XOr3 xor3(0,0,1);
        XNOr3 xnor3(0,0,1);

        {
            trueOrFalse(or3.output);
            trueOrFalse(and3.output);
            trueOrFalse(nor3.output);
            trueOrFalse(nand3.output);
            trueOrFalse(xor3.output);
            trueOrFalse(xnor3.output);
        }
    }
*/
    //LogicCircuits
    {
        SemiSum semiSum(1,0);
        semiSum.outputs();        
    }

    cin.get();
	return 0;
}

 void trueOrFalse(const bool outputGate){
    if(outputGate){
        cout << "The result is true\n";
    }else {
        cout << "the result is false\n";
    }
 }
