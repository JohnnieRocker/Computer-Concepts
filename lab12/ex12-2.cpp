#include<iostream>
using namespace std;
void Resize(int *,int );
void DisPlayArray(int *,const int);
void InsertionSort(int *,int );
void Medium(int *,int );

int main()
{
  int *array;
  int n;

  cout<<"Enter a size first: ";

  cin>>n;

  array= new int [n];
  
  cout<<"Enter a sequence (stop by -1):";
  Resize(array,n);

  return 0;
}

void Resize(int *array,int n)
{
  int x,nn=0;
  while(cin>>x)
  {
    if(x==-1)break;
    array[nn]=x;
    nn++;
    if(nn>=n)
    {
      n*=2;
      int *temp= new int [n];
      for(int i=0;i<nn;i++)
        temp[i]= array[i];
      delete []array;
      array=temp;
    }
  }
  DisPlayArray(array,nn-1);
  InsertionSort(array,nn);
  //DisPlayArray(array,nn-1);
  Medium(array,nn);
  //DisPlayArray(array,nn-1);
}

void DisPlayArray(int *vec,const int k)
{
  cout<<"Input sequence = (";
  for (int idx=0;idx<k;idx++)
  {
    cout<<vec[idx]<<",";
  }
  cout<<vec[k]<<")."<<endl;
}

void InsertionSort (int *vec,int size)
{
  for (int jdx=1; jdx<size; jdx++)
  {
    int key=vec[jdx];
    int idx= jdx-1;

    while(idx>=0 && vec[idx]>key)
    {
      vec[idx+1]=vec[idx];
      --idx;
    }
    vec[idx+1]=key;
  }
}

void Medium(int *vec,int m) //Start from vec[0]
{
  DisPlayArray(vec,m-1);
  int l;
  l=m%2;
  if(l!=1)
  {
    cout<<"The medium are "<<vec[m/2-1]<<" and "<<vec[m/2+1-1]<<"."<<endl;
  }
  else
  {
    l=m/2;
    //cout<<l+1<<endl;
    //cout<<"vec[1]"<<vec[1]<<endl;
    cout<<"The medium is "<<vec[l+1-1]<<" ."<<endl;
  }

}



