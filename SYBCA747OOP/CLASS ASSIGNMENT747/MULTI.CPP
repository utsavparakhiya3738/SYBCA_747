#include<iostream.h>
#include<conio.h>

class mul{
	int a,b,c;
	public:
	void input() {
		cout <<"Enter any number :";
		cin >> a >> b;
	}
	void multi() {
		c = a*b;
	}
	void show() {
		cout << c;
	}
};
void main() {
	clrscr();
		mul d1;
		d1.input();
		d1.multi();
		d1.show();
	getch();
};