#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
using namespace std;
void s(int *,int );
void d(int *,int );
void t(int *,int );
void q(int *,int );
void display(int *,int );

int main(int argc, char *argv[])
{
  //cout<<"argc :"<<argc<<endl;
  if (argc <2 ||  argc>3)
  { 
    cout<<"Usage: ./ex12-3 [-d/-s/-t/-q] number"<<endl;
    return 0;
  }
  int *array;
  int k;
  string agv="";
  if (argc==2)
  {
    k= atoi(argv[1]);
    array= new int [k];
    s(array,k);
    display(array,k);
    return 0;
  }
  else
  {
    agv=argv[1];
    k= atoi(argv[2]);
    array = new int [k];
    if (agv=="-s")
    {
      s(array,k);
    }
    else if (agv=="-d")
    {
      d(array,k);
    }
    else if (agv=="-t")
    {
      t(array,k);
    }
    else if (agv=="-q")
    {
      q(array,k);
    }
    else 
    {
      cout<<"Usage: ./ex12-3 [-d/-s/-t/-q] number"<<endl;
      return 0;
    }
    display(array,k);
    return 0;
  }
}

void display(int *vec,int n)
{
  for (int i=1;i<=n;i++)
  {
    cout<<vec[i]<<" ";
  }
  cout<<endl;
}

void s(int *vec,int n)
{
  for (int i=1;i<=n;i++)
  {
    vec[i]=i;
  }
}

void d(int *vec,int n)
{
  for (int i=1;i<=n;i++)
  {
    vec[i]=2*i;
  }
}
void t(int *vec,int n)
{
  for (int i=1;i<=n;i++)
  {
    vec[i]=3*i;
  }
}

void q(int *vec,int n)
{
  for (int i=1;i<=n;i++)
  {
    vec[i]=4*i;
  }
}




