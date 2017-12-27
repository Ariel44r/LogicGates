#include <stdio.h>
#include <iostream>
#include "BasicGates.hpp"

using namespace std;

int main()
{
    Or or1(0, 1);
    And and1(1,1);
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
    /* code */
    cin.get();
	return 0;
}
