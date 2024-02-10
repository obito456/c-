#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int val, node* nextNode = NULL) {
        data = val;
        next = nextNode;
    }
};

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

node* insertbeforeval(node* &head, int k, int val) {
    if (head == NULL) {
        return NULL;
    }


    if (head->data == val) {
        return new node(val, head);
    }
    node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==val){
            node* x=new node(k,temp->next);
            temp->next=x;
            break;
        }
        temp=temp->next;
    }
    return head;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    head = insertbeforeval(head, 100, 2);
    display(head);

    return 0;
}
