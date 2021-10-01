#include<iostream>
using namespace std;
int main(){
  char in1;
  int quantity;
  int price;
  cout<<"Welcome to the book-buying system!!"<<endl;
  cout<<"The following are the book list and their prices"<<endl;
  cout<<"(A) Computer Science : An Overview  $30" <<endl;
  cout<<"(B) Absolute C++   $20 " <<endl;
  cout<<"(C) How to Program $40 "<<endl;
  cout<<"Please enter A,B,C to choose the book:"<<endl;
  cin>>in1 ;
    if(in1=='A'||in1=='a')
     price=30;
     else if(in1 =='B'||in1=='b')
      price=20;
      else if(in1 =='C'||in1=='c')
       price=40;
      else {
     cout<<"Sorry,item( "<<in1<<") doesn’t on our list."<<endl;
      return 0 ;
       }

  cout<<"Now enter the quantity of books: "<<endl;
  cin>>quantity ;    
  cout<<"The total cost of item ("<<in1<<") is $"<<price*quantity<<".Thanks for your coming."<<endl ;
}

