#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertathead(node*& head, int val) {
    node* n = new node(val);

    if (head == NULL) {
        n->next = n;
        head = n;
        return;
    }

    node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    n->next = head;
    tail->next = n;
    head = n;
}

void insertattail(node*& head, int val) {
    if (head == NULL) {
        insertathead(head, val);
        return;
    }

    node* n = new node(val);
    node* tail = head;
    while (tail->next != head) {
        tail = tail->next;
    }

    tail->next = n;
    n->next = head;
}

void display(node* head) {
    if (head == NULL) {
        cout << "Empty List" << endl;
        return;
    }

    node* temp = head;
    do {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL" << endl;
}

void evenafterodd(node*& head) {
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return;
    }

    node* odd = head;
    node* even = head->next;
    node* evenstart = even;

    while (even->next != head && even->next->next != head) {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenstart;

    if (even->next == head) {
        even->next = NULL;
    }
}

int main() {
    node* head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        insertattail(head, arr[i]);
    }

    cout << "Original List: ";
    display(head);

    evenafterodd(head);

    cout << "List after rearranging even after odd: ";
    display(head);

    return 0;
}
