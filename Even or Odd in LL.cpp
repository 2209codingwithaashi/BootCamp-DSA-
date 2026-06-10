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
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = NULL;

        if(head == NULL) {
            head = tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    Node* temp = head;
    while(temp != NULL) {
        if(temp->data % 2 == 0)
            cout << temp->data << " is Even" << endl;
        else
            cout << temp->data << " is Odd" << endl;
        temp = temp->next;
    }
    return 0;
}
