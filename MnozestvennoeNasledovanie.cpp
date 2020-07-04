#include <iostream>
using namespace std;
class X
{
protected:
    int key;
public:
    X(int i = 0) { cout << "X constructor" << endl; key = i; };
    ~X() { cout << "X destroyed" << endl; cin.get(); };
};
class Y
{
protected:
    int key;
public:
    Y(int i = 0) { cout << "Y constructor" << endl; key = i; };
    ~Y() { cout << "Y destroyed" << endl; cin.get(); };
};
class Z
{
protected:
    int key;
public:
    Z(int i = 0) { cout << "Z constructor" << endl; key = i; };
    ~Z() { cout << "Z destroyed" << endl; cin.get(); };
};
class A : public X, public Y, public Z
{
    int key;
public:
    A(int i = 0) : X(i + 1), Y(i + 2), Z(i + 3)
    {
        key = X::key + Y::key + Z::key;
    }
    int getkey(void) { return(key); }
};
int main()
{
    A object(4);
    cout << "object.key = " << object.getkey();
    cin.get();
    return 0;
}