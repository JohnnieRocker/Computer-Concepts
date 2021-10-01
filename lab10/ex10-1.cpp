#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
  fstream in_file(argv[1],ios::in |ios::out);
  //in_file.open(argv[1]);
  ofstream myfile;
  myfile.open(argv[2],ios::out);
  int pos,k,len;
  string textline="";
  while(getline(in_file,textline,'\n'))
  {
    char aa = toupper(textline[0]);
    textline[0]= aa;
    len=textline.length();
    pos =textline.find(":");
    if(pos==string::npos)
    {
      // textline[0]=aa;
      myfile<<textline<<endl;
    }
    else
    {
      //k=textline.length();
      //in_file.seekp(k+1,ios::beg);
      //in_file.put('\"');
      myfile<<textline.substr(0,pos+1)<<" \""<<textline.substr(pos+2,len)<<"\"\n";
    }
  }
  return 0;

}

    
