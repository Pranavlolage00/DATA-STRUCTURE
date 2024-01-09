#include<iostream>
using namespace std;
class mypoint
{
   public:
     int x,y;
     mypoint()
     {
        cout<<"enter two x and y:";
        cin>>x>>y;
     }
     mypoint(mypoint &ob)
     {
         x=ob.x;
         y=ob.y;
         
     }
      mypoint(int x, int y)
      {
         this->x=x;
         this->y=y;
      }
      void disp()
      {
        cout<<"x="<<x<<"& y="<<y;      
      }
};
int main()
{ 
    mypoint ob;
    mypoint ob1(ob);
    mypoint ob2(100,200);
    mypoint ob3(ob1);
    ob.disp();
    ob3.disp();
    
}

