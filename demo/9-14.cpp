#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;
int main(int argc,char *argv[])
{
  stringstream ss;
  string num="";
  ifstream fin(argv[1]);
  while(getline(fin,num,','))
  {
    cout<<num<<endl;
    num="";
  }
}

