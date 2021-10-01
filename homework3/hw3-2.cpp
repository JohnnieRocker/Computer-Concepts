#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<cstdlib>
using namespace std;
int step;
int **newarray( const int,const int);
void initialarray(int **,const int ,const int);
void deletearray(int **,const int);
void displayarray(int **,const int,const int);
void ripple(int **,const int ,const int ,int ,int ,int ,int);
void assignseed(int **,const int, const int ,int);
void addarray(int **,int **,const int , const int);
int findmax(int **,const int ,const int );
void count(int **,const int ,const int ,int);

int main(int argc, char *argv[])
{
  int m=0,n=0,num=0,p1=0,p2=0,stp=0;
  ifstream fin(argv[1]);
  string textline="";
  stringstream ss;

  getline(fin,textline,'\n');
  ss.str(textline);
  ss>>m>>n>>step;
  ss.str("");
  ss.clear();
  int **summ= newarray(m,n);
  
  while(getline(fin,textline,'\n'))
  {
    int **temp= newarray(m,n);
    ss.str(textline);
    ss>>num>>p1>>p2>>stp;
    ripple(temp,m,n,num,p1,p2,stp);
    addarray(summ,temp,m,n);
    deletearray(temp,m);
    ss.str("");
    ss.clear();
  }
  //displayarray(summ,m,n);
  int max=findmax(summ,m,n);
  count(summ,m,n,max);
  return 0;

}

int **newarray(const int m,const int n)
{
  int **mat = new int *[m];
  for(int i=0;i<m;i++)
  {
    for (int j=0;j<n;j++)
      mat[i]=new int [n];
  }
  return mat;
}

void initialarray(int **mat,const int m,const int n)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      mat[i][j]=0;
  }
}

void displayarray(int **mat,const int m,const int n)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      cout<<mat[i][j]<<" ";
    cout<<endl;
  }
}

void deletearray(int **mat,const int m)
{
  for(int i=0;i<m;i++)
    delete[]mat[i];
  delete []mat;
}


void ripple(int **a1,const int m,const int n,int seed,int p1,int p2,int stp)
{
  initialarray(a1,m,n);
  a1[p1][p2]=seed;
  //displayarray(a1,m,n);
  //cout<<endl;

  for(int cnt=0;cnt<(step-stp);cnt++)
  {
    assignseed(a1,m,n,seed);
  }
}

void assignseed(int **a1,const int m,const int n,int seed)
{
  int **a2= newarray(m,n);
  for(int i=0;i<m;i++)
  {
    for (int j=0;j<n;j++)
    {
      if(a1[i][j]==0)continue;
      else 
      {
       if((i-1)>=0) a2[i-1][j]=seed;
       if((i+1)<m) a2[i+1][j]=seed;
       if((j-1)>=0) a2[i][j-1]=seed;
       if((j+1)<n) a2[i][j+1]=seed;
       a2[i][j]=seed;
      }
    }
  }

  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      a1[i][j]=a2[i][j];
      a2[i][j]=0;
    }
  }
  //displayarray(a1,m,n);
  //cout<<endl;
  deletearray(a2,m);
}

void addarray(int **s1,int **s2,const int m,const int n)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      s1[i][j]=s1[i][j]+s2[i][j];
  }
}

int findmax(int **mat,const int m,const int n)
{
  int max=mat[0][0];
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      if(max<mat[i][j])
        max=mat[i][j];
    }
  }
  return max;
}

void count(int **mat,const int m,const int n,int max)
{
  int *array= new int [max];
  int cnt=0,summ=0,tt=0;
  for(int k=0;k<=max;k++)
  {
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(mat[i][j]==k)cnt++;
      }
    }
    if(cnt==0)continue;
    else
    {
      cout<<k<<":"<<cnt<<endl;
      array[tt]=cnt;
      tt++;
    }
    summ+=cnt;
    cnt=0;
  }
  cout<<endl;
  for(int i=0;i<tt-1;i++)
  {
    cout<<array[i]<<"+";
  }
  cout<<array[tt-1]<<" = "<<summ<<endl;
}














  

