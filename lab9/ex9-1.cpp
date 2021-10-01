#include<iostream>
#include<string>
using namespace std;
int main()
{
  int i, n=0,k,m=0,u,s;
  char str[100];
  //string str="I";
  cout<<"Enter a sentence:";
  cin.getline(str,100);
  for(i=0; str[i]!=NULL; i++)
  {
    if (str[i]==' ')
    {
     //cout<<i<<endl;
     n++;
    }
  }
  k=n+1;
  cout<<"There are "<<k<<" words in your sentence."<<endl;
  cout<<"They are ";
  for(i=0;str[i]!=NULL;i++) //pos=str.find(str,pos+1)
                            //str.substr(pos,length)
  {
    if(str[i]==' ')
    {
      if(m==0)
      {
        cout<<"\"";
        for(u=m;u<i;u++)
        {
          cout.put(str[u]);
        }
        cout<<"\"";
        s+=1;
        if(s==k-1)
        {
          cout<<" and ";
        }
        else
        {
          cout<<",";
        }
      }
      else 
      {
        cout<<"\"";
        for(u=m+1;u<i;u++)
        {
          cout.put(str[u]);
        }
        cout<<"\"";
        s+=1;
        if(s==k-1)
        {
          cout<<" and ";
        }
        else
        {
          cout<<",";
        }
      }
      m=i;
      }
    }
  cout<<"\"";
  for(u=m+1;str[u]!=NULL;u++)
  {
    cout.put(str[u]);
  }
  cout<<"\".";

}

