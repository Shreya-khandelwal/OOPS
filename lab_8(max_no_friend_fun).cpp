#include<iostream>
using namespace std;
class b;
class a
{
  int num1;
  public:
  void set()
   {
	cout<<"enter first no";
	cin>>num1;
    }
	friend void max(a,b);
};
class b
{
  int num2;
  public:
  void set()
   {
	cout<<"enter second no ";
	cin>>num2;
   }
       friend void max(a,b);
};
void max(a a1.b b1)
  {
      if(a.num1>b.num2)
        {   
          cout<<"num 1is greater";
        }
      else
        {
          cout<<"num 2 is greater";
        }
  }
	
void main()
  {
       clrscr();
       class a a1;
       class b b1;
       a1.set();
       b1.set();
       max(a1,b1);
       getch();
   }
	
