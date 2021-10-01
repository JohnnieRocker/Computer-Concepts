#include<iostream>
using namespace std;
int main()
{
  cout<<"Enter an initial value :";
  int x,i,j;
  cin>>x;
  for(i=x;i<=x+4;i++)
  {
    for(j=i;j<=i+4;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

