//program to demostrate armstrong no
#include<iostream.h>
#include<conio.h>
int main()
{
	int n,r,sum=0,t;
	cout<<"enter the number";
	cin>>n;
	t=n;
	while(n>0)
	{
	  r=n%10;
	  sum=sum+(r*r*r);
	  n=n/10;
	}
	if(t==sum)
	{
	 cout<<"armstrong number";
	}
	else
	{
	 cout<<"not armstrong number";
	}
getch();
return 0;
}
