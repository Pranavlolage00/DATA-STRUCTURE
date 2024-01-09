#include<iostream>
#include<string.h>
using namespace std;
class fixdeposite
{
  public:
     int fdno,month,t;
     char cname[20];
     float fdamt,ir,amt;
    fixdeposite(int fdno,char cname[20],float fdamt,int month,float ir=0.85)
    {
         this->fdno=fdno;
         strcpy(this->cname,cname);
         this->fdamt=fdamt;
         this->month=month;
         this->ir=ir;
    }
    void disp()
    {
        cout<<"FD NUMBER="<<fdno<<endl;
        cout<<"CUSTOMER NAME="<<cname<<endl;
        cout<<"FD AMOUNT="<<fdamt<<endl;
        cout<<"RATE OF INTREST="<<ir<<endl;
        cout<<"NUMBER OF MONTHS="<<month<<endl; 
            t=fdamt*0.85/month;
           amt=fdamt+t;
      cout<<"maturenity amount="<<amt<<endl;
           
    }   
};
int main()
{
    int fdno,month,fdamt;char cname[20];
  cout<<"enter fd no:";
  cin>>fdno;
  cout<<"enter customer name:";
  cin>>cname;
  cout<<"enter fd amount:";
  cin>>fdamt;
  cout<<"enter number of month:";
  cin>>month;
   fixdeposite ob(fdno,cname,fdamt,month);
   ob.disp();
}
