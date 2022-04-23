#include<iostream.h>
#include<conio.h>
class demo
{
	private:
		int a;
	public:
		void get();
		friend void show (demo s);
};

void demo:: get()
{
	cout<<"enter value of a";
	cin>>a;
}
void show(demo s)
{
	cout<<"value of a is"<<s.a;
}
void main()
{
clrscr();
	demo D;
	D.get();
	show (D);
}

