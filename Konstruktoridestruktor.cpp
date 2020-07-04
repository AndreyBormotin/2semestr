#include <iostream>
using namespace std;
class vect
{
    int size;
    int* array;
public:
    vect(int size)
    {
        this->size = size;
        array = new int[size];
        for (int i = 0; i < size; i++)
            array[i] = 0;
    }
    int& element(int i) { return array[i]; }
    int getSize() { return size; }
};
class multi_v
{
public:
    vect a;
    vect b;
    vect c;
    multi_v(int size) : a(size), b(size), c(size) { }
    int getSize() { return a.getSize(); }
};
int main()
{
    system("chcp 1251");
    system("cls");
    multi_v f(3);
    for (int i = 0; i <= f.getSize(); i++)
    {
        f.a.element(i) = 18 + i;
        f.b.element(i) = 65 + 5 * i;
        f.c.element(i) = 175 + 5 * i;
    }
    for (int i = 0; i <= f.getSize(); i++)
    {
        cout << f.a.element(i) << " возраст \t";
        cout << f.b.element(i) << " вес \t";
        cout << f.c.element(i) << " рост" << endl;
    }
    cin.get();
    return 0;
}