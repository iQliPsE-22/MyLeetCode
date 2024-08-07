#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << "\t";
        node = node->next;
    }
}

Node *reverse(Node *node)
{
    Node *prev = NULL;
    Node *curr = node;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
};

int main()
{
    Node *head = new Node();
    Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();

    one->next = two;
    two->next = three;
    three->next = NULL;

    one->data = 1;
    two->data = 2;
    three->data = 3;

    head = one;
    printList(head);

    cout << endl;

    Node *reverseHead = reverse(head);
    printList(reverseHead);

    Node *current = reverseHead;
    int toAdd = 6;
    int carry = toAdd;
    while (current != NULL)
    {
        int sum = current->data + toAdd;
        current->data = sum % 10;
        carry = sum / 10;
        if (carry == 0)
            break;

        if (current->next != NULL && carry > 0)
        {
            Node *newNode = new Node();
            newNode->data = carry;
            newNode->next = NULL;
            current->next = newNode;
            carry = 0;
        }
        current = current->next;
    }
    head = reverse(current);
    cout << endl;
    printList(head);

    return 0;
}