#include <iostream>
#include<new>
using namespace std;
struct nod
{
    int info;
    struct nod *next;
};
typedef struct nod node;
class list
{
    node *f;

public:
    list()
    {
        f = NULL;
    }
    void ins(int num)
    {
        node *p = new node;
        p->info = num;
        p->next = f;
        f = p;
    }
    void del()
    {
        node *temp = f;
        if (f == NULL)
            cout<<"No elements to delete\n";
        else
        {
            cout << "The deleted elements is: "<< f->info<< endl;
            f = f->next;
            delete temp;
            cout <<"Deletion successfull \n";
        }
        return;
    }
    void disp()
    {
        node *temp = f;
        if (f == NULL)
            cout<<"List is empty\n";
        else
        {
            cout <<"\nElements in the list are:";
            while (temp != NULL)
            {
                cout << " " << temp->info;
                temp = temp->next;
            }
            cout<<endl<<endl;
        }
    }
};
int main()
{
    int num, ch = 1;
    list ob;
    while (ch)
    {
        cout << "Enter your choice:-\n";
        cout << "1. Insert\n2. Delete\n3. Exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout <<"Enter no. to be inserted\n";
            cin >> num;
            ob.ins(num);
            ob.disp();
            break;
        case 2:
            ob.del();
            ob.disp();
            break;
        case 3:
            return 0;
        default:
            cout << "Invalid choice \n";
            break;
        }
    }
}
