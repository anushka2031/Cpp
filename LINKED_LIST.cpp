#include<iostream>
#include<stdlib.h>
using namespace std;

//to create a new node
struct Node
{
  int data;
  Node *next;
};

// globally declared pointers for creation of linked list
Node *first,*temp,*ttemp;

// initializing the pointera by null
void init()
{
    first=temp=ttemp=NULL;
}

// for creation of the first node
void create_first(int x)
{
    first=(Node *)malloc(sizeof(Node)); 
    // node * is used for type casting the void * type memory produced dynamically by maaloc
    first->data=x;
    first->next=NULL;
}

//to add new nodees in the linked list
void Add_Nodes(int x)
{
    temp=first;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    ttemp=(Node *)malloc(sizeof(Node));
    ttemp->data=x;
    ttemp->next=NULL;
    temp->next=ttemp;

}

// for displaying the linked list
void display()
{
    temp=first;
    cout<<"The new linked list is"<<endl;
    while(temp!=NULL)
    {
        cout<<"\n"<<temp->data;
        temp=temp->next;
    }
}

//to calculate the sum of all data in the linked list
void sum()
{
    int sum=0;
    temp=first;
    while (temp!=NULL)
    {
        sum = sum + temp->data;
        temp=temp->next;
    }
    cout<<"\nsum of the data is "<<sum;
}

// to add a node before the first node
void Add_before_first(int val)
{
    temp=(Node *)malloc(sizeof(Node));
    temp->data=val;
    temp->next=first;
    first=temp;
}

// to add a node before the last node
Node *p;
void Add_before_last(int val)
{
    temp=first;
    while(temp->next!=NULL)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=(Node *)malloc(sizeof(Node));
    p->data=val;
    temp->next=p;
    p->next=temp;
}

// to add a node after the given data present in the linked list
void Add_after_dat(int data,int val)
{
    temp=first;
    while(temp->data!=data)
    {
        temp=temp->next;
    }
    ttemp=temp->next;
    p=(Node *)malloc(sizeof(Node));
    p->data=val;
    p->next=ttemp;
    temp->next=p;
}

// to add the node before the given data present in the linked list
void Add_before_data(int data,int val)
{
    ttemp=temp=first;
    while(temp->data!=data)
    {
        ttemp=temp;
        temp=temp->next;
    }
    {
        p=(Node *)malloc(sizeof(Node));
        p->data=val;
        p->next=temp;
        ttemp->next=p;
    }
}

// to delete first node
void Delete_first()
{
  temp=first;
  first=first->next;
  temp->next=NULL;
  free(temp);
}

// to delete the last node
void Delete_last()
{
   temp=first;
   while(temp->next!=NULL)
   {
     ttemp=temp;
     temp=temp->next;
   }
   ttemp->next=NULL;
   free(temp);
}

//pointer for deleting the node after given data
Node *q;

// to delete a node after given data
void delete_after_data(int val)
{
    temp=first;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
    p=temp->next;
    q=p->next;
    temp->next=q;
    p->next=NULL;
    free(p);
}

// to delete a node before given data
void delete_before(int val)
{
  p=ttemp=temp=first;
  while (temp->data!=val)
  {
    p=ttemp;
    ttemp=temp;
    temp=temp->next;
  }
  p->next=temp;
  ttemp->next=NULL;
  free(ttemp);
}

// to delete a node at given position
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
}

// to swap last and first node
void swap_first_last()
{
    temp=first;
    while(temp->next!=NULL)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=first->next;
    ttemp->next=first;
    first->next=NULL;
    temp->next=p;
    first=temp;
}

// to swap last and 2last
void swap_last_2last()
{
    temp=first;
    while(temp->next->next!=NULL)
    {
        ttemp=temp;
        temp=temp->next;
    }
    p=temp->next;
    ttemp->next=p;
    p->next=temp;
    temp->next=NULL;
}

// pointers for swapping
Node *ptr,*t,*ntemp,*nt;

// to swap nth and mth term
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

int main()
{
    int n,m;
    char i;
    cout<<"\nEnter the data for first node: "<<endl;
    cin>>n;
    create_first(n);
    cout<<"\nFirst node created:\n"<<endl;
    while(1)
    {
        cout<<"\nDo you want to continue: ";
        cin>>i;
        if(i=='n' || i=='N')
        break;
        cout<<"\nEnter data for new node: "<<endl;
        cin>>n;
        Add_Nodes(n);
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
        cout<<"\n10.delete a node at given position. \n11.swap last and first node. \n12.swap last and 2last. \n13.swap nth and mth term.";
        cout<<"\n14.EXIT!!"<<endl;
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
                Add_before_first(x);
                display();
                break;
            }
            case 3:
            {
                int x;
                cout<<"\nEnter the value you want to add:"<<endl;
                cin>>x;
                Add_before_last(x);
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
                Add_after_dat(data,x);
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
                Add_before_data(data,x);
                display();
                break;
            }
            case 6:
            {
                cout<<"\nYour first node is deleted!"<<endl;
                Delete_first();
                display();
                break;
            }
            case 7:
            {
                cout<<"\nYour last node is deleted!"<<endl;
                Delete_last();
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
                cout<<"\nEnter the data before which you have to insert the value:"<<endl;
                cin>>x;
                delete_before(x);
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