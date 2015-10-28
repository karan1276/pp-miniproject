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
		cout<<endl<<"Destroying Human object"<<endl;
	}
	
	//Getters
	void getPrn(){
		cin>>prn;
		if(!cin)
		{
		    // user didn't input a number
		    cin.clear(); // reset failbit
		    cin.ignore();
		    cout<<"Entered info not valid, try again"<<endl;
		    getPrn();
		}
	}
	void getName(){
		cin>>name;
		if(!cin)
		{
		    // user didn't input a number
		    cin.clear(); // reset failbit
		    cin.ignore();
		    cout<<"Entered info not valid, try again"<<endl;
		    getName();
		}
	}
	void getYear(){
		cin>>year;
		if(!cin)
		{
		    // user didn't input a number
		    cin.clear(); // reset failbit
		    cin.ignore();
		    cout<<"Entered info not valid, try again"<<endl;
		    getYear();
		}
	}
	void getAddress(){
		cin>>address;
		if(!cin)
		{
		    // user didn't input a number
		    cin.clear(); // reset failbit
		    cin.ignore();
		    cout<<"Entered info not valid, try again"<<endl;
		    getAddress();
		}
	}
	void getHuman(){
		cout<<"Enter Prn:"<<endl;
		getPrn();
		cout<<"Enter Name:"<<endl;
		getName();
		cout<<"Enter Year:"<<endl;
		getYear();
		cout<<"Enter Address:"<<endl;
		getAddress();
	}
	//printers
	void printPrn(){
		cout<<prn;
	}
	void printName(){
		cout<<name;
	}
	void printYear(){
		cout<<year;
	}
	void printAddress(){
		cout<<address;
	}
	void printHuman(){
		cout<<endl<<"Prn: ";
		printPrn();
		cout<<endl<<"Name: ";
		printName();
		cout<<endl<<"Year: ";
		printYear();
		cout<<endl<<"Address: ";
		printAddress();
	}
	//Reset function
	void resetHuman(){
		prn=0;
		strcpy(name,"anonymous");
		year=1;
		strcpy(address,"anonymous");
	}
	
	friend void search(int);
};
class Student: private Human{
	private:
		int co_marks;
		int del_marks;
		int ds_marks;
		int fds_marks;
		int pp_marks;
	public:
		//Default Constructor
		Student(){
			co_marks=0;
			del_marks=0;
			ds_marks=0;
			fds_marks=0;
			pp_marks=0;	
		}
		//Custom Constructor
		Student(int co,int del,int ds,int fds,int pp){
			co_marks=co;
			del_marks=del;
			ds_marks=ds;
			fds_marks=fds;
			pp_marks=pp;	
		}
		//Copy Constructor
		Student(Student &s){
			co_marks=s.co_marks;
			del_marks=s.del_marks;
			ds_marks=s.ds_marks;
			fds_marks=s.fds_marks;
			pp_marks=s.pp_marks;
		}
		//Destructor
		~Student(){
			cout<<"Destroying Student object"<<endl;
		}
		//Getters
		void getCo(){
			cin>>co_marks;
			if(!cin)
			{
			    // user didn't input a number
			    cin.clear(); // reset failbit
			    cin.ignore();
			    cout<<"Entered info not valid, try again"<<endl;
			    getCo();
			}
		}
		void getDel(){
			cin>>del_marks;
			if(!cin)
			{
			    // user didn't input a number
			    cin.clear(); // reset failbit
			    cin.ignore();
			    cout<<"Entered info not valid, try again"<<endl;
			    getDel();
			}
		}
		void getDs(){
			cin>>ds_marks;
			if(!cin)
			{
			    // user didn't input a number
			    cin.clear(); // reset failbit
			    cin.ignore();
			    cout<<"Entered info not valid, try again"<<endl;
			    getDs();
			}
		}
		void getFds(){
			cin>>fds_marks;
			if(!cin)
			{
			    // user didn't input a number
			    cin.clear(); // reset failbit
			    cin.ignore();
			    cout<<"Entered info not valid, try again"<<endl;
			    getFds();
			}
		}
		void getStudent(){
			getHuman();
			cout<<"Enter CO marks"<<endl;
			getCo();
			cout<<"Enter DEL marks"<<endl;
			getDel();
			cout<<"Enter DS marks"<<endl;
			getDs();
			cout<<"Enter FDS marks"<<endl;
			getFds();
		}
		//printers
		void printCo(){
			cout<<co_marks;
		}
		void printDel(){
			cout<<del_marks;
		}
		void printDs(){
			cout<<ds_marks;
		}
		void printFds(){
			cout<<fds_marks;
		}
		void printStudent(){
			printHuman();
			cout<<endl<<"CO marks: ";
			printCo();
			cout<<endl<<"DEL marks: ";
			printDel();
			cout<<endl<<"DS marks: ";
			printDs();
			cout<<endl<<"FDS marks: ";
			printFds();
		}
		//Reset Function
		void resetStudent(){
			resetHuman();
			co_marks=0;
			del_marks=0;
			ds_marks=0;
			fds_marks=0;
			pp_marks=0;	
		}
};

int main(){
	Student s[10];
	register int i;
	int top=0, option=0, flag=1;
	do{
		cout<<"Enter your choise:"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Add Student"<<endl;
		cout<<"2. Search Student"<<endl;
		cout<<"3. Generated Marksheet"<<endl;
		cout<<"4. Delete Student Record"<<endl;
		cout<<"5. Modify Student Record"<<endl;
		cin>>option;
		
		switch(option){
			case 0:
				flag=0;
			break;
			case  1:
				addStudents();	
			break;
			case  2:
				searchStudents();
			break;
			case  3:
				genrateMarksheet();
			break;
			case  4:
				deleteStudent();
			break;
			case 5:
				modifyStudent();
			break;
		}
		
	}while(flag);
	
	
	

	return 0;
}
