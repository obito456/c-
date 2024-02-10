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

node* insertpos(node* &head, int val, int k) {
    if (head == NULL) {
        if (k == 1) {
            return new node(val);
        } else {
            return head;
        }
    }
    if (k == 1) {
        return new node(val, head);
    }
    int count = 0;
    node* temp = head;
    while (temp != NULL) {
        count++;
        if (count == (k - 1)) {
            node* x = new node(val, temp->next);
            temp->next = x;
            break;
        }
        temp = temp->next;
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
    head = insertpos(head, 100, 3);
    display(head);

    return 0;
}
