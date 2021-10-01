#include <fstream>
#include <iostream>
using namespace std;
int main()
{
  ifstream in_file;
  in_file.open("in.txt");

  int val_i;
  double val_d;
  char val_c[50];

  in_file >> val_i >> val_d >> val_c;

  cout << "Integer number in file: " << val_i << endl;
  cout << "Floating number in file: " << val_d << endl;
  cout << "Character in file: " << val_c << endl;

  in_file.close();
  return 0;
}
