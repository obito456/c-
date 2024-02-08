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

void insert(int val, node*& head) {
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
    cout << "NULL" << endl;
}

void makecycle(node*& head, int pos) {
    node* temp = head;
    node* startnode;

    int count = 1;
    while (temp->next != NULL) {
        if (count == pos) {
            startnode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool detectcycle(node* head) {
    node* slow = head;
    node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow) {
            return true;
        }
    }
    return false;
}

int main() {
    node* head = NULL;

    insert(1, head);
    insert(2, head);
    insert(3, head);
    insert(4, head);
    insert(5, head);
    insert(6, head);

    makecycle(head, 3);

    // Uncomment the line below to display the linked list (commented for clarity)
    display(head);

    cout <<detectcycle(head)<< endl;

    return 0;
}
