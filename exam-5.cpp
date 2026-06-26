#include<iostream>
using namespace std;

class shape{
	public:
		virtual int area() = 0;
		virtual void draw() = 0;
		virtual ~shape(){
		}
};

class circle : public shape{
	private:
		int radius;
	public:
		circle(int r) :	radius(r){}
		int area(){
			return 3.14*radius*radius;
		}
		void draw(){
			cout<<"drawing a circle."<<endl;
		}
};

class rectangle : public shape{
	private:
		int width, length;
	public:
		rectangle(int w, int l) : width(w), length(l){}
		int area(){
			return width*length;
		}
		void draw(){
			cout<<"drawing a rectangle."<<endl;
		}
};

int main()
{
	shape *s[]={new circle(5), new rectangle(4,6)};
	
	for (int i=0; i<2; i++){
		s[i]->draw();
		cout<<"area:"<<s[i]->area()<<endl;
	}
	return 0;
}
/*
drawing a circle.
area:78
drawing a rectangle.
area:24
*/