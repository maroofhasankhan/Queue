#include <iostream>
using namespace std;


struct Node
{
    int data;
    Node *next;
};
    struct Node *f=NULL;
    struct Node *r=NULL;
    
void transverse()
{
    struct Node *temp=f;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void enqueue(int data)
{
    Node *temp=new Node;
    if (temp==NULL)
    {
        cout<<"Queue if Full!"<<endl;
    }
    else
    {
        temp->data = data;
        temp->next =NULL;
        if (f==NULL)
        {
            f=r=temp;
        }
        else
        {
            r->next=temp;
            r=temp;
        }
        cout<<"Successfully enqued"<<endl;
    }
}
void dequeue()
{
    Node *temp=f;
    if(f==NULL)
        cout<<"Queue is Empty!";

    else
    {
        cout<<f->data<<endl;
        f=f->next;
        free(temp);
    }
}
int main()
{
   enqueue(56);
   enqueue(3);
   enqueue(86);
   dequeue();
   transverse();
    return 0;
}