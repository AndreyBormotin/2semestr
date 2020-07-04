#include <iostream>
using namespace std;
class X
{
	static int n;
	static char ClassName[30];
public:
	static int getN() { return n; }
	static char* getClass() { return ClassName; }
	X() { n++; }
};
int X::n = 0;
char X::ClassName[] = "My Class";
int main()
{
	X a, b, c;
	cout << X::getN() << " objects of Class \"" << X::getClass() << "\"" << endl;
	cin.get();
	return 0;
}