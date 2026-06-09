#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node *head = NULL, *tail = NULL;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        cin >> newNode->data;

        newNode->next = NULL;
        newNode->prev = tail;

        if (head == NULL)
            head = newNode;
        else
            tail->next = newNode;

        tail = newNode;
    }

    // Reverse the doubly linked list
    Node *temp = NULL, *curr = head;

    while (curr != NULL) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if (temp != NULL)
        head = temp->prev;

    cout << "Reversed Doubly Linked List: ";

    curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }

    return 0;
}
