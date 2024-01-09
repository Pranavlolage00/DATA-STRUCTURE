#include<iostream>
using namespace std;
class add
{
  public:
    int a,b,c;
      add()
      {
         cout<<"enter two numbers:";
         cin>>a>>b;
      }
       add(add &ob)
       {
          c=ob.a+ob.b;
          cout<<"addition="<<c;
       }
};
int main()
{
   add ob;
   add ob1(ob);
}
