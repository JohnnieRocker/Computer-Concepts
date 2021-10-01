#include<iostream>
using namespace std;
float maxi(double l,double d)
{
  long a;
  a=0.9*l*l*l;
  a*=d;
  return a;
}
int main()
{
  double l,d,f;
  cout<<"Enter the L and D of the cube:";
  cin>>l>>d;
  cout<<"Enter the F:";
  cin>>f;
 // cout<<maxi(l,d);
  if (f==maxi(l,d))
  {
    cout<<"Cube did not move, maximum static friction ="<<maxi(l,d)<<"N."<<endl;
  }
  else if (f<maxi(l,d))
  {
    cout<<"Cube did not move,static friction ="<<f<<"N."<<endl;
  }
  else
  {
    cout<<"Cube moved, kinetic friction ="<<0.4*l*l*l*d<<"N."<<endl;
  }
}

