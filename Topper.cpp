#include <iostream>
using namespace std;

class stud
{
    char usn[20], name[20];
    float marks[3];
    int i;

    public:
        float avg;
        void read();
        void calculate();
        void display();
};

void stud::read()
{

    cout << "Enter USN: ";
    cin >> usn;
    cout << "Enter Name: ";
    cin >> name;
    for (i = 0; i < 3; i++)
    {
        cout << "Enter the marks of subject " << i+1 << ": ";
        cin >> marks[i];
    }
}

void stud ::calculate()
{
    int sum = 0, min = marks[0];
    for (i = 0; i < 3; i++)
    {
        sum += marks[i];
        if (min >= marks[i])
            min = marks[i];
    }
    avg = float(sum-min)/2;
}

void stud::display()
{
    cout << usn << "\t" << name << "\t";
    for (i = 0; i < 3; i++)
        cout << marks[i] << "\t";
    cout << avg << endl;
}

int main()
{
    int n, topper, i;
    float max = 0;
    cout <<"Enter the number of students: ";
    cin >> n;
    stud s[n];
    for (i = 0; i < n; i++)
    {
        s[i].read();
        s[i].calculate();
    }

    cout << "USN\t\t Name \t";
    for (i = 0; i < 3; i++)
        cout << "Marks " << i + 1 << "\t";
    cout << "Average"<<endl;

    for (i = 0; i < n; i++)
        s[i].display();

    for (i = 0; i < n; i++)
    {
        if (max < s[i].avg)
        {
            max = s[i].avg;
            topper = i;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (s[topper].avg == s[i].avg)
        {
            cout << "\nThe toppers is student " << i+1 << ": ";
            cout << "\nDetails:- "<<endl;
            s[i].display();
        }
    }
    return 0;
}
