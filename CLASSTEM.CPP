#include<iostream.h>
#include<conio.h>
template <class T>
class demo
{
private:T a,b;
public :demo(T x,T y)
{
a=x;
b=y;
}
void swap()
{
T t;
t=a;
a=b;
b=t;
cout<<"\nAfter swapping"<<endl;
cout<<"A->"<<a<<endl;
cout<<"B->"<<b<<endl;
}
};
void main()
{
clrscr();
demo <int>d(10,20);
d.swap();
demo<float>d1(1.4,2.4);
d1.swap();
demo<char>d2('q','p');
d2.swap();
getch();
}
