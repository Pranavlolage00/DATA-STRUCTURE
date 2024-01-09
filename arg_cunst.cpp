#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
    int rno,i,n,*m;
    char sname[20];
    float s=0,p;
     student(int rno,char sname[20],int n)
     {
        this->rno=rno;
        this->n=n;
        strcpy(this->sname,sname);
        m=new int[n];
        cout<<"enter marks:";
        for(i=0; i<n; i++)
        {
          cin>>m[i];
        }
     }
  void disp()
  {
      cout<<"student roll no="<<rno<<endl;
      cout<<"student name="<<sname<<endl;
      cout<<"number ob subject="<<n<<endl;
      for(i=0; i<n; i++)
      {
         s=s+m[i];
      }
      p=(float)s/n;
      cout<<"total marks="<<s<<endl;
      cout<<"percentage="<<p<<endl;
      cout<<"class=";
      if(p>=90)
        cout<<"distinction"<<endl;
      else if(p>=70)
        cout<<"first class"<<endl;
      else if(p>=50)
         cout<<"second class"<<endl;
      else if(p>40)
          cout<<"PASS"<<endl;
      else 
        cout<<"Fail"<<endl;
  }
};
int main()
{
  int rno,n;char sname[20];
  cout<<"enter roll no:";
  cin>>rno;
  cout<<"enter student name:";
  cin>>sname;
  cout<<"enter number of subject:";
  cin>>n;
  student ob(rno,sname,n);
  ob.disp();
} 
