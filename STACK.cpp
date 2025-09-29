#include<iostream>
using namespace std;
#define max 5

struct stack
{
    int data[max];
    int top;
};

stack s1,*p;

void init()
{
    p=&s1;
    p->top=-1;
}

int empty()
{
    if(p->top == -1)
    return 1;
    else
    return 0;
}

int full()
{
    if(p->top == max-1)
    return 1;
    else
    return 0;
}

int push(int x)
{
    if(full() == 1)
    return 0;
    p->top=p->top+1;
    p->data[p->top]=x;
}

int pop()
{
    int x;
    if(empty() == 1)
    return 0;
    x=p->data[p->top];
    p->top=p->top-1;
    return x;
}

int main()
{
    init();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout<<"\n"<<pop();
    cout<<"\n"<<pop();
    cout<<"\n"<<pop();
    cout<<"\n"<<pop();
    cout<<"\n"<<pop();

    return 0;
}