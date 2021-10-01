#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  stringstream ss;
  string name = "Tom ";
  ss<<"Hello "<<name<<endl;
  cout<< ss.str();

  return 0;
}
