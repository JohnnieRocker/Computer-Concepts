#include<iostream>
#include<cmath>
using namespace std;
void decimal(long n)
{
 if((n/2)!=0)
 {
  if((n%2)==1)
  {
  decimal(n/2);
  cout<<1;
  }
  else
  {
   decimal(n/2); 
   cout<<0;
  }
 }
 else cout<<1;
}
int main()
{
  long v;
  while(1)
  {
  cout<<"Enter a decimal value:"<<endl;
  cin>>v;
  if(v<=0)
  {
    cout<<"Exit!";
    break;
  }
  cout<<"The binary value of "<<v<<" is ";
  decimal(v);
  cout<<endl;
  }
}

