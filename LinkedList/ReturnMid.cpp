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
    void insertAtBegin(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void display()
    {
        Node *currentNode;
        currentNode = head;
        while (currentNode != nullptr)
        {
            cout << currentNode->data << endl;
            currentNode = currentNode->next;
        }
    }
};

int main()
{
    LinkedList mylist;
    mylist.insertAtBegin(10);
    mylist.insertAtBegin(8);
    mylist.insertAtBegin(0);
    mylist.insertAtBegin(7);
    mylist.insertAtBegin(6);
    mylist.insertAtBegin(5);
    mylist.insertAtBegin(4);
    mylist.insertAtBegin(3);
    mylist.insertAtBegin(10);
    mylist.display();
    return 0;
}