#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<algorithm>
using namespace std;
int main(int argc, char *argv[])
{
  stringstream ss;
  ss.str("");
  ifstream input(argv[1]);
  ofstream myfile;
  myfile.open("ex11-1.txt",ios::out);
  string textline="";
  string::iterator it;
  int space=-1,comma=0,period=0,exclam=0,word=0;
  int s1=0;
  int sn=0,cn=0,pn=0,en=0,wn=0,nn=0,n=0;
  int matrix[100]={0};
  int matrix2[100]={0};
  while(getline(input,textline,'\n'))
  {
    while(1)
    {
      comma=textline.find(",",comma+1);
      //textline.erase(comma,1);
      if(comma==string::npos)
      {
        break;
      }
      cn+=1;
    }
    while(1)
    {
      period=textline.find(".",period+1);
      //textline.erase(period,1);
      if(period==string::npos)
      {
        break;
      }
      pn+=1;
    }
    while(1)
    {
      exclam=textline.find("!",exclam+1);
      if(exclam==string::npos)
      {
        break;
      }
      en+=1;
    }
    while(1)
    {
      s1=space;
      space=textline.find(" ",space+1);
      if(space-s1>1)
      {
        wn+=1;
      }
      if(space==string::npos)
      {
        wn+=1;
        break;
      }
    }
    s1=0;
    space=-1;
    myfile<<textline<<endl;
  }
  myfile<<"#"<<endl;
  myfile<<"# Text analysis result:"<<endl;
  myfile<<"# word: "<<wn<<endl;
  myfile<<"# comma: "<<cn<<endl;
  myfile<<"# period: "<<pn<<endl;
  myfile<<"# exclamation mark: "<<en<<endl;
  myfile<<"#"<<endl;
  space=0;
  s1=0;
  nn=0;
  int leng,eof,temp;
  string line="";
  string tem="";
  input.clear();
  input.seekg(0,ios::beg);

  while(getline(input,textline,'\n'))
  {
  textline.erase(remove(textline.begin(),textline.end(),','),textline.end());
  textline.erase(remove(textline.begin(),textline.end(),'.'),textline.end());
  textline.erase(remove(textline.begin(),textline.end(),'!'),textline.end());

  line=textline;
  while(1)
  {
    s1=space;
    space=line.find(" ",space+1);
    //cout<<"s1:"<<s1<<endl;
    //cout<<"space:"<<space<<endl;
    //cout<<"space-s1:"<<space-s1<<endl;
    if(space-s1==1 && nn==0)
    {
      nn+=1;
      matrix2[nn]=s1;
      matrix[nn]=space;
    }
    if(space-s1>1)
    {
      nn+=1;
      matrix2[nn]=s1;
      matrix[nn]=space;
    }
    if(space==string::npos)
    {
      break;
    }
    //cout<<"space:"<<matrix[nn]<<endl;
  }
  for(n=1;n<=nn;n++)
  {
    //cout<<"substr:"<<matrix2[n]<<","<<matrix[n]<<endl;
    leng=matrix[n]-matrix2[n];
    //cout<<line.substr(matrix2[n],leng)<<endl;
    ss<<line.substr(matrix2[n],leng);
  }
  temp=matrix[nn];
  tem=line[temp];
  while(tem==" ")
  {
    temp+=1;
    tem=line[temp];
  }
  //cout<<"space:"<<matrix[nn]<<endl;
  //cout<<"length:"<<line.length()<<endl;
  leng=line.length()-temp;
  //cout<<"leng:"<<leng<<endl;
  //cout<<line.substr(matrix[nn],1)<<line.substr(temp,leng)<<endl;
  //cout<<line.substr(space,leng);
  //cout<<ss.str()<<endl;
  //myfile<<endl;
  ss<<line.substr(matrix[nn],1)<<line.substr(temp,leng);
  //cout<<ss.str()<<endl;
  nn=0;
  s1=0;
  space=0;
  myfile<<ss.str()<<endl;
  ss.str("");
  line="";
  }
  cout<<"Finished!"<<endl;
}
