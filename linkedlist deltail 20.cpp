#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val){
        data =val;
        next =NULL;
    }
};
void insertattail(node* &head, int val){
    node* n= new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void deletetail(node* &head){
	node* temp=head;
    if(head==NULL || head->next==NULL){
    	return;
    }    
    while(temp->next->next!=NULL){
    	temp=temp->next;
    }
    temp->next=NULL;
    delete temp->next;
}


void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main() {
    
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    deletetail(head);
    display(head);
  
    return 0;
}
