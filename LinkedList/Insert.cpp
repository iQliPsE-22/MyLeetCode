#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};
class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }
    // inserting at the beginning of linked list
    void insertAtBeginningOfLinkedList(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void print()
    {
        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << endl;
            current = current->next;
        }
    }
};

int main()
{
    LinkedList mylist;
    mylist.insertAtBeginningOfLinkedList(1);
    mylist.insertAtBeginningOfLinkedList(2);
    mylist.insertAtBeginningOfLinkedList(3);
    mylist.insertAtBeginningOfLinkedList(4);
    mylist.print();
    return 0;
}