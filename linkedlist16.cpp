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

void insertattail(int val, node*& head) {
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

void intersect(node* &head1, node*& head2, int pos) {
    node* temp1 = head1;
    pos--;
    while (pos--) {
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while (temp2->next != NULL) {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

node* merge(node* &head1, node*& head2) {
    node* p1 = head1;
    node* p2 = head2;
    node* dummynode = new node(-1);
    node* p3 = dummynode;

    while (p1 != NULL && p2 != NULL) {
        if (p1->data < p2->data) {
            p3->next = p1;
            p1 = p1->next;
        } else {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }

    while (p1 != NULL) {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }

    while (p2 != NULL) {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummynode->next;
}

int main() {
    node* head1 = NULL;
    node* head2 = NULL;

    int arr1[] = {1, 4, 5, 7};
    int arr2[] = {2, 3, 6};
    for (int i = 0; i < 4; i++) {
        insertattail(arr1[i], head1);
    }
    for (int i = 0; i < 3; i++) {
        insertattail(arr2[i], head2);
    }
    cout << "List 1: ";
    display(head1);
    cout << "List 2: ";
    display(head2);
    node* newhead = merge(head1, head2);
    cout << "Merged List: ";
    display(newhead);

    return 0;
}
