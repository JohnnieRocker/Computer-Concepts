#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int cc(int n,int k2)
{
  int bigger,smaller,i;
  long mul=1;
  bigger=(k2-n>n)?(k2-n):n;
  smaller=(k2-n>n)?n:(k2-n);
 // cout<<bigger<<" "<<smaller<<endl;
  for(i=bigger+1;i<=k2;i++)
  {
    mul*=i;
   // cout<<mul<<endl;
  }
  for(i=smaller;i>0;i--)
  {
   mul/=i;
  }
  return mul;
}
int main()
{
  double p,sum;
  int n,k1,k2,j;
  cout<<"Enter p,n,k1,k2 :";
  cin>>p>>n>>k1>>k2;
  cout<<fixed<<setprecision(6);
 // cout<<cc(4,6)<<endl;
  for (j=k1;j<=k2;j++)
  {
    sum+=cc(j,n)*pow(p,j)*pow(1-p,n-j);
  }
  cout<<"Cumulative probability ="<<sum<<endl;
}

