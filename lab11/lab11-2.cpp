#include<iostream>
using namespace std;

int main()
{
  int n=10;
  int *p =&n;
  cout<<"The address of n is "<<&n<<endl;
  cout<<"The value of p is "<<p<<endl;
  cout<<"The address of p is "<<&p<<endl;
  cout<<"The variable pointed by p is "<<*p<<endl;
 return 0;
} 
