#include<iostream>
using namespace std;

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(queue* a)
{
    if(a->f==a->r)
        return 1;
    else
        return 0;
}
int isfull(queue* a)
{
    if((a->r+1)%a->size==a->f)
        return 1;
    else
        return 0;
}
void enqueue(queue *a,int data)
{
    if (isfull(a))
    {
        cout << "Queue is full!" << endl;
    }
    else
    {
        a->r=(a->r+1)%a->size;
        a->arr[a->r]=data;
    }
}
void dequeue(queue *a)
{
    if (isempty(a))
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
      a->f=(a->f+1)%a->size;
      cout<<a->arr[a->f]<<endl;
    }
}
int main ()
{
    queue a;
    a.size =50;
    a.f =a.r=0;
    a.arr=new int[a.size];
    enqueue(&a,68);
    enqueue(&a,87);
    enqueue(&a,6);
    dequeue(&a);
    dequeue(&a);
    dequeue(&a);
    dequeue(&a);
    return 0;
}