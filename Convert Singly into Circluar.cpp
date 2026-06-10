#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    int n;
    cin >> n;
    Node *head = NULL, *tail = NULL;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;
        if(head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    if(head != NULL) {
        tail->next = head;
    }
    cout << "Circular Linked List: ";
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != head);
    return 0;
}
