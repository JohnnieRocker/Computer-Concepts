#include<iostream>
using namespace std;

int main()
{
  int *p1= new int;
  int *p2= new int (1024);

  cout<<"*p1= "<<*p1<<endl;
  cout<<"*p2= "<<*p2<<endl;

  return 0;
}

