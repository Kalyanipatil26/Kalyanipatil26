#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
private: int a,b;
        

public: void get();
        void put();
};
void demo::get()
{
   cout<<"enter value of a"<<endl;
   cin>>a;
   cout<<"enter value of b"<<endl;
   cin>>b;
}

void demo::put()
{
   cout<<"value of a is ="<<a<<endl;
   cout<<"value of b is ="<<b;
}
 
int main()
{
clrscr();
  demo z;
  z.get();
  z.put();
}