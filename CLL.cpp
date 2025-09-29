#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *first,*temp,*ttemp,*p;

void create_first(int val)
{
    first=(node *)malloc(sizeof(node));
    first->data=val;
    first->next=first;
}

void add_node(int val)
{
    temp=first;
    while(temp->next!=first)
    {
        temp=temp->next;
    }
    ttemp=(node *)malloc(sizeof(node));
    ttemp->data=val;
    ttemp->next=first;
    temp->next=ttemp;
}

void display()
{
    temp=first;
    cout<<"\nThis Is Your Final List :"<<endl;
    do
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    } 
    while (temp!=first);
}

void sum()
{
    int sum=0;
    temp=first;
    do
    {
        sum=sum+temp->data;
        temp=temp->next;
    }
    while (temp!=first);
    cout<<"\nsum of the data is "<<sum;
}

void add_before_first(int val)
{
    temp=first;
    while (temp->next!=first)
    {
        temp=temp->next;
    }
    p=(node *)malloc(sizeof(node));
    p->data=val;
    p->next=first;
    temp->next=p;
    first=p;
}

void add_before_last(int val)
{
    temp=first;
    while(temp->next!=first)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=(node *)malloc(sizeof(node));
    p->data=val;
    p->next=temp;
    ttemp->next=p;
}

void add_after_data(int data,int val)
{
    temp=first;
    while(temp->data!=data)
    {
        temp=temp->next;
    }
    ttemp=temp->next;
    p=(node *)malloc(sizeof(node));
    p->data=val;
    p->next=ttemp;
    temp->next=p;
}

void add_before_data(int data,int val)
{
    temp=first;
    while(temp->data!=data)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=(node *)malloc(sizeof(node));
    p->data=val;
    p->next=temp;
    ttemp->next=p;
}

void delete_first()
{
    temp=first;
    while(temp->next!=first)
    {
        temp=temp->next;
    }
    ttemp=first->next;
    first->next=NULL;
    temp->next=ttemp;
    first=ttemp;
}
void delete_last()
{
    temp=first;
    while(temp->next!=first)
    {
        ttemp=temp;
        temp=temp->next;
    }
    ttemp->next=first;
    temp->next=NULL;
}

void delete_after_data(int val)
{
    temp=first;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    ttemp=temp->next;
    p=ttemp->next;
    temp->next=p;
    ttemp->next=NULL;
}

void delete_before_data(int val)
{
    temp=ttemp=p=first;
    while(temp->data!=val)
    {
        p=ttemp;
        ttemp=temp;
        temp=temp->next;
    }
    p->next=temp;
    ttemp->next=NULL;
    free(ttemp);
}

void delete_node(int val)
{
    temp=first;
    while(temp->data!=val)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    temp->next=NULL;
}

void swap_first_last()
{
    temp=first;
    while(temp->next!=first)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=first->next;
    ttemp->next=first;
    temp->next=p;
    first->next=temp;
    first=temp;
}

void swap_last_2last()
{
    temp=first;
    while(temp->next->next!=first)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    p->next=temp;
    temp->next=first;
}

void swap_first_second()
{
    temp=first;
    while(temp->next!=first)
    {
        temp=temp->next;
    }
    ttemp=first->next;
    p=ttemp->next;
    first->next=p;
    ttemp->next=first;
    temp->next=ttemp;
    first=ttemp;
}

node *ptr,*t,*ntemp,*nt;

void swap_nth_mth(int m,int n)
{
    int i,j;
    i=j=1;
    temp=ttemp=first;
    while(i<m)
    {
        ptr=temp;
        temp=temp->next;
        i++;
    }
    while(j<n)
    {
        t=ttemp;
        ttemp=ttemp->next;
        j++;
    }
    
    ntemp=temp->next;
    nt=ttemp->next;

    ptr->next=ttemp;
    ttemp->next=ntemp;

    t->next=temp;
    temp->next=nt;
}

int main(){
    int n,m;
    char i;
  cout<<"\nEnter data for first node :"<<endl;
  cin>>n;
  create_first(n);
  cout<<"\nFirst Node Created :"<<endl;
  while(1)
  {
    cout<<"\nDo you want to continue: ";
    cin>>i;
    if(i=='n' || i=='N')
    break;
    cout<<"\nEnter data for new node: "<<endl;
    cin>>n;
    add_node(n);
  }
  display();
   while(1)
    {   
        cout<<"\nDo you want to edit the linked list"<<endl;
        cin>>i;
        if(i=='n' || i=='N')
        break;
        cout<<"\nWhat you want to do?  \n1.calculate the sum of all data in the linked list.  \n2.add a node before the first node";
        cout<<"\n3.add a node before the last node. \n4.add a node after the given data. \n5.add the node before the given data.";
        cout<<"\n6.delete first node. \n7.delete the last node. \n8.delete a node after given data. \n9.delete a node before given data";
        cout<<"\n10.delete a node at given position. \n11.swap last and first node. \n12.swap last and 2last. \n13.swap first and second. \n14.swap nth and mth term.";
        cout<<"\n15.EXIT!!"<<endl;
        cout<<"\nEnter your choice:"<<endl;
        cin>>m;
        switch(m)
        {
            case 1:
            {
                sum();
                break;
            }
            case 2:
            {
                int x;
                cout<<"\nEnter the value you want to add:"<<endl;
                cin>>x;
                add_before_first(x);
                display();
                break;
            }
            case 3:
            {
                int x;
                cout<<"\nEnter the value you want to add:"<<endl;
                cin>>x;
                add_before_last(x);
                display();
                break;
            }
            case 4:
            {
                int data,x;
                cout<<"\nEnter the data after which you have to insert the value:"<<endl;
                cin>>data;
                cout<<"\nEnter the value you want to add:"<<endl;
                cin>>x;
                add_after_data(data,x);
                display();
                break;
            }
            case 5:
            {
                int data,x;
                cout<<"\nEnter the data before which you have to insert the value:"<<endl;
                cin>>data;
                cout<<"\nEnter the value you want to add:"<<endl;
                cin>>x;
                add_before_data(data,x);
                display();
                break;
            }
            case 6:
            {
                cout<<"\nYour first node is deleted!"<<endl;
                delete_first();
                display();
                break;
            }
            case 7:
            {
                cout<<"\nYour last node is deleted!"<<endl;
                delete_last();
                display();
                break;
            }
            case 8:
            {
                int x;
                cout<<"\nEnter the value after which you want to delete:"<<endl;
                cin>>x;
                delete_after_data(x);
                display();
                break;
            }
            case 9:
            {
                int x;
                cout<<"\nEnter the data before which you have to delete the value:"<<endl;
                cin>>x;
                delete_before_data(x);
                display();
                break;
            }
            case 10:
            {
                int x;
                cout<<"\nEnter the value you want to delete!"<<endl;
                cin>>x;
                delete_node(x);
                display();
                break;
            }
            case 11:
            {
                cout<<"\nYour first and last are swapped!"<<endl;
                swap_first_last();
                display();
                break;
            }
            case 12:
            {
                cout<<"\nYour last and second last node are swapped!"<<endl;
                swap_last_2last();
                display();
                break;
            }
            case 13:
            {
                cout<<"\nYour first and second are swapped!"<<endl;
                swap_first_second();
                display();
                break;
            }
            case 14:
            {
                int n,m;
                cout<<"\nEnter nth position:"<<endl;
                cin>>n;
                cout<<"\nEnter mth position:"<<endl;
                cin>>m;
                swap_nth_mth(n,m);
                display();
                break;
            }
            default :break;
        }
    }
}