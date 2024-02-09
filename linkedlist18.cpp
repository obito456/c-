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

void insertathead(node*& head, int val) {
    node* n = new node(val);

    if (head == NULL) {
        n->next = n;
        head = n;
        return;
    }

    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

void insertattail(int val, node*& head) {
    if (head == NULL) {
        insertathead(head, val);
        return;
    }

    node* n = new node(val);
    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

void display(node* head) {
    if (head == NULL) {
        cout << "Empty List" << endl;
        return;
    }

    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);  //NULL
    cout << endl;
}

int main() {
    node* head = NULL;

    insertattail(1, head);
    insertattail(2, head);
    insertattail(3, head);
    insertattail(4, head);

    cout << "Original List: ";
    display(head);

    insertathead(head, 5);

    cout << "List after inserting at head: ";
    display(head);

    return 0;
}
 
