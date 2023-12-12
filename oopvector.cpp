#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class student
{
	public:
	int r;
	float p;
	char name[20],dob[10];
	void getdata()
	{
		cout<<"Enter the name of the student\n";
		cin>>name;
		cout<<"Enter the roll no of student\n";
		cin>>r;
		cout<<"Enter the Date of birth of the student\n";
		cin>>dob;
		cout<<"Enter the percentage of the student\n";
		cin>>p;
	}
	void show()
	{
		cout<<"Name of student is "<<name<<endl;
		cout<<"Roll no of student is "<<r<<endl;
		cout<<"DOB of student is "<<dob<<endl;
		cout<<"Percentage of student is \n"<<p<<endl;
	}
	bool operator==(const student &st)
	{
		return (r==st.r);
	}
	
	
};
bool check1(student &s1, student &s2)
{
	return(s1.r<s2.r);
} 
void sorting(vector <student> &vec)
{
	sort(vec.begin(),vec.end(),check1);

}

int main()
{
	vector<student> v;
	student s;
	int n,ch;
	cout<<"-------STUDENT RECORDS-------\n\n";
	cout<<"Enter the total no of student records \n";
	cin>>n;
	do{cout<<"Enter your choice \n 1.Add record \n 2.Display record \n 3.sort";
	cin>>ch;
	 vector<student>::iterator itr;
	switch(ch)
	{
		case 1:for(int i=0;i<n;i++)
			       {
			       	   cout<<"Enter new data\n";
			           s.getdata();
			           v.push_back(s);
			           cout<<"Data entered successfully \n";
			       }
			       break;
			       
	    case 2:cout<<"Enter roll no to search \n";
			   
			   cin>>s.r;
			   itr=find(v.begin(),v.end(),s);
			   if (itr!=v.end())
			   {
			   		cout<<"Data found !!\n";
			   		cout<<"Name of student is "<<itr->name<<endl;
					cout<<"Roll no of student is "<<itr->r<<endl;
					cout<<"DOB of student is "<<itr->dob<<endl;
					cout<<"Percentage of student is "<<itr->p<<endl;
			   }
			   break;
	    case 3:
	    		cout<<"\n*****Displaying records*****\n ";
	    		for(itr=v.begin();itr!=v.end();itr++)
	    		{
	    			itr->show();
	    		}
	    		break;
		case 4:
			sorting(v);
		
				
			   
	
	
	
	}}while(ch!=0);
	

}



