#include<iostream>
using namespace std;
int main()
{
  int n,sum=0,d;
  cout<<"\nEnter the number:\t";
  cin>>n;
  while(n!=0)
  {
    d=d%10;
    sum=sum+d;
    n=n/10;
  }
  cout<<"\nSum= "<<sum;
}
