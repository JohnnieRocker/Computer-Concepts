#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
using namespace std;

struct student
{
  string name;
  long id;
  int age;
  string gender;
};

void display(const student *);
student *assign(string ,long,int ,char);

int main(int argc, char *argv[])
{
  char *nn;
  char *filename,*outname;
  string line="";
  string open="";
  string arg1="";
  //cout<<argv[0]<<endl;
  if(argc<=1 || argc==4 || argc>5)
  {
    cout<<"Usage: ./ex12-4 [-i] input_filename [-o] output_filename"<<endl;
    return 0;
  }
  if (argc ==2)
  {
    filename=argv[1];
    //ofstream fout("test.txt");
    nn="test.txt";
    outname=nn;
    cout<<"Write output in test.txt file."<<endl;
  }
  else if(argc==3)
  {
    arg1=argv[1];
    if(arg1 !="-i")
    {
      cout<<"Input file is required."<<endl;
      return 1;
    }
    filename=argv[2];
    fstream finn(filename,ios::in);
    if (finn.fail())
    {
      cout<<"File "<<argv[2]<<" does not exist!"<<endl;
      return 1;
    }
    cout<<"Write output in test.txt file."<<endl;
    //ofstream fout("test.txt");
    nn="test.txt";
    outname=nn;
    //fout.open("test.txt");
  }
  else 
  {
    string arg2=argv[1];
    string arg4=argv[3];
    if (arg2=="-i")
    {
      filename=argv[2];
      outname=argv[4];
      //ofstream fout(outname);
      cout<<"Write output in "<<argv[4]<<"."<<endl;
    }
    else
    {
      filename=argv[4];
      outname=argv[2];
      //ofstream fout(outname);
      cout<<"Write output in "<<argv[2]<<"."<<endl;
    }
  }
  fstream fin(filename,ios::in);
  fstream fout;
  fout.open(outname,ios::out); 
  string temp="";
  //fin.open(open.c_str());
  int k=0,pos=0,cnt=0,lpos=0,num=0,F=0,M=0;
  getline(fin,line,'\n');
  num=atoi(line.c_str());
  student *uee1302 = new student [num];
  while(getline(fin,line,'\n'))
  {
    while(1)
    {
      cnt+=1;
      pos=line.find(" ",pos+1);
      if(cnt==1) 
      {
        temp=line.substr(0,pos-0);
        //cout<<"name:"<<temp<<endl;
        uee1302[k].name=temp;
      }
      else if(cnt==2)
      {
        temp=line.substr(lpos+1,7);
        //cout<<"id:"<<atoi(temp.c_str())<<endl;
        uee1302[k].id=atoi(temp.c_str());
      }
      else if(cnt==3)
      {
        temp=line.substr(lpos+1,pos-lpos);
        //cout<<"age:"<<atoi(temp.c_str())<<endl;
        uee1302[k].age=atoi(temp.c_str());
        //cout<<"gender:"<<line.substr(pos+1,1)<<endl;
        uee1302[k].gender=line.substr(pos+1,1);
        temp=line.substr(pos+1,1);
        if(temp=="M")M++;
        else F++;
      }
      if(pos==string::npos) break;
      lpos=pos;
    }
    //cout<<"line:"<<line<<endl;
    pos=0;
    lpos=0;
    cnt=0;
    k++;
  }

  int aa;
  float summ=0;
  //cout<<uee1302[0].name<<endl;
  fout<<"There are : ";
  for(cnt=0;cnt<num-2;cnt++)
  {
    fout<<uee1302[cnt].name<<",";
  }

  fout<<uee1302[cnt].name<<" and "<<uee1302[cnt+1].name<<"."<<endl;
  
  for(cnt=0;cnt<num;cnt++)
  {
    summ+=uee1302[cnt].age;
  }
  fout<<"Their average age is "<<summ/num<<" years old."<<endl;
  fout<<"There are "<<M<<" boys and "<<F<<" girls."<<endl;
  delete []uee1302;
  return 0;
}





