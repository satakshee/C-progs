#include<iostream>
using namespace std;
int fact(int);
int main()
{
  int n;
  cout<<"\nEnter a number:  ";
  cin>>n;
  cout<<"\nfactorial= "<<fact(n);
}
int fact(int n)
{
if(n==0)
return 1;
else
return (n*fact(n-1));
}
