#include<iostream>
#include<string>
using namespace std;

class animal{
	protected:
		char name[20];
		char sound[20];
	public:
		virtual void disp(){
			cout<<"animal:"<<name<<endl;
			cout<<"sound:"<<sound<<endl;
		}
		animal(char n[], char s[]){
			strcpy(name, n);
			strcpy(sound, s);
		}
	    virtual~animal(){
		}
};

class dog : public animal{
	public:
		dog(char* n, char* s) : animal(n, s){}
		void disp(){
			cout<<"[dog]name:"<<name<<"\nsound:"<<sound<<endl;
		}
};

class cat : public animal{
	public:
		cat(char* n, char* s) : animal(n, s){}
		void disp(){
			cout<<"[cat]name:"<<name<<"\nsound:"<<sound<<endl;
		}
};

int main()
{
	animal *a[2];
	
	a[0] = new dog("bob", "woof");
	a[1] = new cat("lemon", "meow");
	
	for(int i=0; i<2; i++){
		a[i]->disp();
	}
}
/*
[dog]name:bob
sound:woof
[cat]name:lemon
sound:meow
*/