#include<iostream>
using namespace std;
int main()
{
 int x,i,j,y;
 cin>>x;
 y=x;
// cout<<x<<endl;
 for(j=x-1;j>=0;j--)
 {
  // cout<<"1";
 for(i=x-1;i>=0;i--)
 {
  // cout<<"1";
   cout<<y<<" ";
 }
 x=x-1;
 cout<<endl;
 }
}
