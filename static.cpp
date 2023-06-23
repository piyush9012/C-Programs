#include <iostream>
using namespace std;

class counter
{
    static int res;
    public:
        static int count;
        counter(){
            count++;
        }
        ~counter()
        {
            count--;
        }
};

int counter::count;
void f();

int main(void)
{
    counter o1;
    cout << "Object in existence: "<< counter::count <<endl;
    counter o2;
    cout << "Object in existence: "<< counter::count <<endl;
    f();
    cout << "Object in existence: ";
    cout << counter::count << "\n";
    return 0;
}

void f()
{
    counter temp;
    cout << "Object in existence: ";
    cout << counter::count << "\n";
}
