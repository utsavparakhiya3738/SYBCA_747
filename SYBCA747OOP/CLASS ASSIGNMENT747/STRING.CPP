#include<iostream.h>
#include<conio.h>
#include<string.h>

void main() {
	clrscr();
	char str1[50] = "hello";
	char str2[50] = "world";
	char str3[50];
	cout << "length of str1:" << strlen(str1) << endl;

	strcpy(str3, str1);
	cout << "copied string:" << str3 << endl;

	cout << "comparison result:" << strcmp(str1, str2) << endl;

	strcat(str1, str2);
	cout << "concatenated string:" << str1 << endl;

	strrev(str1);
	cout << "reversed string:" << str1 << endl;

	getch();
}