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
    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        cin >> newNode->data;
        newNode->next = NULL;

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int pos, newValue;
    cin >> pos >> newValue;

    Node* temp = head;
    int index = 0;

    while (temp != NULL) {
        if (index == pos) {
            temp->data = newValue;
            break;
        }
        temp = temp->next;
        index++;
    }
    temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
