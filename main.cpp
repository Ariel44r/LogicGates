#include <iostream>
#include "LogicCircuits.hpp"
#include "Latches.hpp"

using namespace std;

void trueOrFalse(const Gate gate);

int main()
{


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
            trueOrFalse(or1);
            trueOrFalse(and1);
            trueOrFalse(not1);
            trueOrFalse(nor1);
            trueOrFalse(nand1);
            trueOrFalse(xor1);
            trueOrFalse(xnor1);
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
            trueOrFalse(or3);
            trueOrFalse(and3);
            trueOrFalse(nor3);
            trueOrFalse(nand3);
            trueOrFalse(xor3);
            trueOrFalse(xnor3);
        }
    }

    //LogicCircuits
/*    {
        SemiSum semiSum(1,0);
        semiSum.printOutputs();
        CompSum compSum(1,1,1);
        compSum.printOutputs();      
    }
*/
    SRLatch srlatch(1,0);
    srlatch.printParameters();
    srlatch.resetParameters(0,0);
    srlatch.printParameters();
    srlatch.resetParameters(0,1);
    srlatch.printParameters();
    srlatch.resetParameters(0,0);
    srlatch.printParameters();
    srlatch.resetParameters(1,1);
    srlatch.printParameters();

    cin.get();
	return 0;
}

 void trueOrFalse(const Gate gate){
    cout << gate.name << "\n";
    if(gate.output){
        cout << "The result is true\n";
    }else {
        cout << "the result is false\n";
    }
 }
