#include<iostream>
#include<sstream>
using namespace std;
int main()
{
  stringstream ss;
  int data =200;
  int result;
  ss<<data;
  ss>>result;
  cout<<result<<endl;

  return 0;
}
