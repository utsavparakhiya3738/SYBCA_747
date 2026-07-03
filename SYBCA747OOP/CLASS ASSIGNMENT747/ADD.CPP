#include<iostream.h>
#include<conio.h>

class add {
	int a,b,c;
	public:
	void input() {
		cout <<"Enter any number :";
		cin >> a >> b;
	}
	void sum() {
		c = a+b;
	}
	void show() {
		cout << c;
	}
};
void main() {
	clrscr();
		add d1;
		d1.input();
		d1.sum();
		d1.show();
	getch();
};
