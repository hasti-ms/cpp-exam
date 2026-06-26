#include<iostream>
using namespace std;

class book{
	private:
		char title[50];
		char author[50];
		int publishedYear;
	public:
		void books(){
		cout<<"\n---book---\n";
		cout<<"title:";
		cin>>title;
		cout<<"author:";
		cin>>author;
		cout<<"published year:";
		cin>>publishedYear;
	    }
};

int main()
{
	book b[2];
	
	for(int i=0; i<2; i++){
		b[i].books();
	}
}
/*
---book---
title:atomichabits
author:jamesclear
published year:1990

---book---
title:oak
author:bob
published year:2008
*/