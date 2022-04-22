#include<iostream.h>
#include<conio.h>
class art
{
	protected:
		char name[20];
		int mark;
	public:void get()
	{
	cout<<"\nenter the name of art student:\n";
	cin>>name;
	cout<<"\nenter the marks of art student:\n";
	cin>>mark;
	}
};
class science
{
	protected:char name1[20];
		int mark1;
	public:void getdata()
		{
		cout<<"\nenter the name of science student:";
		cin>>name1;
		cout<<"\nentr the marks of science student:";
		cin>>mark1;
		}
};
class result:public art,public science
{
	public:void display()
		{
		cout<<"\nname of art student:\t"<<name;
		cout<<"\nmark of art student:\t"<<mark;
		cout<<"\nname of science student:\t"<<name1;
		cout<<"\nmark of science student:\t"<<mark1;
		}
};
void main()
{
	clrscr();
	result r;
	r.get();
	r.getdata();
	r.display();
	getch();
}



