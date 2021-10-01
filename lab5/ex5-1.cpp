#include<iostream>
#include<cmath>
using namespace std ;
double result1(int n)
{
  double i;
  double sum1,m;
  for(i=1;i<=n;i++)
  {
    m=1.0/i;
   // cout<<m<<endl;
    sum1+=m;
  }
  return sum1;
}
double result2(int n)
{
  int i;
  double sum2=0,m=1;
  double mul;
  for(i=1;i<=n;i++)
  {
  m/=i;
  sum2+=m;
  }
  return sum2;
}
int main()
{
  int n;
  double s1,s2;
  cout<<"Enter an integer value for the number of order n:"<<endl;
  cin>>n;
  cout<<"The results of S1 and S2 are :"<<endl;
  s1=result1(n);
  s2=result2(n);
  cout<<"S1="<<s1<<endl;
  cout<<"S2="<<s2<<endl;
  return 0;
}
