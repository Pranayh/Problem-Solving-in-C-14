#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
int data;
node *next;

node(int val)     //Constructer
{
    data=val;
    next=NULL;
}

};

void insert_at_heap(node *&heap,int val)           // insert function at head
{

    node *n=new node(val);
    n->next=heap;
    heap=n;

}

void insert_at_end(node *&heap,int val)      // insert at end
{
    node *n= new node(val);

    if(heap==NULL)
    {
        heap=n;
        return;
    }

    node *temp=heap;
     
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}



void diplay(node *heap)
{
    node *temp=heap;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    
}




bool linear_search(node *heap,int key)      // Linear Search
{
    node *temp=heap;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

node* reverse(node* &heap)                   // Reverse the List
{
    node* pre=NULL;
    node* curr=heap;
    node* nextp;
    
    while(curr!=NULL)
    {
        nextp=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nextp;
        
    }

    return pre;
    

}




node* reversek(node* &heap,int k)           // Reverse  K nodes from the List
{
    node* pre=NULL;
    node* curr=heap;
    node* nextp;
    int count=0;

    while(curr != NULL && count < k)
    {
        nextp=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nextp;
        count++;
    }

    if(nextp!=NULL)
    {
        heap->next=reversek(nextp,k);
    }
    return pre;
}




void deletion(node* &heap,int val)                 // Delete any Node from the list
{
    if(heap==NULL)
    {
        return;
    }
    if(heap->next==NULL)
    {
        node* x=heap;
        heap=heap->next;
        delete x;

    }
    
    node* temp=heap;

    while(temp->next->data != val)
    {
        temp=temp->next;
    }
    node *dot=temp->next;
    temp->next=temp->next->next;
    delete dot;

}









void makecycle(node* &heap,int pos)      //cycle making
{
    node* temp= heap;
    node* startpt;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startpt=temp;
        }
        temp=temp->next;
        count++;
    }

    temp->next = startpt;

}


void removecycle(node* &heap)     // remove cycle in the list
{
    node* slow=heap;
    node* fast=heap;

    do
    {
        slow=slow->next;
        fast=fast->next->next;
    } while (slow!=fast);

    fast=heap;

    while(fast->next!=slow->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
    
}

bool detectcycle(node* &heap)       // Flowed cycle detection
{
    node* slow=heap;
    node* fast=heap;

    while(fast!=NULL && fast->next!= NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    node *heap=NULL;

    insert_at_end(heap,2);
    insert_at_end(heap,4);
    insert_at_end(heap,6);
    insert_at_end(heap,8);
    insert_at_end(heap,10);
    insert_at_end(heap,12);
    insert_at_end(heap,14);

    makecycle(heap,3);

    removecycle(heap);
    cout<<detectcycle(heap);
    
    return 0;
}

