#include<iostream>
#include<string>
using namespace std;
double sumage,summoney;
struct student{
  long id;
  char gender;
  int age;
  int money;
};
student a={9487001,'M',33,11000};
student b={9487002,'M',29,500};
student c={9487003,'F',20,300};
student d={9487004,'M',18,88200};

student Keyin()
{
  student e;
  cout<<"Please enter your student id:";
  cin>>e.id;
  cout<<"Gender (M/F):";
  cin>>e.gender;
  cout<<"Age:";
  cin>>e.age;
  cout<<"The amount of money in your own:";
  cin>>e.money;
  return e;
  
}
void Showstudents(const student &in)
{
  string sex,old,rp;
  if (in.gender=='M')
  { 
    sex="Male";
  }
  else
  {
    sex="Female";
  }
  if (in.age<21)
  {
    old="young";
  }
  else 
  {
    old="adult";
  }
  if (in.money<10000)
  {
    rp="poor";
  }
  else 
  {
    rp="rich";
  }
  cout<<"id "<<in.id<<" is a "<<rp<<" "<<old<<" "<<sex<<" !"<<endl;
  sumage+=in.age;
  summoney+=in.money;
  return;
}
int main()
{
  student ss;
  ss = Keyin();
  Showstudents(a);
  Showstudents(b);
  Showstudents(c);
  Showstudents(d);
  Showstudents(ss);
  cout<<"This group is "<<sumage/5<<" years old in average."<<endl;
  cout<<"This group has $"<<summoney<<" now."<<endl;
  return 0;
}





