#include<iostream>
class student
{
  private: int rollno;
  public: void getr();
          void putr();
};

class saddress: public student
{
  private:char name[10];
  public: void getn();
          void putn();
};
void student::getr()
{
  cout<<"enter the roll no :";
  cin>>rollno;
}
void student::putr()
{
  cout<<"roll no is :"<<rollno<<endl;
}

void saddress::getn()
{
  cout<<"enter student name :";
  cin>>name;
}
void saddress::putn()
{
  
  cout<<"student name is :"<<name;
}

int main()
{
  saddress S1;
  S1.getr();
  S1.getn();
  S1.putr();
  S1.putn();
  
}
