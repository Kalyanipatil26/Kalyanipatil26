#include<iostream.h>
#include<conio.h>

class Demo
{
   private:
	  int a;

   public:
	Demo();
	~ Demo();
	void show();
};
Demo::Demo()
{
  cout<<"Constructor is called"<<endl<<endl;
    a=0;

}
Demo::~Demo()
{
  cout<<endl<<"Distructor is called";
}
void Demo:: show()
{
   cout<<"a= "<<a<<endl<<endl;
   a++;
}
void main()
{
    clrscr();

     Demo d1;
     d1.show();
     d1.show();

   getch();

}
