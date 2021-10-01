#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  stringstream ss;
  ss.str("lab10-6.cpp example");
  string s = ss.str();
  cout<< s<<endl;

  return 0;
}

