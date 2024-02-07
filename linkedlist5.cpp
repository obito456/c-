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
    cout << endl;
}

bool search(node* head, int key) {
    node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteathead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head, int val) {
    // Check if the node to be deleted is the head
    if (head != NULL && head->data == val) {
        node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }

    node* temp = head;
    while (temp->next != NULL && temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next == NULL) {
        // Node with the given value not found
        return;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

int main() {
    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    deleteathead(head);
    display(head);

    return 0;
}
 
