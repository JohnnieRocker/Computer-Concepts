#include<iostream>
using namespace std;
int main()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  if(a*c-b*d==0)
  {
    if(a*d+b*c==0)
    {
      cout<<0<<endl;
    }
    cout<<a*d+b*c<<"i"<<endl;
  }
  else if (a*d+b*c==0)
  {
    cout<<a*c-b*d<<endl;
  }
  else
  {
    if (a*d+b*c>0)
    {
    cout<<a*c-b*d<<" + "<<a*d+b*c<<" i "<<endl;
    }
    else 
    {
     cout<<a*c-b*d<<" - "<<-(a*d+b*c)<<" i "<<endl;
    } 
  }
} 
