﻿#include <iostream>

#include <stdlib.h>

using namespace std;

const int SIZE = 26;

class stack {

	char stck[SIZE];

	int tos;

public:

	void init();

	void push(char ch);

	char pop();

};

void stack::init()

{
	tos = 0;
}

void stack::push(char ch)

{

	if (tos == SIZE) {

		cout << "Stek polon!" << endl;

		return;

	}

	stck[tos] = ch;

	tos++;

}

char stack::pop() {

	if (tos == 0) {

		cout << "Stek polon!" << endl;

		return 0;

	}

	tos--;

	return stck[tos];

}

int main()

{

	stack s1, s2;

	int i;

	s1.init();

	s2.init();


	s1.push('a');

	s2.push('b');

	s1.push('c');

	s2.push('d');

	s1.push('e');

	s2.push('f');

               

	for (i = 0; i < 3; i++) cout << s1.pop() << "  ";

	cout << endl;

	for (i = 0; i < 3; i++) cout << s2.pop() << "  ";

	cout << endl;

	system("pause");

	return 0;

	}