#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class person
{
	int id;
	string name;
	public:
		virtual void getdata()
		{
			cout<<"Enter the name: ";
			cin>>name;
			cout<<"Enter the id: ";
			cin>>id;
		}
		virtual void putdata()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Personal ID is: "<<id<<endl;
		}
};
class student: public person
{
	person ob1;
	public:
		void getdata()
		{
			cout<<"Enter details of student: "<<endl;
			ob1.getdata();
		}
		void putdata()
		{
			cout<<"Details of Student are: "<<endl;
			ob1.putdata();
		}
};
class teacher: public person
{
	person ob2;
	public:
		void getdata()
		{
			cout<<"Enter the details of teacher: "<<endl;
			ob2.getdata();
		}
		void putdata()
		{
			cout<<"Details of teacher are: "<<endl;
			ob2.putdata();
		}
};
int main()
{
	student s1;
	teacher t1;
	person *p=new person();
	p=new student();
	p->getdata();
	p->putdata();
	delete p;
	p=new teacher();
	p->getdata();
	p->putdata();
	delete p;
	getch();
	return 0;
}
