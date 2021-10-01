#include<iostream>
using namespace std;
int a,b,c,d,r1,r2,r3,r4,R1,R2;
int m1,m2,m3,m4;
int cal1()
{
  for(m1=0;(b*c*d*m1)%a !=r1;m1++)
  {
  }
  return b*c*d*m1;
}
int cal2()
{
  for(m2=0;(a*c*d*m2)%b !=r2;m2++)
  {
  }
  return a*c*d*m2;
}
int cal3()
{
  for(m3=0;(a*b*d*m3)%c !=r3;m3++)
  {
  }
  return a*b*d*m3;
}
int cal4()
{
  for(m4=0;(a*b*c*m4)%d !=r4;m4++)
  {
  }
  return a*b*c*m4;
}


int main()
{
  int n,k1=-1,k2=1;
  cout<<"Enter a,b,c,d,r1,r2,r3,r4,R1,R2 :";
  cin>>a>>b>>c>>d>>r1>>r2>>r3>>r4>>R1>>R2;
  n=cal1()+cal2()+cal3()+cal4();

  while(1)
  {
    if (n+a*b*c*d*k1>R2)
    {
      break;
    }
    k1+=1;
  }
  //cout<<"k1:"<<k1<<endl;
  while(1)
  {
    if (n+a*b*c*d*k2<R1)
    {
      break;
    }
    k2-=1;
  }
  //cout<<"k2:"<<k2<<endl;
  cout<<"Student number in range["<<R1<<","<<R2<<"] can be :"<<endl;
  for(k2=k2+1;k2<=k1-1;k2++)
  {
    cout<<n+(a*b*c*d*k2)<<" ";
  }
  cout<<endl;
}

