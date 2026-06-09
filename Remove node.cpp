#include <iostream>
using namespace std;

struct Node {
    int data;
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

        if (head == NULL) {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }

    int key;
    cout << "Enter value to delete: ";
    cin >> key;
    if (head->data == key) {
        if (head == tail) {
            delete head;
            head = NULL;
        } else {
            tail->next = head->next;
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    else {
        Node *curr = head, *prev = NULL;

        do {
            prev = curr;
            curr = curr->next;
        } while (curr != head && curr->data != key);

        if (curr->data == key) {
            prev->next = curr->next;

            if (curr == tail)
                tail = prev;

            delete curr;
        }
    }
    if (head == NULL) {
        cout << "List is empty";
    } else {
        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
    }

    return 0;
}
