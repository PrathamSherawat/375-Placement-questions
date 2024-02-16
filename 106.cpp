// Delete without Head node
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
void printList(Node* head)
{
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
 
void deleteNode(Node* node)
{
    Node* prev;
    if (node == NULL)
        return;
    else {
        while (node->next != NULL) {
            node->data = node->next->data;
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
    }
}

int main()
{
    Node* head = NULL;
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);
 
    cout << "Before deleting \n";
    printList(head);
    deleteNode(head);
 
    cout << "\nAfter deleting \n";
    printList(head);
    return 0;
}
 