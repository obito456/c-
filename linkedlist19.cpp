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
        n->prev = n;
        head = n;
        return;
    }

    node* tail = head->prev;  // Get the tail of the list
    n->next = head;
    n->prev = tail;
    head->prev = n;
    tail->next = n;
    head = n;
}

void insertattail(int val, node*& head) {
    if (head == NULL) {
        insertathead(head, val);
        return;
    }

    node* n = new node(val);
    node* tail = head->prev;  // Get the tail of the list
    n->next = head;
    n->prev = tail;
    tail->next = n;
    head->prev = n;
}

void deleteathead(node*& head) {
    if (head == NULL) {
        return;
    }

    node* tail = head->prev;
    if (head == tail) {  // Only one node in the list
        delete head;
        head = NULL;
    } else {
        node* todelete = head;
        tail->next = head->next;
        head->next->prev = tail;
        head = head->next;
        delete todelete;
    }
}

void deletion(node*& head, int pos) {
    if (head == NULL || pos <= 0) {
        return;
    }

    if (pos == 1) {
        deleteathead(head);
        return;
    }

    node* temp = head;
    for (int i = 1; i < pos - 1; ++i) {
        temp = temp->next;
        if (temp == head) {
            return;  // Position exceeds the size of the list
        }
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete todelete;
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
    } while (temp != head);
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

    deleteathead(head);
    
    cout << "List after deleting at head: ";
    display(head);

    deletion(head, 2);

    cout << "List after deleting at position 2: ";
    display(head);

    return 0;
}
