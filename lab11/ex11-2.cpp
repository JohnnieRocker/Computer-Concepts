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
    pos=line.find('/');
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
      //cout<<"pp:"<<pp<<endl;
      //cout<<"pos:"<<pos<<endl;
      if(pp==0)
      {
        //cout<<proc.substr(pp,pos-pp+1)<<endl;
        ss<<proc.substr(pp,pos-pp+1)<<"\n";
      }
      else
      {
        //cout<<proc.substr(pp+1,pos-pp)<<endl;
        ss<<proc.substr(pp+1,pos-pp)<<"\n";
      }
      //cout<<proc.substr(pp,pos-pp)<<endl;
      //ss<<proc.substr(pp,pos-pp)<<"\n";

    }
    fout<<ss.str();
    ss.str("");
  }
  cout<<"Finished!"<<endl;
}

