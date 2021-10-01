#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

int main(int argc, char *argv[])
{
  int n=0;
  ifstream fin(argv[1]);
  string textline="";

  while(getline(fin,textline,'\n'))
  {
    n+=1;
  }
  const int num=n;

  fin.clear();
  fin.seekg(0,ios::beg);
  long double *array = new long double [n];
  n=0;
  int tt=0,cnt=0;
  long double tpm=0;
  long long long summ=0;

  while(getline(fin,textline,'\n'))
  {
    n+=1;
    if(n%2==0)
    {
      if(textline=="+")array[n]=1;
      else if (textline=="*")array[n]=0;
      else array[n]=-1;
      continue;
    }
    array[n]=stod(textline);
  }

  for(int i=0;i<=num;i+=2)
  {
    if(array[i]==0) cnt+=1;
  }

  int *tsave= new int [cnt];
  cnt=0;
  for(i=0;i<=num;i+=2)
  {
    if(array[i]==0) 
    {
      cnt+=1;
      tsave[cnt]=i;
    }
  }

  tpm=array[tsave[1]
  for(i=0;i<=cnt;i++)
  {




    



    



