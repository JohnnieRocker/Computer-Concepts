#include<iostream>
#include<cstdlib>
using namespace std;

void myswap(int *,int *);
void RR(int ,int *,int *,int *,int *);

int main(int argc,char *argv[])
{
  int x; //Rotate-right x times
  int num1,num2,num3;

  cout<<"Please enter the times to do rotate-right: ";
  cin>>x;

  //First Number
  num1=atoi(argv[1]);
  
  //Second Number
  int *pt2= &num2;
  *pt2 = atoi(argv[2]);

  //Third Number
  int *pt3;
  pt3 = &num3;
  *pt3 = atoi(argv[3]);

  //Fourth Number
  int *pt4 = new int (atoi(argv[4]));

  //Print Out the original number
  cout<<"Before rotate right ="
    <<"("<<num1<<","<<num2
    <<","<<num3<<","<<*pt4<<")."<<endl;

  //Do rotate right x times
  RR(x,&num1,pt2,pt3,pt4);

  //Print out the result
  cout<<"After rotate right ="
    <<"("<<num1<<","<<num2
    <<","<<num3<<","<<*pt4<<")."<<endl;

  return 0;
}

void myswap(int *ch1,int *ch2)
{
  int temp;
  temp=*ch1;
  *ch1=*ch2;
  *ch2=temp;
}

void RR(int x,int *pt1,int *pt2,int *pt3,int *pt4)
{
  for(int i=0;i<x%4;i++)
  { 
  myswap(pt1,pt2);
  myswap(pt1,pt3);
  myswap(pt1,pt4);
  }
  //y1=(0+y)%4;
  //y2=(1+y)%4;
  //y3=(2+y)%4;
  //y4=(3+y)%4;
  //if(y1==0)myswap(pt1,n1);
  //else if(y1==1)myswap(pt2,n1);
  //else if(y1==2)myswap(pt3,n1);
  //else myswap(pt4,n1);
  //if(y2==0)myswap(pt1,n2);
  //else if(y2==1)myswap(pt2,n2);
  //else if(y2==2)myswap(pt3,n2);
  //else myswap(pt4,n2);
  //if(y3==0)myswap(pt1,n3);
  //else if(y1==1)myswap(pt2,n3);
  //else if(y1==2)myswap(pt3,n3);
  //else myswap(pt4,n3);
  //if(y4==0)myswap(pt1,n4);
  //else if(y4==1)myswap(pt2,n4);
  //else if(y4==2)myswap(pt3,n4);
  //else myswap(pt4,n4);

}














