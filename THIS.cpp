#include <iostream>
using namespace std;
class example {
private:
	char c1, c2;
public:
	void init(char b) { c1 = b; c2 = b + 1; }
	example& increment() { c1++; c2++; return(*this); }
	example* where() { return(this); }
	void print() { cout << c1 << " " << c2 << endl; }
};
int main() {
	example a, b;
	a.init('A'); 
	b.init('B'); 
	a.print();  
	cout << "&a = " << a.where() << endl; 
	a.increment().print();  
	b.increment().print();  
	cin.get();
	return 0;
}