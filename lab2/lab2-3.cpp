//File:lab2-3.cpp
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double a =716.54564 ;
  cout<<"The original number > "<< a <<endl ;
  cout<< "The number with set precision 3 >"
    << setprecision(3) << a <<endl;
  cout<<"The number with set precision 6 > "
    << setprecision(6) << a <<endl ;
  cout <<"The number in fix-point decimal notation "
       <<setw(11)<<fixed<< setprecision(6)
       << a << endl ;
  cout<<"The number in exponential notation "
       << setw(11)<< scientific << setprecision(3)
       << a <<endl ;
  return 0 ;
}

