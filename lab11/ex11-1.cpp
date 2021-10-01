#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(int argc ,char *argv[])
{
  int n1=0,n2=0,count;
  string line1,line2;
  ifstream fin1(argv[1]);
  ifstream fin2(argv[2]);
  while(getline(fin1,line1,'\n'))
  {
    n1+=1;
    //cout<<"line1:"<<line1<<endl;
    while(getline(fin2,line2,'\n'))
    {
      n2+=1;
      //cout<<"line2:"<<line2<<endl;
      if(n1==n2)
      {
        if(line1==line2)
        {
          count+=1;
        }
        break;
        //fin2.clear();
      }
    }
  }
  if(count==n1)
  {
    cout<<"SAME!"<<endl;
    cout<<n1<<"/"<<n1<<endl;
  }
  else
  {
    cout<<"DIFFERENT!"<<endl;
    cout<<count<<"/"<<n1<<endl;
  }
  
}
