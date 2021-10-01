#include<iostream>
#include<iomanip>
using namespace std;
double nn;
//int n;
double cal1(double n)
{
  double a;

  if (n==nn)
  {
    return (2.0*nn-1)+(nn*nn/(2*nn+1));
  }
  else
  {
    return(2*n-1)+(n*n/cal1(n+1));
  }
}

double cal2(int n)
{
  double a;
  a=4.0/(cal1(1.0));
  return a;
}

int main()
{
 // cout<<fixed<<showpoint<<setprecision(8);
  cout<<"Enter n:";
  cin>>nn;
  cout<<"pi("<<nn;
  cout<<fixed<<showpoint<<setprecision(8);
  cout <<") ="<<cal2(nn)<<endl;
}

  
