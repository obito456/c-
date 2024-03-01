#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertathead(node* &head, int val) {
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertattail(node* &head, int val) {
    node* n = new node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL"<<endl;
}

node* reversek(node* &head, int k){
    node* prevptr = NULL;
    node* currrptr = head;
    node* nextptr;
    int count=0;
    while(currrptr!=NULL && count<k){
        nextptr=currrptr->next;
        currrptr->next=prevptr;
        prevptr=currrptr;
        currrptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next=reversek(nextptr,k);
    }
    return prevptr;
}
int main() {
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);

    cout << "Original Linked List: ";
    display(head);
    int k=2;

    node* newhead = reversek(head,k);

    cout << "Reversed Linked List: ";
    display(newhead);

    return 0;
}
