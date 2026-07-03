#include<iostream.h>
#include<conio.h>

class a {
	int n,i,r;
	public:
	void table() {
		cout << "Enter any number..:";
		cin >> n;
		for(i=1; i<11; i++) {
			r = n*i;
			cout << n << "*" << i << "=" << r;
			cout << "\n";
		}
	}
};

void main() {
	clrscr();
	a obj;
	obj.table();
	getch();
}