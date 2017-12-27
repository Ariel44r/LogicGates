#include <stdio.h>
#include <iostream>
#include "BasicGates.hpp"

using namespace std;

int main()
{
    Or or1(0, 1);
    And and1(1,1);
    Not not1(0);
    Nor nor1(0,0);
    Nand nand1(1,1);
    XOr xor1(0,1);
    XNor xnor1(0,1);
    if(or1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
    if(and1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
    if(not1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
     if(nor1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
    if(nand1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
    if(xor1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
    if(xnor1.output){
        cout << "The result is true\n";
    } else {
        cout << "the result is false\n";
    }
    /* code */
    cin.get();
	return 0;
}
