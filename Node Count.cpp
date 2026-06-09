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

    Node *head = NULL, *temp = NULL;

    for (int i = 0; i < n; i++) {
        Node* newNode = new Node();
        
        cout << "Enter data: ";
        cin >> newNode->data;
        
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    int count = 0;
    temp = head;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    cout << "Number of nodes = " << count << endl;

    return 0;
}
