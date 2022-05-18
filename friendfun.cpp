#include<iostream>
using namespace std;

class B;
class A
{
   private:int a;
   public: A();
           friend void add(A &x,B &y);
};

class B
{
   private:int b;
   public: B();
          friend void add(A &x,B &y);
 };

A::A()
{
   a=10;
}

B::B()
{
   b=20;
}

void add(A &x,B &y)
{
   cout<<x.a+y.b;
}

int main()
{
   A P;
   B Q;
   add(P,Q);
  

}
    