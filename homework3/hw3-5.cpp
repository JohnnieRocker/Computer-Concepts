#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int **newarray(const int m,const int n)
{
  int **mat = new int *[m];
  for(int i=0;i<m;i++)
  {
    for (int j=0;j<n;j++)
      mat[i]=new int [n];
  }
  return mat;
}
void initialarray(int **mat,const int m,const int n)
{
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      mat[i][j]=0;
  }
}
void cal(int ,vector<string> ,vector<int> ,int avg);

int main(int argc, char * argv[])
{
  ifstream fin(argv[1]);
  string textline="";
  stringstream ss;

  int n=0,avg=0;
  vector<string> code ;
  vector<int> length;

  while(getline(fin,textline,'\n'))
  {
    code.push_back(textline);
    length.push_back(textline.length());
    avg+=textline.length();
    n++;
  }
  //cout<<n<<endl;
  int num=n/3; // how many number
  avg/=num; //each number length
  //cout<<num<<" "<<avg<<endl;
  cal(num,code,length,avg); 
}



void cal(int num, vector<string> code,vector<int> length,int avg)
{
  int digit,i,j,k,lim,n=0;
  lim=num*3-1;
  stringstream ss;
  string combine="";
  vector<string> ncode;
  vector<string> sequence;
  for(i=0;i<=lim;i++)
  {
    for(j=0;j<=lim;j++)
    {
      if(j==i)continue;
      if(j==k)continue;
      for(k=0;k<=lim;k++)
      {
        if(k==i)continue;
        if(k==j)continue;
        digit=length[i]+length[j]+length[k];
        if(avg !=digit)continue;
        else
        {
          //cout<<"i:"<<i<<" j:"<<j<<" k:"<<k<<endl;
          ss<<code[i]<<code[j]<<code[k];
          combine=ss.str();
          //cout<<combine<<endl;
          ncode.push_back(combine);
          //cal2(combine,i,j,k,lim,avg);
          combine="";
          ss.str("");
          ss.clear();
          ss<<i<<" "<<j<<" "<<k<<" ";
          sequence.push_back(ss.str());
          ss.str("");
          ss.clear();
          n++;
        }
      }
    }
  }
  //for(int i=0;i<n;i++)
  //{
  //cout<<sequence[i]<<endl;
  //cout<<ncode[i]<<endl;
  //}
  vector<string> duplicate;
  int cnt=0,tp=1,t1,t2,t3,flag,kk=2,ttp=0;
  int **temp= newarray(num,kk);

  initialarray(temp,num,2);
  for(int i=0;i<n;i++)
  {
    ss.str(sequence[i]);
    ss>>temp[0][0]>>temp[0][1]>>temp[0][2];
    //cout<<t1<<" "<<t2<<" "<<t3<<" "<<endl;
    ss.str("");
    ss.clear();
    for(int j=0;j<n;j++)
    {
      if(j==i) continue;
      if(ncode[j] != ncode[i])continue;
      ss.str(sequence[j]);
      ss>>t1>>t2>>t3;
      ss.str("");
      ss.clear();
      for(int k=0;k<tp;k++)
      {
        if(t1== temp[k][0] || t1== temp[k][1] || t1== temp[k][2])
        {
          flag=1;
          break;
        }
        else if(t2== temp[k][0] || t2==temp[k][1] || t2==temp[k][2])
        {
          flag=1;
          break;
        }
        else if( t3==temp[k][0] || t3==temp[k][1] || t3==temp[k][2])
        {
          flag=1;
          break;
        }
        else flag=0;
      }
      if(flag==1) continue;
      if(flag==0)
      {
        temp[tp][0]=t1;
        temp[tp][1]=t2;
        temp[tp][2]=t3;
        //cout<<temp[tp][0]<<temp[tp][1]<<temp[tp][2]<<endl;
        tp++;
      }
    }
    if(tp==num)
    {
      duplicate.push_back(ncode[i]);
    }
    initialarray(temp,num,2);
    tp=1;
  }

  sort(duplicate.begin(),duplicate.end());
  duplicate.erase(unique(duplicate.begin(),duplicate.end()),duplicate.end());
  for(int i=0;i<duplicate.size();i++)
  {
    cout<<duplicate[i]<<endl;
  }



}




