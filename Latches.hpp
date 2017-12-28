#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class SRLatch{
    public:
        string name;
        SRLatch(){
            name = "SRLatch";
        }
        void printParameters(){
            cout << "the name is: " << name << "\n";
        }
};
