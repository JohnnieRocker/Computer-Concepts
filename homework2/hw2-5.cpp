#include<iostream>
#include<cmath>
using namespace std;
double t1,t2,t3,t4,t5,m1=1,m2=1,q=0;
int Eucl(int,int);
void cal(double,double,double,double,double);
void cal1(double,double,double,double,double);
int main()
{
  double A,B,C,D,E;
  cin>>A>>B>>C>>D>>E;
  if(A*C>0)
  {
    cout<<"It is not a hyperbola!"<<endl;
    return 0;
  }
  //cout<<"Standard Form:"<<endl;
  cal(A,B,C,D,E);
  if (q==1)
  {
    return 0;
  }
  //m1=Eucl(A,t5);
  //m2=Eucl(B,t5);
  //cout<<"m1:"<<m1;
  cal1(A,B,C,D,E);

}
int Eucl(int aa,int bb)
{
  aa=abs(aa);
  bb=abs(bb);
  //cout<<aa<<endl;
  //cout<<bb<<endl;
  int bigger,smaller;
  bigger=(aa>bb)?aa:bb ;
  smaller=(aa>bb)?bb:aa ;
  //cout<<bigger<<endl;
  //cout<<smaller<<endl;
  if(bigger%smaller==0)
  {
    return smaller;
  }
  else 
  {
    return  Eucl(smaller,(bigger%smaller));
  }
}

void cal(double a,double b,double c,double d,double e)
{
  t1=c/a;
  t2=a*(pow((t1/2.0),2));
  t3=d/b;
  t4=b*(pow((t3/2.0),2));
  t5=t2+t4-e;
  if (t5==0)
  {
    cout<<"It is not a hyperbola!"<<endl;
    q=1;
    return ;
  }
  cout<<"Standard Form:"<<endl;
}
 void cal1(double a,double b,double c,double d,double e)
{
  m1=Eucl(a,t5);
  m2=Eucl(b,t5);
  cout<<"H:";
  if (a/m1==1 && t5/m1==1)
  {
    cout<<"1";
  }
  else if((a/m1==-1 && t5/m1==1)||(a/m1==1 && t5/m1==-1))
  {
    cout<<"-1";
  }
  else if ((a/m1<0 && t5/m1<0)||(a/m1>0 && t5/m1<0))
  {
   cout<<-(a/m1)<<"/"<<-(t5/m1);
  } 
  else 
  {
    cout<<a/m1<<"/"<<t5/m1;
  }
  if(t1/2>0)
  {
    cout<<"(x+"<<t1/2<<")^2";
  }
  else
  {
    cout<<"(x"<<t1/2<<")^2";
  }
  if(b/m2==1 && t5/m2==1)
  {
    cout<<"+1";
  }
  else if((b/m2==-1 && t5/m2==1)||(b/m2==1 && t5/m2==-1))
  {
    cout<<"-1";
  }
  else if((b/m2<0 && t5/m2<0))
  {
    cout<<"+"<<-(b/m2)<<"/"<<-(t5/m2);
  }
  else if (b/m2>0 && t5/m2<0)
  {
    cout<<-(b/m2)<<"/"<<-(t5/m2);
  }
  else if (b/m2>0 && t5/m2>0)
  {
    cout<<"+"<<b/m2<<"/"<<t5/m2;
  }

  else
  {
    cout<<b/m2<<"/"<<t5/m2;
  }
  if(t3/2>0)
  {
    cout<<"(y+"<<t3/2<<")^2";
  }
  else
  {
    cout<<"(y"<<t3/2<<")^2";
  }
  cout<<"=1"<<endl;


}


