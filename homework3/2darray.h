#include<iostream>
using namespace std;

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

