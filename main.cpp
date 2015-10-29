//
// Author: Karan & Anshit
// Version: v1.0
// Tittle: Student Record System
//
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <typeinfo>
#include <iomanip> 
using namespace std;
union tempHuman{
	int p;
	char n[20];
	int y;
	char a[20];
};
class Human{
	protected:
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
	
};
class Student: public Human{
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
		
		//Friend Functions
		friend void searchStudents(Student& s,int prn);
		friend void genrateMarksheet(Student& s);
		friend int positionStudents(Student& s,int prn);
		friend void deleteStudent(Student& s1,Student& s2);
		
		//for trying out things
		friend void fakeData(Student& s1,Student& s2,Student& s3,Student& s4,Student& s5,Student& s6);
};
void addStudents(Student& obj, int * top){
	obj.getStudent();
	(*top)++;
}
void searchStudents(Student& s,int prn){
	if(s.prn==prn){
		cout<<"Details of Student are: "<<endl;
		s.printStudent();
	}
}
void genrateMarksheet(Student& s){
	cout<<setw(15)<<left<<s.name<<setw(6)<<left<<s.prn<<setw(6)<<left<<s.co_marks<<setw(6)<<left<<s.del_marks<<setw(6)<<left<<s.ds_marks<<setw(6)<<left<<s.fds_marks<<endl;
}
int positionStudents(Student& s,int prn){
	if(s.prn==prn){
		return 1;
	}
	return 0;
}
void deleteStudent(Student& s1,Student& s2){
	//human
	s1.prn=s2.prn;
	strcpy(s1.name,s2.name);
	s1.year=s2.year;
	strcpy(s1.address,s2.address);
	//student
	s1.co_marks=s2.co_marks;
	s1.del_marks=s2.del_marks;
	s1.ds_marks=s2.ds_marks;
	s1.fds_marks=s2.fds_marks;
}

//Enterring fake data
void fakeData(Student& s1,Student& s2,Student& s3,Student& s4,Student& s5,Student& s6){
	//s1
	s1.prn=1;
	strcpy(s1.name,"Nitish");
	s1.year=3;
	strcpy(s1.address,"Delhi");
	s1.co_marks=12;
	s1.del_marks=2;
	s1.ds_marks=14;
	s1.fds_marks=9;
	//s2
	s2.prn=2;
	strcpy(s2.name,"lalu");
	s2.year=1;
	strcpy(s2.address,"Bihar");
	s2.co_marks=0;
	s2.del_marks=0;
	s2.ds_marks=0;
	s2.fds_marks=0;
	//s3
	s3.prn=3;
	strcpy(s3.name,"Modi");
	s3.year=4;
	strcpy(s3.address,"Guju");
	s3.co_marks=20;
	s3.del_marks=20;
	s3.ds_marks=20;
	s3.fds_marks=20;
	//s4
	s4.prn=4;
	strcpy(s4.name,"Jai lalita");
	s4.year=2;
	strcpy(s4.address,"kerela");
	s4.co_marks=15;
	s4.del_marks=18;
	s4.ds_marks=4;
	s4.fds_marks=9;
	//s5
	s5.prn=5;
	strcpy(s5.name,"thakre");
	s5.year=3;
	strcpy(s5.address,"Mumbai");
	s5.co_marks=7;
	s5.del_marks=11;
	s5.ds_marks=19;
	s5.fds_marks=13;
	//s6
	s6.prn=6;
	strcpy(s6.name,"Shila");
	s6.year=1;
	strcpy(s6.address,"North");
	s6.co_marks=0;
	s6.del_marks=12;
	s6.ds_marks=8;
	s6.fds_marks=19;
}
int main(){
	Student s[10];
	int top=0, option=0, flag=1,prn,index;
	register int i=0;
	
	//adding fake data
	fakeData(s[0],s[1],s[2],s[3],s[4],s[5]);
	top=6;
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
				addStudents(s[top],&top);
			break;
			case  2:
				cout<<"Enter students PRN: "<<endl;
				cin>>prn;
				
				for(i=0;i<top;i++){
					searchStudents(s[i],prn);
					continue;
				}
				cout<<"Student Not found, sorry"<<endl;
			break;
			case  3:
				cout<<"Genrated Marksheet:"<<endl;
				cout<<"Name"<<setw(13)<<"|Prn"<<setw(6)<<"|Co"<<setw(6)<<"|Del"<<setw(6)<<"|Ds"<<setw(6)<<"|Fds"<<setw(6)<<endl;
				for(i=0;i<top;i++){
					genrateMarksheet(s[i]);
				}
			break;
			case  4:
				cout<<"Enter students PRN: "<<endl;
				cin>>prn;
				
				for(i=0;i<top;i++){
					if(positionStudents(s[i],prn)){
						index=i;
					}
				}
				top--;
				for(i=index;i<top;i++){
					deleteStudent(s[i],s[i+1]);
				}
			break;
			case 5:
				cout<<"Enter students PRN: "<<endl;
				cin>>prn;
				for(i=0;i<top;i++){
					if(positionStudents(s[i],prn)){
						index=i;
					}
				}
				s[index].getStudent();
				
			break;
		}
		
	}while(flag);
	
	
	

	return 0;
}
