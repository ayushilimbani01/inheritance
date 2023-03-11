#include<iostream>
#include<string.h>

using namespace std;


class read
{ 
    public :
    char name;
    int id;
    char salary;

   void set()
   {
        cout<<"Enter the id of employee :"<<endl;
        cin>>id;
        cout<<"Enter the name of employee :"<<endl;
        cin>>name;
        cout<<"Enter the salary of employee :"<<endl;
        cin>>salary;
    }
};


class print
{
    public :
    	char experience;
    	char role[100];
    	void set1()
    	{
    		cout<<"Enter the experience of employee :"<<endl;
    		cin>>experience;
    		cout<<"Enter the role of employee :"<<endl;
    		cin>>role;
		}
           
};

 class employee : public read , public print
 {
 	public :
 		char add[100];
 		char email[100];
 		void set2()
 		{
 			cout<<"Enter the address of employee :"<<endl;
 			cin>>add;
 			cout<<"Enter the email of employee :"<<endl;
 			cin>>email;
 			
 		cout<<"ID :"<<id<<endl<<"Name :"<<name<<endl<<"salary :"<<salary<<endl<<"experience :"<<experience<<endl<<"role :"<<role<<endl<<"Address :"<<add<<endl<<"Email :"<<email<<endl;	
 			
		}
};
int main()
{
	employee e1;
	e1.set();
	e1.set1();
    e1.set2();
    
    return 0;
}
  



    
