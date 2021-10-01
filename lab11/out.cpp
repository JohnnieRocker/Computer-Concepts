#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
  ifstream fin(argv[1]);
  ofstream fout(argv[2]);
  stringstream ss;
  string line,proc;
  int pos=0,n=0,pp=0;
  while(getline(fin,line,'\n'))
  {
    pos=line.find('
    if(pos== string::npos)
    {
    }
    else 
    {
      line.erase(pos);
    }
    proc=line;
    pos=0;
    pp=0;
    n=0;
    while(1)
    {
      n+=1;
      pp=pos;
      pos=proc.find(';',pos+1);
      if(pos==string::npos)
      {
        if(n==1)
        {
          ss<<proc<<"\n";
        }
        break;
      }
      
      
      if(pp==0)
      {
        
        ss<<proc.substr(pp,pos-pp+1)<<"\n";
      }
      else
      {
        
        ss<<proc.substr(pp+1,pos-pp)<<"\n";
      }
      
      

    }
    fout<<ss.str();
    ss.str("");
  }
  cout<<"Finished!"<<endl;
}

