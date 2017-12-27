#include <stdio.h>

class Or{
    public:
        bool output;
        Or(const bool int1, const bool int2){
            output = (int1 || int2);
        }

        ~Or(){}
};

class And{
    public:
        bool output;
        And(const bool int1, const bool int2){
            output = (int1 && int2);
        }

        ~And(){}
};