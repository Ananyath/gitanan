#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person{
	protected:
		char name[50];
		int age;
	public:
void getdata(){
	cout<<"Enter your name and age"<<endl;
	cin>>name>>age;
}
void displaydata(){
	cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl;
}
};
class student:public person{
  	char faculty[25];
  	public:
  	student(char *f){
  		strcpy(faculty,f);
	  }
	void displaydata(){
		cout<<"The faculty is:"<<faculty<<endl;
	}
};
class employee:public person{
	char department[50];
	public:
	employee(char *d){
		strcpy(department,d);
	}
	
	void displaydata(){
		cout<<"The department is "<<department<<endl;
	}
};
int main(){
	student s("BEIT");
	employee e("MATHS");
	cout<<"For students"<<endl;
	s.person::getdata();
	s.person::displaydata();
	s.displaydata();
	cout<<"For Teachers "<<endl;
	e.person::getdata();
	e.person::displaydata();
	e.displaydata();
}
