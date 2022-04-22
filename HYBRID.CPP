#include<iostream.h>
#include<conio.h>
   class art
   {
      protected:
	  char name[20];
	  int mark;
      public:
	 void geta()
	 {
	    cout<<"\n enter the name of art student:\n";
	    cin>>name;
	    cout<<"\n enter the mark of art student :\n";
	    cin>>mark;
	 }
   };
   class science:public art
   {
      protected :
      char name1[20];
       int mark1;
       public:
	 void getb()
	 {
	   cout<<"\n enter the name of science student:\n";
	   cin>>name1;
	   cout<<"\n enter the marks of science student:\n";
	   cin>>mark1;
	 }
  };
  class comma
  {
    protected:
      char name2[20] ;
       int mark2;
    public :
     void getc()
     {
       cout<<"\n enter the name of comma student:\n";
       cin>>name2;
       cout<<"\n enter the mark of comma student:\n";
       cin>>mark2;
     }
  };
  class result:public science ,public comma
  {
     public:
     void display();
  };
  void result::display()
  {
    geta();
    getb();
    getc();
    cout<<"\n name of art student:"<<name ;
    cout<<"\n mark of art stdent:"<<mark;
    cout<<"\n enter the name of science student:"<<name1;
    cout<<"\n enter the mark of science student :"<<mark1;
    cout<<"\n enter the name of comma student:"<<name2;
    cout<<"\n enter the mark of comma student:"<<mark2;
    getch();
  }
  void main()
  {
  clrscr();
  result r;
  r.display();
  getch();
  }



