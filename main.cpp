//
// Author: Karan & Anshit
// Version: v1.0
// Tittle: Student Record System
//
#include <iostream>
#include <string.h>
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
		cout<<"Exiting human object"<<endl;
	}
	
	//Getters
	void getPrn(){
		 
	}
};
int main(){
	Human h;
	return 0;
}