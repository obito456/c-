#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insert(node* &head, int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return;

}

void delval(node* &head, int val) {
    if (head == NULL) {
        return;
    }
    if (head->data == val) {
        node* temp = head;
        head = head->next;
        delete temp;
        return;  // Added semicolon here
    }
    node* temp = head;
    node* prev = NULL;
    while (temp != NULL) {
        if (temp->data == val) {
            prev->next = temp->next;
            delete(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}



int main(){

    node* head=NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    display(head);
    delval(head,3);
    display(head);
    return 0;
}
