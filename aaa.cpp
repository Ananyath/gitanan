#include<iostream>
#include<conio.h>
using namespace std;
class Btime;
class Atime
{
	int hour,min;
	public:
			void gettime(){
				cout<<"Enter time in hours and minutes:"<<endl;
				cin>>hour>>min;
			}
			void displaytime(){
				cout<<"The time is:"<<hour<<"hours and"<<min<<"minutes"<<endl;
			}
			friend void addtime(Atime t1,Btime t2);
		};
class Btime
{
	
	int hour,min;
	public:
			void gettime(){
				cout<<"Enter time in hours and minutes:"<<endl;
				cin>>hour>>min;
			}
			void displaytime(){
				cout<<"The time is:"<<hour<<"hours and"<<min<<"minutes"<<endl;
			}
			friend void addtime(Atime t1,Btime t2);
		};
		
	void addtime(Atime t1,Btime t2){
		Atime t3;
		t3.min=t1.min+t2.min;
		t3.hour=t3.min/60;
		t3.min=t3.min%60;
		t3.hour=t3.hour+t1.hour+t2.hour;
		t3.displaytime();
	}
int main()
{
	Atime t1;
	Btime t2;
	t1.gettime();
	t2.gettime();
	t1.displaytime();
	t2.displaytime();
	addtime(t1,t2);
	getch();
	return 0;
}
Write to Nischal Tandukar

