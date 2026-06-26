#include<iostream>
using namespace std;

class person{
	private:
	   char name[50];
	   char address[50];
	   int age;
	public:
	   	person(char n[], char add[], int a){
	   		strcpy(name, n);
	   		strcpy(address, add);
	   		age=a;
		   }
		   
		void getp(){
			cout<<"\n--details--\n";
			cout<<"name:"<<this->name<<endl;
			cout<<"address:"<<this->address<<endl;
			cout<<"age:"<<this->age<<endl;
		}
};

int main()
{
	person p1("mahi","motavarachha", 20 ), p2("mahek","vapi",19);
	
	p1.getp();
	p2.getp();
}
/*
--details--
name:mahi
address:motavarachha
age:20

--details--
name:mahek
address:vapi
age:19
*/