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
void insertathead(node* &head, int val){
    node* n= new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    

    head=n;
}

void insertattail(int val, node*& head) {

    if(head==NULL){
        insertathead(head,val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev=temp;
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

    insertattail(1, head);
    insertattail(2, head);
    insertattail(3, head);
    insertattail(4, head);
    insertattail(5, head);
    insertattail(6, head);

    display(head);
    insertathead(head,5);
    display(head);

    return 0;
}
