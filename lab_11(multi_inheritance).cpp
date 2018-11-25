#include<iostream>
using namespace std;
class A
{
	char name[40];
	public:
		void read()
		{
			cout<<"enter the student name : ";
			cin>>name;
		}
		void show()
		{
			cout<<"student name is  "<<name<<endl; 
		}
};
class B
{
	int roll_no;
	
	public:
		void read()
		{
		
	
		cout<<"enter the student roll no. : ";
		cin>>roll_no;
    	}
    	void show()
    	{
    		cout<<"student roll no. is : "<<roll_no<<endl;
		}
		
};
class C
{
	char branch[40];
	public:
			void read()
			{
				cout<<"enter the student branch : ";
				cin>>branch;
			}
	        void show()
			{
			    cout<<"employee desgination is"<<branch<<endl;
		    }
				
};
class D : public A,public B,public C
{
	public:
		void read()
		{
			A::read();
			B::read();
			C::read();
		}
		void show()
		{
			A::show();
			B::show();
			C::show();
		}
};
int main()
{
	class D e;
	cout<<"enter the details of student"<<endl;
	e.read();
	e.show();
}

