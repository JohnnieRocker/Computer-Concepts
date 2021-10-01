#include<iostream> 
#include<iomanip>
using namespace std;
int main(){
  double a;
  cout<<"Please enter the base floating-point number:"<<endl;
  cin>>a;
cout<<a<<" to the power of 1,2,3 and 4 are:\n"<<fixed<<showpoint
  <<setprecision(3)<<setw(11)<<a <<"\n"
  <<setw(11)<<a*a<<"\n"
  <<setw(11)<<a*a*a<<"\n"
  <<setw(11)<<a*a*a*a<<endl;
  cout.unsetf(ios::fixed) ;
//  cout.unsetf(ios::showpoint);
cout<<a<<" to the power of 1,2,3 and 4 with at most 5 digits left aligned:\n"
    <<left<<setprecision(5)<<a
    <<"\n"<<a*a<<"\n"<<a*a*a<<"\n"<<a*a*a*a<<endl;
  return 0 ;
}
