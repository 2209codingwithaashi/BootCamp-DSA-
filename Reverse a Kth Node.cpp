#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void display(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* reverseFromK(Node* head, int k) {
    if (head == NULL || k <= 1) {
        Node *prev = NULL, *curr = head, *next;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    Node* curr = head;
    Node* prevK = NULL;

    for (int i = 1; i < k && curr != NULL; i++) {
        prevK = curr;
        curr = curr->next;
    }

    if (curr == NULL)
        return head;

    Node* kthNode = curr;
    Node* prev = NULL;
    Node* next = NULL;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    prevK->next = prev;

    return head;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node(x);

        if (head == NULL) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int k;
    cout << "Enter k: ";
    cin >> k;

    head = reverseFromK(head, k);

    cout << "Linked List after reversing from kth node:\n";
    display(head);

    return 0;
}
