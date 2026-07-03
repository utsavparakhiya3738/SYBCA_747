#include<iostream.h>
#include<conio.h>

class base {
	int a;
	public:
	void geta() {
		a = 10;
	}
	void puta() {
		cout << a;
	}
};

class derived : public base {
	int b;
	public:
	void getb() {
		b = 20;
	}
	void putb() {
		cout << b;
	}
};

void main() {
	clrscr();
	derived obj;
	obj.geta();
	obj.puta();
	obj.getb();
	obj.putb();
	getch();
}