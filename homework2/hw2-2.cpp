#include<iostream>
#include<iomanip>
using namespace std;
const int size1=101;
const int size2=2;
int n;
void serial(int [][size2]);
void parallel(int [][size2]);
int main()
{
  int l;
  int r[size1][size2];
  cout<<"Enter n:";
  cin>>n;
  for(l=1;l<=n;l++)
  {
    cout<<"["<<l<<"] resistance and number:";
    cin>>r[l][0]>>r[l][1];
  }
  serial(r);
  parallel(r);
}
void serial(int a[][size2])
{
  int summ=0,k,t;
  for(k=1;k<=n;k++)
  {
    summ+=a[k][0]*a[k][1];
  }
  cout<<"Serial: "<<summ<<"  Ohm."<<endl;
  cout<<"__";
  for(k=1;k<n;k++)
  {
    for(t=1;t<=a[k][1];t++)
    {
      cout<<"["<<a[k][0]<<"]_";
    }
  }
  for(t=1;t<a[k][1];t++)
  {
    cout<<"["<<a[k][0]<<"]_";
  }
    cout<<"["<<a[k][0]<<"]__"<<endl;
}
void parallel(int a[][size2])
{
  double summ;
  int k,q,t;
  for(k=1;k<=n;k++)
  {
    summ+=(1.0/a[k][0])*a[k][1];       
  }
  cout<<showpoint<<setprecision(6);
  cout<<"Parallel: "<<1.0/summ<<"  Ohm."<<endl;
  //cout<<fixed<<setw(6);
  cout<<" __["<<setw(4)<<a[1][0]<<"]__ "<<endl;
  for(q=1;q<=a[1][1]-1;q++)
  {
    cout<<"|__["<<setw(4)<<a[1][0]<<"]__|"<<endl;
  }
  for(k=2;k<=n;k++)
  {
    for(t=1;t<=a[k][1];t++)
    {
      cout<<"|__["<<setw(4)<<a[k][0]<<"]__|"<<endl;
    }
   }

}


