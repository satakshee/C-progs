#include<iostream>
using namespace std;
int main()
{
  int *a,*b;
  a= new(nothrow)int;
  if(!a)
  cout<<"memory allocation failed\n";
  else
  *a = 5;

  b= new int (10);
  cout<<"After memory allocation\n";
  cout<<"1st value: "<<*a<<endl;
  cout<<"2nd value: "<<*b<<endl;
  delete a;
  delete b;
  cout<<"After memory deallocation\n";
  cout<<"1st value: "<<a<<endl;
  cout<<"2nd value: "<<b<<endl;
  return 0;
}
