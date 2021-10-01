#include<iostream>
using namespace std;
int func(int n)
{
  if (n==0)
  {
    return 2;
  }
  else if (n==1)
  {
    return 1;
  }
  else
  {
    return 5*func(n-1)-6*func(n-2)+n;
  }
}
int main()
{
  int n;
  while(1)
  {
  cout<<"Enter n:";
  cin>>n;
  if(n<=0)
  {
    break;
  }
  cout<<"f("<<n<<") ="<<func(n)<<endl;
  }
}

