//to demostrate copy constructor
#include<iostream.h>
#include<conio.h>
class sample
{
    private:
     int a;

       public:
	  sample(int x);
	  sample(sample&a);


       };
       sample::sample(int x)
       {
	a=x;
	//b=y;
	  cout<<"a="<<a<<endl;
	  // cout<<"b="<<b<<endl;
	  }
	  sample:: sample(sample&a)
	  {
	  a=a,a;
	   cout<<"a="<<endl;
	   }
	   void main()
	   {
	   clrscr();
	   sample s(10);
	   sample s1=s;
	   getch();
	   }




































































































































































































































































