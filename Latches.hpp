#ifndef LATCHES_H
#define LATCHES_H

#include <iostream>
#include "LogicCircuits.hpp"

using namespace std;

class Latch{
    public:
        string name;
        string status;
        bool Q;
        bool Qn;

        void printParameters(){
            cout << status << "\n";
            cout << name << "\n";
            cout << "Q = " << Q << "\n";
            cout << "Qn = " << Qn << "\n";
        }
};

class SRLatchNOr : public Latch{
    public:
        int count00;

        SRLatchNOr(){
            name = "SRLatchOr";
            count00 = 0;
        }
        SRLatchNOr(const bool S, const bool R){
            name = "SRLatchOr";
            count00 = 0;
            this->setParameters(S,R);
        }
        void resetParameters(const bool S, const bool R){
            this->setParameters(S,R);
        }
        void setParameters(const bool S, const bool R){
            if(S && !R){
                Q = true;
                Qn = false;
                status = "allow0";
            }
            if((!S && !R) && count00 == 0){
                count00 = 1;
                Q = true;
                Qn = false;
                status = "allow1";
            } else if ((!S && !R) && count00 == 1){
                Q = false;
                Qn = true;
                count00 = 0;
                status = "allow3";
            }
            if(!S && R){
                Q = false;
                Qn = true;
                status = "allow2";
            }
            if(S && R){
                Q = false;
                Qn = false;
                status = "prohibited4";
            }
        }
};

class SRLatchNAnd : public Latch{
    public:
    int count00;

    SRLatchNAnd(){
        name = "SRLatchOr";
        count00 = 0;
    }
    SRLatchNAnd(const bool S, const bool R){
        name = "SRLatchOr";
        count00 = 0;
        this->setParameters(S,R);
    }
    void resetParameters(const bool S, const bool R){
        this->setParameters(S,R);
    }
    void setParameters(const bool S, const bool R){
        if(S && !R){
            Q = false;
            Qn = true;
            status = "allow0";
        }
        if((S && R) && count00 == 0){
            count00 = 1;
            Q = false;
            Qn = true;
            status = "allow1";
        } else if ((S && R) && count00 == 1){
            Q = true;
            Qn = false;
            count00 = 0;
            status = "allow3";
        }
        if(!S && R){
            Q = true;
            Qn = false;
            status = "allow2";
        }
        if(!S && !R){
            Q = true;
            Qn = true;
            status = "prohibited4";
        }
    }
};

class LatchConIn : public Latch{
    public:
        LatchConIn(){
            name = "Latch Control Input";
        }
        LatchConIn(const bool S, const bool R, const bool En){
            NAnd nand1(S, En);
            NAnd nand2(En, R);
            SRLatchNAnd srlatchnand(nand1.output, nand2.output);
            name = "Latch Control Input";
            Q = srlatchnand.Q;
            Qn = srlatchnand.Qn;
        }
};

#endif // LATCHES_H
