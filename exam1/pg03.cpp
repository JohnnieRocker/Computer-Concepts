#include<iostream>
using namespace std;
double s(int n)
{
  double sum,i,j;
  for(i=1;i<=n;i++)
  {
    sum+=(i-1)/i;
  }
return sum;
}
int main()
{
  int n;
  cout<<"Enter n:";
  cin>>n;
  cout<<"S("<<n<<")="<<s(n)<<endl;
}
