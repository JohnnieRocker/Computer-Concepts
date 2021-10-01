#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include"/localhome/ICP2018F/std0511205/homework3/2darray.h"
using namespace std;

void assignarray(int **mat,const int m,const int n,int x);

int main(int argc, char **argv)
{
  int m,n;
  ifstream fimg(argv[1]);
  ifstream fker(argv[2]);
  ofstream fout(argv[3]);
  string textline;
  stringstream ss;
  getline(fimg,textline,'\n');
  ss.str(textline);
  ss>>m>>n;
  ss.clear();
  int temp;
  int **img = newarray(m,n);

    for(int i=0;i<m;i++)
    {
      getline(fimg,textline,'\n');
      ss.str(textline);
      for(int j=0;j<n;j++)
      {
        ss>>temp;
        img[i][j]=temp;
      }
      ss.clear();
    }

  displayarray(img,m,n);

        



  
  return 0;
}
