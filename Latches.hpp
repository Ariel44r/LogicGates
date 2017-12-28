#include <string>
#include <iostream>

using namespace std;

class SRLatch{
     public:
        string name;
        string status;
        bool Q;
        bool Qn;
        int count00;

        SRLatch(){
            name = "SRLatch";
            count00 = 0;
        }
        SRLatch(const bool S, const bool R){
            name = "SRLatch";
            count00 = 0;
            this->setParameters(S,R);
        }
        void printParameters(){
            cout << name.c_str() << "\n";
            cout << "Q = " << Q << "\n";
            cout << "Qn = " << Qn << "\n";
            cout << "Status = " << status.c_str() << "\n\n";
        }
        void resetParameters(const bool S, const bool R){
            this->setParameters(S,R);
        }
        void setParameters(const bool S, const bool R){
            if(S && !R){
                Q = true;
                Qn = false;
                status = "allowed0";
            }
            if((!S && !R) && count00 == 0){
                count00 = 1;
                Q = true;
                Qn = false;
                status = "allowed1";
            } else if ((!S && !R) && count00 == 1){
                Q = false;
                Qn = true;
                count00 = 0;
                status = "allowed3";
            }
            if(!S && R){
                Q = false;
                Qn = true;
                status = "allowed2";
            }
            if(S && R){
                Q = false;
                Qn = false;
                status = "prohibited4";
            }
        }
};
