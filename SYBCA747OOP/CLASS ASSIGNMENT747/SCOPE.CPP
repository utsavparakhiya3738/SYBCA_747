#include<iostream.h>
#include<conio.h>

class a {
	public:
	void fun();
};

void a :: fun() {
	cout << "func()called";
}

void main() {
	clrscr();
	a obj;
	obj.fun();
	getch();
}