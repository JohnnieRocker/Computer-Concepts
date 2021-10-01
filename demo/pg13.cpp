#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int x,d;
double cal2(int n)
{
  if (n==1)
  {
    return 2;
  }
  else
  {
    return 2+(x-1)/cal2(n-1);
  }
}

double cal1(int a,int n)
{ 
  return 1+(a-1)/cal2(n);
}



int main()
{
  cout<<fixed<<showpoint<<setprecision(8);
  cout<<"Enter x and d:";
  cin>>x>>d;
  cout<<"SQF("<<x<<","<<d<<") ="<<cal1(x,d)<<endl;
}
