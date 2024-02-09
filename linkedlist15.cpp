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

int length(node* head) {
    int len = 0;
    node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

int intersection(node* &head1, node* &head2) {
    int len1 = length(head1);
    int len2 = length(head2);

    int d = 0;
    node* ptr1;
    node* ptr2;
    if (len1 > len2) {
        d = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    } else {
        d = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d) {
        ptr1 = ptr1->next;
        if (ptr1 == NULL) {
            return -1;
        }
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1 == ptr2) {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

int main() {
    node* head1 = NULL;
    node* head2 = NULL;

    insertattail(1, head1);
    insertattail(2, head1);
    insertattail(3, head1);
    insertattail(4, head1);
    insertattail(5, head1);
    insertattail(6, head1);
    insertattail(9, head2);
    insertattail(10, head2);
    intersect(head1, head2, 3);
    display(head1);
    display(head2);
    cout << "Intersection Node Data: " << intersection(head1, head2) << endl;

    return 0;
}
