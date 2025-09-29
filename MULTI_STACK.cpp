#include<iostream>
#include<stdlib.h>
using namespace std;
# define max 5

struct stack
{
    int data;
    int topA,topB;
};

stack s1,*p;

void init()
{
    p=&s1;
    p->topA = -1;
    p->topB = max;
}

// function for checking the stack is full or not
int full()
{
    if(p->topA+1 == p->topB)
    return 1;

    else
    return 0;
}

// functions for adding the new elements

// for stack starting from left
void pushA(int x)
{
    if (full() == 1)
    return;

    p->topA++;
    p->data[p->topA] = x;
}

// for stack starting from right
void pushB(int x)
{
    if(full() == 1)
    return;

    p->topB--;
    p->data[p->topB] = x;
}

// function for checking that the stack is empty or not

// for left stack
int emptyA()
{
    if(p->topA == -1)
    return 1;

    else 
    return 0;
}

int emptyB()
{
    if(p->topB == max)
    return 1;
    else
    return 0;
}

// for deleting the elements

int popA()
{
    int x;
    if(emptyA() == 1)
    return 0;
    x=p->data[p->topA];
    p->topA--;
    return x;
}

int popB()
{
    int x;
    if(emptyB() == 1)
    return 0;
    x=p->data[p->topB];
    p->topB++;
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