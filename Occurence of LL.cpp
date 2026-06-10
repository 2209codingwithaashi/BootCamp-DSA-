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
    Node* head = NULL;
    Node* tail = NULL;
    cout << "Enter node values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int key;
    cout << "Enter element to find occurrence: ";
    cin >> key;
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            count++;
        }
        temp = temp->next;
    }
    cout << "Occurrence of " << key << " = " << count << endl;
    return 0;
}
