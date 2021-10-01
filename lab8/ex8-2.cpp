#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
const int Maxsize=10;
int numrow,numcol;
void showarray(int ,int ,int [][Maxsize]);
void random(int [][Maxsize],int [][Maxsize]);
void mul (int [][Maxsize],int [][Maxsize],int [][Maxsize]);
int main()
{
  srand(time(NULL));
  cout << "Please enter rows and cols" << endl;
  cin>>numrow>>numcol;
  int matrix1[Maxsize][Maxsize],matrix2[Maxsize][Maxsize];
  random(matrix1,matrix2);
  cout << "Matrix1" << endl;
  showarray(numrow,numcol,matrix1);
  cout << "Matrix2" << endl;
  showarray(numcol,numrow,matrix2);
  int matrix3[Maxsize][Maxsize]={0};
  mul(matrix1,matrix2,matrix3);
  cout << "Matrix3" << endl;
  showarray(numrow,numrow,matrix3);
  return 0;
}
void random(int a[][Maxsize],int b[][Maxsize])
{
  for(int i=0;i<numrow;i++)
  {
    for(int j=0;j<numcol;j++)
    {
      a[i][j]=rand()%10+1;
    }
  }
  for(int i=0;i<numcol;i++)
  {
    for(int j=0;j<numrow;j++)
    {
      b[i][j]=rand()%10+1;
    }
  }

}
void showarray(int k,int w,int a[][Maxsize])
{
  for(int i=0;i<k;i++)
  {
    for(int j=0;j<w;j++)
    {
      cout<<setw(5)<<a[i][j]<<"";
    }
    cout<<endl;
  }
}
void mul(int a[][Maxsize],int b[][Maxsize],int c[][Maxsize])
{
  int cc=0,d=0;
for(int i=0;i<numrow;i++)
{
  for(int j=0;j<numrow;j++)
  {
  
    for (int k=0;k<numcol;k++)
    {
     // cout<<"a"<<i<<k<<"*b"<<k<<j<<endl;
     // cout<<a[i][k]<<"  "<<b[k][j]<<endl;
      //d=a[i][k]*b[k][j];
     // cout<<d<<endl;
      cc +=a[i][k]*b[k][j];
      
    }
    c[i][j]=cc;
    cc=0;
  } 
}
}

