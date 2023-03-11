#include<iostream>
#include<string.h>

using namespace std;

class animal
{
	public :
		int age;
		char name[100];
		
		void set_value()
		{
			cout<<"Enter the age of zebra :"<<endl;
			cin>>age;
			cout<<"Enter the age of dolphin :"<<endl;
			cin>>age;
			cout<<"Enter the name of zebra :"<<endl;
			cin>>name;
			cout<<"Eenter the name of dolphin :"<<endl;
			cin>>name;			
		}
};

class zebra : public animal
{
	public :
		void akm()
		{
			cout<<"The zebra age is :"<<age<<endl<<"The zebra name :"<<name<<endl;
		}	
};

class dolphin : public animal
{
	public :
		void iua()
		{
			cout<<"The dolphin age is :"<<age<<endl<<"The dolphin name is :"<<name<<endl;
		}
		 
};

int main()
{
	zebra z1;
	dolphin d1;
	z1.set_value();
	z1.akm();
	d1.set_value();
	d1.iua();
	
	return 0;
}
