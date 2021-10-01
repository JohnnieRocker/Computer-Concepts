#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;

int cal(string);

int main(int argc, char *argv[])
{
  ifstream fin(argv[1]);
  string textline="";
  stringstream ss;
  stringstream change;
  int n=0;
  long double aa=0;

  while(getline(fin,textline,'\n'))n+=1;

  const int num=n;
  long double *tsave= new long double [num+1];
  fin.clear();
  fin.seekg(0,ios::beg);
  n=0;

  while(getline(fin,textline,'\n'))
  {
    n+=1;
    if(n%2==0)
    {
      if(textline=="+")
      {
        ss<<"1 ";
        tsave[n]=1;
      }
      else if(textline=="*")
      {
        ss<<"0 ";
        tsave[n]=0;
      }
      else 
      {
        ss<<"-1 ";
        tsave[n]=-1;
      }
      //cout<<tsave[n]<<endl;
    }
    else
    {
      change<<textline<<" ";
      //cout<<".str():"<<change.str()<<endl;
      //change>>aa;
      //cout<<aa<<endl;
      change>>tsave[n];
      change.str("");
      ss<<textline<<" ";
      //cout<<textline<<endl;
      cout<<tsave[n]<<endl;
    }
  }  

  int flag=0;
  long double tpm=0,temp=0;
  long double bsumm=0,ssumm=0;
  string line=ss.str();
  long double array[4];
  n=0;

  while(1)
  {
    n+=1;
    ss>>temp;
    if(n%2==1)
    {
      array[1]=temp;
      flag=0;
    }
    else if(n%2==0)
    {
      if(temp==0 && flag==0)
      {
        n+=1;
        ss>>temp;
        array[2]=temp;
        //cout<<"array[1] :"<<array[1]<<endl;
        //cout<<"array[2] :"<<array[2]<<endl;
        tpm=array[1]*array[2];
        tsave[n]=0;
        tsave[n-1]=0;
        tsave[n-2]=0;
        flag=1;
      }
      else if(temp==0 && flag==1)
      {
        n+=1;
        ss>>temp;
        array[3]=temp;
        //cout<<"array[3] :"<<array[3]<<endl;
        tsave[n]=0;
        tpm*=array[3];
        flag=1;
      }
      else 
      {
        flag=0;
        bsumm+=tpm;
        tpm=0;
      }
    }
    if(n>=num)
    {
      if(flag==1) bsumm+=tpm;
      break;
    }
  }

  n=0;
  flag=0;
  //cout<<"bsumm:"<<bsumm<<endl;
  ssumm+=tsave[1];
  for(n=2;n<=num;n+=2)
  {
    if(tsave[n]==1)ssumm+=tsave[n+1];
    else if(tsave[n]==-1)ssumm-=tsave[n+1];
  }
  //cout<<"ssumm:"<<ssumm<<endl;

  //string ldigit;
  //int digit=0,lsum=0;
  int lsum=0;

  change.str("");
  change<<(bsumm+ssumm);
  textline=change.str();
  //cout<<textline<<endl;
  lsum=cal(textline);
  change.str("");
  //change<<ssumm;
  //textline=change.str();
  //lsum+=cal(textline);


  //for(int i=0;i<textline.size();i++)
  //{
  //ldigit=textline[i];
  //if(ldigit==".")continue;
  //change<<ldigit<<" ";
  //cout<<change.str()<<endl;
  //change>>digit;
  //lsum+=digit;
  //change.str("");
  //}



  if(bsumm+ssumm>0)cout<<"+"<<lsum<<endl;
  else cout<<-lsum<<endl;

}

int  cal(string s)
{
  stringstream change;
  string number="";
  int digit=0,lsum=0;
  for(int i=0;i<s.size();i++)
  {
    number=s[i];
    if(number==".")continue;
    change<<number<<" ";
    change>>digit;
    lsum+=digit;
    change.str("");
  }
  return lsum;
}








