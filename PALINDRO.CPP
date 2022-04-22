#include<iostream.h>
#include<conio.h>
void main()
	{int rev=0,n,r,p;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
	 r=n%10;
	 rev=(rev*10)+r
	 n=n/10;
	}
	if(rev==p)
	{
	 cout<<"this is palindrome";
	}
	else
	{
	 cout<<"this is not palindrome";
	}
getch();
}