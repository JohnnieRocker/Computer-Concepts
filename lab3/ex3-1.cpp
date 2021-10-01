#include<iostream>
using namespace std;
int main(){
  char p1 ;
  char p2 ;
  cout<<"Enter s,r,p for player 1:"<<endl;
    cin>>p1 ;
 cout<<"Enter s,r,p for player 2:"<<endl;
   cin>>p2  ;
 if((p1=='s' && p2=='p') ||(p1=='r') && (p2 =='s') || (p1=='p' && p2 =='r'))
   cout<<"Player 1 win"<<endl;
 else  if((p2=='s' && p1=='p') ||(p2=='r') && (p1 =='s') || (p2=='p' && p1=='r'))
   cout<<"Player 2 win"<<endl;
 else
   cout<<"Two player tie!"<<endl;
 }
