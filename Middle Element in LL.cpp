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
        if(head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node *slow = head;
    Node *fast = head;
    while(fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle Element = " << slow->data;
    return 0;
}
