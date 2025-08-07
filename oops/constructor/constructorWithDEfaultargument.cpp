#include <iostream>
using namespace std;

class simple
{
    int data1;
    int data2;

public:
    simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void simple :: printdata(){
    cout << "the value od data1 and data2 is " << data1 << "and" << data2 << endl;
}
int main()
{
    simple c1(1);
    c1.printdata();
}
