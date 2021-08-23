#include <iostream>
using namespace std;
int main()
{
  int n,c;
  cout<<"Enter the number of elements of the array\n";
  cin>>n;
  int arr[n],i;
  for(i=0;i<n;i++)
    cin>>arr[i];
  int num;
  cout<<"Enter the number to be searched\n";
  cin>>num;
  for(i=0;i<n;i++)
  {
    if(arr[i]==num)
    c++;
  }
  if(c>0)
    cout<<"Number found\n";
  else
  cout<<"Number not found\n";
}
