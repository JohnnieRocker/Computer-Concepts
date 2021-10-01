#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
const int MaxSize = 10;
void DisplayMatrix(const int [][MaxSize],const int,const int);
void GenerateMatrix(int [][MaxSize],const int,const int);
void SortMatrix(int [][MaxSize],const int,const int);
void InsertionSort(int [],const int);
int main()
{
  int numrows,numcols;
  int IntMatrix[MaxSize][MaxSize];
  cout << "Please enter the number of rows: ";
  cin >> numrows;
  cout << "Please enter the number of columns: ";
  cin >> numcols;
  cout << "The original matrix is" << endl;
  GenerateMatrix(IntMatrix,numrows,numcols);
  DisplayMatrix(IntMatrix,numrows,numcols);
  SortMatrix(IntMatrix,numrows,numcols);
  cout << "The modified matrix is" << endl;
  DisplayMatrix(IntMatrix,numrows,numcols);
  return 0;
}
void GenerateMatrix(int a[][MaxSize],const int k ,const int w)
{
  srand(time(NULL));
  for(int i=0;i<k;i++)
  {
    for(int j=0;j<w;j++)
    {
      
      a[i][j]=rand()%20+1;
    }
  }
}
void DisplayMatrix(const int a[][MaxSize],const int k ,const int w )
{
  for(int i=0;i<k;i++)
  {
    for(int j=0;j<w;j++)
    {
      cout<<setw(5)<<a[i][j]<<"";
    }
    cout<<endl;
  }
}
void InsertionSort(int vec[],int size)
{
  for (int jdx = 1; jdx < size; jdx++)
  {
    int key = vec[jdx];
    int idx = jdx - 1;
    while ( idx >= 0 && vec[idx] > key)
    {
      vec[idx+1] = vec[idx];
      --idx;
    }
    vec[idx+1] = key;
  }
}
void SortMatrix(int a[][MaxSize],const int k,const int w)
{
  for (int i=0;i<k;i++)
  {
    for (int j=1;j<w;j++)
    {
      int key = a[i][j];
      int z = j-1;
      while(z >=0 && a[i][z] < key)
      {
        a[i][z+1] = a[i][z];
        --z;
      }
        a[i][z+1]=key;
    }
  }
}








