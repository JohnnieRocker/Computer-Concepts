#include<iostream>
#include<iomanip>
using namespace std;
#define PI 3.1415926
int rectangular()
{
 double length,width,perimeter;
 cout<<"Please enter the length and width respectively"<<endl;
 cin>>length;
 cin>>width;
 cout<<fixed<<showpoint<<setprecision(3);
 perimeter=2.0*(length+width);
 cout<<"The perimeter of a rectangular with (length,width)=("<<length<<","<<width<<") is "<<perimeter<<endl;
}
int square()
{
  double length,perimeter;
  cout<<"Please enter the length"<<endl;
  cin>>length;
  perimeter=4.0*length;
  cout<<fixed<<showpoint<<setprecision(3);
  cout<<"The perimeter of a square with (length) = ("<<length<<") is"<<perimeter<<endl;
}
int circle()
{
  double radius,perimeter;
  cout<<"Please enter the radius of the circle."<<endl;
  cin>>radius;
  perimeter=2*PI*radius;
  cout<<fixed<<showpoint<<setprecision(6);
  cout<<"The perimeter of a circle with (radius) = ("<<radius<<") is "<<perimeter<<endl;
}
int main()
{
  int m;
  while(1)
  {
  cout<<"1.Rectangular 2.Square 3.Circle 4.Exit"<<endl;
  cout<<"Choose the type of perimeter you want to calculate:"<<endl;
  cin>>m;
  if(m==1)
  {
    rectangular();
  //  break;
  }
  else if(m==2)
  {
    square();
  //  break;
  }
  else if(m==3)
  {
    circle();
  //  break;
  }
  else if(m==4)
  {
    cout<<"Goodbye!"<<endl;
    break;
  }
  else
  {
    cout<<"Please follow the instruction carefully."<<endl;
 }
  }
  return 0;
}



