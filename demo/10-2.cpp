#include <iostream>

using namespace std;

int main() {

  int v1 = 100;
  int & r1 = v1;
  int* p1;

  cout << "//--------------------------//" << endl;
  p1 = &v1;
  *p1 = 20;
  cout << "v1 = " << v1 << " and &v1="<<&v1 << endl;
  cout << "*p1= " <<*p1 << " and  p1=" << p1 << endl;
  cout << "r1 = " << r1 << " and &r1="<< &r1<< endl;

  cout << "//--------------------------//" << endl;
  r1 = 50;
  cout << "v1 = " << v1 << " and &v1="<<&v1 << endl;
  cout << "*p1= " <<*p1 << " and  p1=" << p1 << endl;
  cout << "r1 = " << r1 << " and &r1="<< &r1<< endl;

  return 0;
}
