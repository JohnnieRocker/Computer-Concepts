#include<iostream>
using namespace std;
const int Maxsize=10;
void prime(int n , int a[][Maxsize])
{
  int z=2,i=-1,k=0,zz=0;
  cout<<n<<" = ";
  while(z*z<=n)
  {
    if (n%z==0)
    {
      k+=1;
      n/=z;
      if(z != zz)
      {
        i++;
      }
      zz=z;
      a[i][0]=z;
      a[i][1]=k;
      //cout<<"i :"<<i<<endl;
      //cout<<a[i][0]<<" ^ "<<a[i][1]<<endl;
      //cout<<z<<endl;
    }
    else
    {
      // a[i][0]=z;
      // a[i][1]=k;
      // cout<<a[i][0]<<" ^ "<<a[i][1]<<endl;
      z++;
      k=0;
    }
  }
  if (n>1)
  {
    //cout<<n<<endl;
    i++;
    a[i][0]=n;
    a[i][1]=1;
  }
  while(i>0)
  {
    if (a[i][1] == 1)
    {
      cout<<a[i][0]<<" * ";
    }
    else
    {
      cout<<a[i][0]<<"^"<<a[i][1]<<" * ";
    }
    i--;
  }
  if (i==0)
  {
    if(a[i][1] == 1)
    {
      cout<<a[i][0]<<endl;
    }
    else
    {
      cout<<a[i][0]<<"^"<<a[i][1]<<endl;
    }
  }

}
int main()
{
  int nn;
  int matrix1[Maxsize][Maxsize];
  while(1)
  {
    cout<<"Enter n:";
    cin>>nn;
    if (nn<0)
    {
      cout<<"Bye bye!"<<endl;
      break;
    }
    prime(nn,matrix1);
    //matrix1[Maxsize][Maxsize]={0};
  }
  return 0;
}
