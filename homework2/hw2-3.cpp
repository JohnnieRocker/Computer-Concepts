#include<iostream>
#include<iomanip>
using namespace std;
double nn;
int n;
const int size1=100;
const int size2=2;
double cal1(double n)
{
  double a;

  if (n==nn)
  {
    return (2.0*nn-1)+(nn*nn/(2*nn+1));
  }
  else
  {
    return(2*n-1)+(n*n/cal1(n+1));
  }
}

double cal2(int n)
{
  double a;
  a=4.0/(cal1(1.0));
  return a;
}

int main()
{
  int k=1,i,j,t;
  double temp,temp2;
  double matrix[size1][size2];
  while(1)
  {
    cout<<"Enter n:";
    cin>>nn;
    if(nn<=0)
    {
      break;
    }
    //cout<<"pi("<<nn;
    //cout<<fixed<<showpoint<<setprecision(8);
    //cout <<") ="<<cal2(nn)<<endl;
    t=nn;
    for(k=1;k<=t;k++)
    {
      nn=k;
      matrix[k][1]=cal2(k);
      //cout<<"["<<k<<"][1]"<<showpoint<<setprecision(9)<<matrix[k][1]<<endl;
      matrix[k][2]=k;
      //cout.unsetf(ios::showpoint);
      //cout<<"["<<k<<"][2]"<<matrix[k][2]<<endl;
    }
    //cout<<matrix[2][0]<<endl;
    //cout<<matrix[1][0]<<endl;
    for (i=1;i<=t;i++)
    {
      for(j=i;j<=t;j++)
      {
        if (matrix[j][1]>matrix[i][1])
        {
          //cout<<"j:"<<j<<endl;
          //cout<<"["<<j<<"][1]:"<<matrix[j][1]<<endl;
          //cout<<"["<<j<<"][2]:"<<matrix[j][2]<<endl;
          //cout<<"i:"<<i<<endl;
          //cout<<"["<<i<<"][1]:"<<matrix[i][1]<<endl;
          //cout<<"["<<i<<"][2]:"<<matrix[i][2]<<endl;
          temp=matrix[j][1];
          temp2=matrix[j][2];
          matrix[j][1]=matrix[i][1];
          matrix[j][2]=matrix[i][2];
          matrix[i][1]=temp;
          matrix[i][2]=temp2;
        }
      }
    }
    for (i=1;i<=t;i++)
    {
      cout.unsetf(ios::showpoint);
      cout<<"pi("<<matrix[i][2];
      cout <<showpoint<<setprecision(9)<<") ="<<matrix[i][1]<<endl;
    }
  }
}

