#include<iostream.h>
#include<conio.h>
class stud
{
	protected:int rollno;
	public:
		void get();
		void put();
};
void stud::get()
{
	cout<<"\nenter rollno:";
	cin>>rollno;
}
void stud::put()
{
	cout<<"\nrollno is :"<<rollno;
}
class test:public stud
{
	protected:int sub1,sub2;
	public:
		void getmar();
		void putmar();
};
void test::getmar()
{
	cout<<"\nenter mark of sub1";
	cin>>sub1;
	cout<<"\nenter mark of sub2";
	cin>>sub2;
}
void test::putmar()
{
	cout<<"\nsub1:"<<sub1;
	cout<<"\nsub2:"<<sub2;
}
class result:public test
{
	protected:int total;
	public:void display();
};
void result::display()
{
	total=sub1+sub2;
	put();
	putmar();
	cout<<"\ntotal:"<<total;
}
void main()
{
       result r;
       clrscr();
       r.get();
       r.getmar();
       r.display();
       getch();

}