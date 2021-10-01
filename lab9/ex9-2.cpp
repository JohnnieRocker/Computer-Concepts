#include<fstream>
#include<iostream>
#include<string>
using namespace std;
int Eucl(int a,int b)
{
  int bigger,smaller;
  bigger=(a>b)?a:b ;
  smaller=(a>b)?b:a ;
  if(bigger%smaller==0)
  {
    return smaller;
  }
  else 
  {
    return  Eucl(smaller,(bigger%smaller));
  }
}
int main()
{
  int a,b,c,e;
  char in[30];
  char out[30];
  ifstream in_file;
  cout<<"Enter the input file name:";
  cin>>in;
  in_file.open(in);
  in_file>>a>>b>>c;
  e=Eucl(Eucl(a,b),c);
  cout<<"Enter the output file name:";
  cin>>out;
  ofstream out_file(out);
  out_file<<"gcd("<<a<<","<<b<<","<<c<<") is "<<e<<"."<<endl;
  cout<<"gcd calculated!"<<endl;

}

