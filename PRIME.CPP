//prime number
#include<iostream.h>
#include<conio.h>
int main()
{
	  clrscr();
	  int n,i,m=0,flag=0;
	   cout<<"enter the number primr or not";
	   cin>>n;
	   m=n/2;
	     for(i=2;i<=m;i++)
	     {
	      if(n%i==0)
	      {
		cout<<"number is not prime"
		<<endl;
		flag=1;
		break;
	      }
	     }
	      if(flag==0)
	      cout<<"numer is prime"<<endl;
	      return 0;
}



