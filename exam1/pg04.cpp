#include<iostream>
using namespace std;
bool And(int x,int y)
{
  return x && y;
}
bool Or(int x,int y)
{
  return x||y;
}
bool Nor(int x,int y)
{
  return !(x||y);
}
int main()
{
  int x,y,z;
  cout<<"Enter input(x,y) & output (z):";
  cin>>x>>y>>z;
  cout<<"Possible gate(s) for input ("<<x<<","<<y<<") and output ("<<z<<") :";
 // cout<<Or(x,y)<<endl;
  if (z==And(x,y))
  {
   cout<<"AND ";
  }
  if(z==Or(x,y))
  {
    cout<<"OR ";
  }
  if(z==Nor(x,y))
  {
    //cout<<Nor(x,y);
    cout<<"NOR";
  }
   cout<<endl;
}
