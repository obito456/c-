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

node* deletepos(node* &head, int k){
    if(head == NULL)
        return head;

    if(k == 1){
        node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    node* temp = head;
    node* prev = NULL;
    int count = 0;

    while(temp != NULL){
        count++;
        if(count == k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
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
    deletepos(head,3);
    display(head);
  
    return 0;
}
