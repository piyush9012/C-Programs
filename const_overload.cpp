#include <iostream>
#include <cstdio>
using namespace std;
class date
{
    int day, month, year;
    public:
        date(char *d);
        date(int m, int d, int y);
        void show_date();
};

date::date(char *d)
{
    scanf("%d%d%d", &month, &day, &year);
}

date::date(int m, int d, int y)
{
    day = d;
    month = m;
    year = y;
}

void date::show_date()
{
    cout<<month<<"/"<<day<<"/"<<year<<"\n";
}

int main()
{
    cout<<"Enter Date: ";
    date ob1(12, 4, 2003), ob2(" ");
    ob1.show_date();
    ob2.show_date();
    return 0;
}
