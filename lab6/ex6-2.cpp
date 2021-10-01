#include<iostream>
#include<cmath>
using namespace std;
int Eucl(int a,int b)
{
  int bigger,smaller;
  bigger=(a>b)?a:b ;
  smaller=(a>b)?b:a ;
  if(bigger%smaller==0)
  {
    return smaller;
  }
  else 
  {
  return  Eucl(smaller,(bigger%smaller));
  }
  
}
int min(int c,int d)
{
  int t ;
 // cout<<"c,d="<<c<<d<<endl;
  t= Eucl(c,d) ;
 // cout<<"t:"<<t<<endl;
  return c*d/t ;
}


 int main()
{
  int v1,v2,v3,v4,v5;
cin>>v1>>v2>>v3>>v4>>v5;
 // k=Eucl(v1,v2);\
 
   cout<<"g.c.d :"<< Eucl(v5, Eucl(v4, Eucl(v3, Eucl(v1,v2))))<<endl;
  // cout<<"l.c.m (v1,v2):"<<min(v1,v2)<<endl;
   cout<<"l.c.m :"<<min(v5,min(v4,min(v3, min(v1,v2))))<<endl;
}

