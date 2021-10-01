#include<iostream>
using namespace std;
int is_prime(int x){
 if(x <= 1) return 0; /* 1不是質數，且不考慮負整數與0，故輸入 x<=1 時輸出為假 */
 for(int i = 2; i * i <= x; i++)
    if(x % i == 0) 
      return 0;   /* 若整除時輸出為假，否則輸出為真 */
 return 1;
}
int main(){
  int a,idx;
  cout<<"Enter an integer value:"<<endl;
  cin>>a ;
  cout<<"All prime numbers below "<<a<<" are :"<<endl;
  for(idx=1;idx<=a;idx++)
  {
    if( is_prime(idx)== 1 )
      cout<<idx<<" ";
  }
  return 0;
}
