#include <iostream>

using namespace std;

class Counter
{
public:
    Counter(int sec)
    {
        seconds = sec;
    }
    void display()
    {
        std::cout << seconds << " seconds" << std::endl;
    }
    Counter& operator += (Counter c2)
    {
        seconds += c2.seconds;
        return *this;
    }
    int seconds;
};
int main()
{
    Counter c1(20);
    Counter c2(10);
    c1 += c2;
    c1.display();   // 30 seconds
    return 0;
}