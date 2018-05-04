#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
}*frnt=NULL,*rear=NULL;
void add(int num)
{
    struct node *p=new node;
    p->data=num;
    p->next=NULL;
    if(frnt==NULL || rear==NULL)
    {
        frnt=p;
    }
    else
    {
        rear->next=p;
    }
    rear=p;
}
void del()
{
    struct node *p;
    int num;
    if(frnt==NULL || rear == NULL)
    {
        cout<<"\nQueue is empty";
    }
    else
    {
        p=frnt;
        num=p->data;
        frnt=frnt->next;
        delete(p);
        cout<<"\nItem is deleted";
    }
}
void display()
{
    struct node *t;
    t=frnt;
    if(frnt == NULL || rear == NULL)
    {
        cout<<"\nQueue is empty.";
        return;
    }
    else
    {
        while(t!=NULL)
        {
            cout<<t->data<<"\n";
            t=t->next;
        }
    }
}
int main()
{
    int num;
    rear=NULL;
    frnt=NULL;
    char c='a';
    {
        int choice;
        while(1)
        {
            cout<<"\n1. Insert.\n2. Delete.\n3. Display.\nChoose Options : ";
            cin>>c;
            switch(c)
            {
            case '1':
                cout<<"Enter Number in queue : ";
                cin>>num;
                add(num);
                break;

            case '2':
                del();
                break;

            case '3':
                display();
                break;

            default:
                cout<<"\nEnter Only Above Options : ";
            }
        }
    }
}

