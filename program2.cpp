#include<iostream.h>
#include<conio.h>
#include<math.h>
double power(double m,int n=2)
{
double t;
t=pow(m,n);
return t;
}
void main()
{
double num,ans;
int p;
cout<<“Enter the number: \n”;
cin>>num;
cout<<“\n enter the power:”;
cin>>p;
if(p==0)
{
ans=power(num);
cout<<“\nPower of “<<num<<” is “<<ans<<endl;
}
else
{
ans=power(num,p);
cout<<“\nPower of “<<num<<” is “<<ans<<endl;
}
getch();
}