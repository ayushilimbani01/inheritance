#include<iostream>
#include<string.h>

using namespace std;

class A
{
	public :
		int id;
		int salary;
		int contact;
		char role[100];
		char email[100];
		char name[100];
		int experience;
		char comp_name[100];
		char address[100];
		
		void setter()
		{
			cout<<"enter the id :"<<endl;
			cin>>id;
			cout<<"enter the salary :"<<endl;
			cin>>salary;
			cout<<"enter the role :"<<endl;
			cin>>role;
				
		}
			
};


class B : public A
{
	public:
		
		void set1()
		{
	       cout<<"enter the salary :"<<endl;
	       cin>>salary;
	       cout<<"enter the experience :"<<endl;
	       cin>>experience;
	       
		}
};

class  C : public B
{
	public:
		
		void set2()
		{
			cout<<"enter the comp_name :"<<endl;
			cin>>comp_name;
			cout<<"enter the address :"<<endl;
			cin>>address;
			
		}
		void get()
		{
			cout<<endl<<name<<"name :"<<name<<endl;
			cout<<"role :"<<role<<endl;
			cout<<"salary :"<<salary<<endl;
			
		}
	
};

class D : public C
{
	public :
	void set3()
	{
		cout<<"enter the mail :"<<endl;
		cin>>email;
		cout<<"enter the contact :"<<endl;
		
		
	}
	void get1()
	{
		cout<<"id :"<<id<<endl;
		cout<<"name ;"<<name<<endl;
		cout<<"role :"<<role<<endl;
		cout<<"salary :"<<salary<<endl;
		cout<<"expeirence :"<<experience<<endl;
		cout<<"comp_name :"<<comp_name<<endl;
		cout<<"address :"<<address<<endl;
		cout<<"email :"<<email<<endl;
		cout<<"contact :"<<contact<<endl;
			
	}
	
	
};

int main()
{
	A a1;
    B b1;
    C c1;
    D d1;   
	
	a1.setter();
	b1.set1();
	c1.set2();
	c1.get();
	d1.set3();
	d1.get1() ;          
	
		
	return 0;

}
