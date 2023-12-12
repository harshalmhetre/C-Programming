#include <iostream>
using namespace std;

class student
{
   public:
   int r;
   string name;
   char div;
   string add;
   public:
      student()
      {
          r=4;
          name="cv";
          div='a';
          add="sangamner";
      }
    
      void show()
      {
         cout<<"\n"<<"roll number:"<<r;
         cout<<"\n"<<"name of student:"<<name;
         cout<<"\n"<<"division:"<<div;
         cout<<"\n"<<"address:"<<add;
      }
      
      void getdata()
      {
         cout<<"\n"<<"enter roll number:";
         cin>>r;
         cout<<"\n"<<"enter name of student:";
         cin>>name;
         cout<<"\n"<<"enter division:";
         cin>>div;
         cout<<"\n"<<"enter address:";
         cin>>add;
      }
      friend void display();
      
      static int count;
      static void display1()
      {
         count++;
         cout<<"\ndata of student"<<count<<":";
         cout<<"\n"<<"roll number:"<<6;
         cout<<"\n"<<"name of student:"<<"na";
         cout<<"\n"<<"division:"<<'d';
         cout<<"\n"<<"address:"<<"abc";
      }   
};

int student::count=5;
void display()
{
    student o;   
    cout<<"\n"<<"roll number:"<<o.r;
    cout<<"\n"<<"name of student:"<<o.name;
    cout<<"\n"<<"division:"<<o.div;
    cout<<"\n"<<"address:"<<o.add;
    
}
     
int main()
{
  student s,*p;
  p=new student;
  int n,i;
  cout<<"enter the no. of objects:";
  cin>>n;
  
  for(i=0;i<n;i++)
  {
      cout<<"data of student"<<i+1;
      p->getdata();
      p->show();
  }
  cout<<"data of student 4:";    
  s.show();
  s.getdata();
  cout<<"data of student 5:";
  display();
  s.display1();
  delete p;
  return 0;
}
 
               
