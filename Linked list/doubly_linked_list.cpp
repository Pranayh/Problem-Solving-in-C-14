#include<bits/stdc++.h>
using namespace std;

class node 
{
    public:

    int data;
    node* pre;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
        pre=NULL;
    }
};



void insert_head(node* &head,int val)
{
    node* n=new node(val);

    n->next=head;

    if(head!=NULL)
    {
        head->pre=n;
    }

    head=n;
}

void doublyinsert_ENd(node* &head,int val)
{
        if(head==NULL)
        {
            insert_head(head,val);
        }

        node* n=new node(val);

        node* temp=head;

        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
        n->pre=temp;
}

void delete_ele(node* &head,int pos)
{
    if(head==NULL)
    {
        return;
    }
    if(pos==1)
    {
        node* temp=head;
        head=head->next;
        head->pre=NULL;
        delete temp;
    }

    node* temp=head;
    int count=0;

    while(temp!=NULL && count!= pos )
    {
        temp=temp->next;

        count++;
    }

    temp->pre->next=temp->next;
    
    
    if(temp->next!=NULL)
    {
        temp->next->pre=temp->pre;
    }

    delete temp;
}

int lenghhh(node* &head)
{
    int l=0;
    node* temp=head;

    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node* kappend(node* &head,int k)
{
    node* newhead;
    node* newtail;

    node*temp=head;
    int count=1;

    int le=lenghhh(head);


    k=k%le;

    while(temp->next!=NULL)
    {
            if(count==le-k)
            {
                newtail=temp;
            }
            if(count=le-k+1)
            {
                newhead=temp;
            }

            temp=temp->next;
            count++;
    }

    newtail->next=NULL;
    
    temp->next=head;
    

    return newhead;


}


void play(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        
        temp=temp->next;
        cout<<temp->data<<" ";
    }
cout<<"\n";


}



int main()
{
    node* head=NULL;
    doublyinsert_ENd(head,1);
    doublyinsert_ENd(head,2);
    doublyinsert_ENd(head,3);
    doublyinsert_ENd(head,4);
    doublyinsert_ENd(head,5);
    doublyinsert_ENd(head,6);
    
   

    node* newhead=kappend(head,3);

    play(newhead);
    
    return 0;

}