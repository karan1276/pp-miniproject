//
// Author: Karan & Anshit
// Version: v1.0
// Tittle: Student Record System
//
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <typeinfo>
using namespace std;
union tempHuman{
	int p;
	char n[20];
	int y;
	char a[20];
};
class Human{
	private:
		int prn;
		char name[20];
		int year;
		char address[20];
		union tempHuman t;
		
	public:
	//Default Constructor
	Human(){
			prn=0;
			strcpy(name,"anonymous");
			year=1;
			strcpy(address,"anonymous");
	}
	//Custom Constructor
	Human(int p, char n[20],int y,char a[20]){
			prn=p;
			strcpy(name,n);
			year=y;
			strcpy(address,a);
	}
	//Copy Constructor
	Human(Human &h){
			prn=h.prn;
			strcpy(name,h.name);
			year=h.year;
			strcpy(address,h.address);
	}
	//Destructor
	~Human(){
		cout<<endl<<"Exiting human object"<<endl;
	}
	
	//Getters
	void getPrn(){
		cin>>prn;
	}
	void getName(){
		gets(name);
	}
	void getYear(){
		cin>>year;
	}
	void getAddress(){
		gets(address);
	}
	
	//printers
	void printPrn(){
		cout<<prn;
	}
	void printName(){
		puts(name);
	}
	void printYear(){
		cout<<year;
	}
	void printAddress(){
		puts(address);
	}
};
class Student: private Human{
	private:
		int co_marks;
		int del_marks;
		int ds_marks;
		int fds_marks;
		int pp_marks;
};
int main(){
	Student h;
	
	return 0;
}
