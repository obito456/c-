#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertattail(node*& head, int val) {
    if (head == NULL) {
        head = new node(val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int length(node* head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

node* kappend(node* &head, int k) {
    node* newhead;
    node* newtail;
    node* tail = head;

    int len = length(head);
    k = k % len;
    int count = 1;
    
    while (tail->next != NULL) {
        if (count == len - k) {
            newtail = tail;
        }
        if (count == len - k + 1) {
            newhead = tail;
         
        }
        tail = tail->next;
        count++;
    }

    newtail->next=NULL;
    tail->next=head;

    return newhead;
}

int main() {
    node* head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        insertattail(head, arr[i]);
    }
    
    cout << "Original Linked List: ";
    display(head);
    
    int k = 3;
    node* newhead = kappend(head, k);
    
    cout << "Modified Linked List: ";
    display(newhead);

    return 0;
}
