#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

int main() {
    int n;
    cin >> n;

    Node *head = NULL, *tail = NULL;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        Node *newNode = new Node;
        newNode->data = s;
        newNode->next = NULL;

        if(head == NULL)
            head = tail = newNode;
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    string prefix = head->data;

    Node *temp = head->next;

    while(temp != NULL) {
        int i = 0;

        while(i < prefix.length() &&
              i < temp->data.length() &&
              prefix[i] == temp->data[i]) {
            i++;
        }

        prefix = prefix.substr(0, i);

        temp = temp->next;
    }

    cout << prefix;

    return 0;
}
