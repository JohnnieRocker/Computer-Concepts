#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

void gets(string aa, vector<string>& letter, vector<string> & mat, ofstream &fout)
{
  const char *array = aa.c_str();
  string text=array;
  for(int i=0;i<=text.length();i+=5)
  {
    for(int j=0;j<27;j++)
    {
      if(text.substr(i,5)==mat[j])
      {
        fout<<letter[j];
        break;
      }
    }
  }
  fout<<endl;
}

void geth(string aa,vector<string> &letter, vector<string> &mat,ofstream &fout)
{
  const char *array = aa.c_str();
  string text = array;
  int len=1,flag=0,temp=0;
  for(int i=0;i<=text.length();i+=len)
  {
    if(flag==1)
    {
      i=temp;
      len++;
    }
    for( int j=0;j<27;j++)
    {
      if(text.substr(i,len)==mat[j])
      {
        //cout<<"i:"<<i<<" len:"<<len<<endl;
        //cout<<text.substr(i,len)<<endl;
        i+=len-1;
        fout<<letter[j];
        len=1;
        flag=0;
        break;
      }
      flag=1;
    }
    temp=i;
  }
  fout<<endl;
}

void encode(string aa,vector<string> &letter, vector<string> &mat, ofstream &fout)
{
  const char *array = aa.c_str();
  string text =array;
  //cout<<text<<endl;
  for(int i=0;i<=text.length();i++)
  {
    for(int j=0;j<27;j++)
    {
      if(text.substr(i,1)==letter[j])
      {
        fout<<mat[j];
        break;
      }
    }
  }

}


      
int main(int argc,char *argv[])
{
  ifstream fin(argv[2]);
  ifstream cd(argv[3]);
  ofstream fout(argv[4]);
  stringstream ss;
  string tt="";
  string temp="";
  string textline="";
  string f1=argv[1];
  string f2=argv[3];
  int n=0;
  vector<string> letter;
  vector<string> mat;
  while(getline(cd,textline,'\n'))
  {
    ss.str(textline);
    if(n==0)
    {
      ss>>temp;
      letter.push_back(" ");
      mat.push_back(temp);
      ss.clear();
      n++;
      continue;
    }
    ss>>tt>>temp;
    letter.push_back(tt);
    mat.push_back(temp);
    n++;
    ss.clear();
  }
  //for(int i=0;i<n;i++)
  //{
    //cout<<letter[i]<<":"<<mat[i]<<endl;
  //}
  ss<<fin.rdbuf();
  string contents(ss.str());
  //cout<<contents;
  //cout<<argv[1]<<endl;
  //encode(contents,letter,mat);
  if(f1=="-e")
  {
    encode(contents,letter,mat,fout);
  }
  else
  {
    if(f2=="t02s.cb")
      gets(contents,letter,mat,fout);
    else
      geth(contents,letter,mat,fout);
  }
  return 0;
}

