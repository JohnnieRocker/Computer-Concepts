#include<iostream>
using namespace std;
int main()
{
  int a=0;
  int idx;
  int jdx;
    while(a<1 || a>9)
    {
  cout<<"Enter the size of multiplication table(1~9):" ;
  cin>>a ;
  if (a<1 || a>9)
    cout<<"The size of multiplcation table should be 1~9."<<endl ;
    }
  for(idx=1;idx<=a;idx++)
  {
    for(jdx=1;jdx<a;jdx++)
    {
      cout<<idx<<"*"<<jdx<<"="<<idx*jdx<<"\t";
    }
    cout<<idx<<"*"<<jdx<<"="<<idx*jdx<<endl;
  }
  return 0;
}
