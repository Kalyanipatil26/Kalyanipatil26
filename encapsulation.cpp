#include<iostream>
#include<conio.h>

class demo
{
private: char sname[10];
         int s_rollno;
         int marks;
        

public: void get();
        void put();
};
void demo::get()
{
   cout<<"enter student name"<<endl;
   cin>>sname;
   cout<<"enter student roll no"<<endl;
   cin>>s_rollno;
   cout<<"enter student mark"<<endl;
   cin>>marks;

}

void demo::put()
{
   cout<<"student name is :"<<sname<<endl;
   cout<<"student roll no is :"<<s_rollno<<endl;
   cout<<"student marks is :"<<marks;
}
 
int main()
{
clrscr();
  demo z;
  z.get();
  z.put();
}
