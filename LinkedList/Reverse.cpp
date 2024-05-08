#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

Node *Reverse(Node *head)
{
    Node *prev = NULL;
    Node *current = head;
    Node *next = NULL;

    while (current != NULL)
    {
        next = current->next; // 2 3
        current->next = prev; // 1 2 3
        prev = current;       // 1 2 3
        current = next;       // 2 3
    }
    head = prev;
    return head;
}

int main()
{
    Node *head = NULL;
    Node *one = NULL;
    Node *two = NULL;
    Node *three = NULL;

    one = new Node();
    two = new Node();
    three = new Node();

    one->value = 1;
    two->value = 8;
    three->value = 9;

    one->next = two;
    two->next = three;
    three->next = NULL;

    head = one;
    while (head != NULL)
    {
        cout << head->value << "\t";
        head = head->next;
    }
    cout << endl;

    head = Reverse(one);
    while (head != NULL)
    {
        cout << head->value << "\t";
        head = head->next;
    }

    return 0;
}