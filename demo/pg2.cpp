#include<iostream>
using namespace std;
int tfunc(int x,int y,int z)
{
  int k,i,j;
 if (y>=x)
 {
   return y;
 }
 else
 {
  k= tfunc(x-1,y,z);
  i= tfunc(y-1,z,x);
  j= tfunc(z-1,x,y) ;
  return tfunc(k,i,j);
 }
}
int main()
{
  int x,y,z;
  cin>>x>>y>>z;
  cout<<tfunc(x,y,z);
}
