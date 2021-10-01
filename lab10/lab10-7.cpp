#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
  stringstream ss;
  string strvalues = "32 240 2 145";
  ss.str(strvalues);
  for(int n=0;n<4;n++)
  {
    int val;
    ss>> val;
    cout<<val<<endl;
  }
  cout<<"Finished writing the numbers in: "<<endl;
  cout<<ss.str()<<endl;
  return 0;
}
