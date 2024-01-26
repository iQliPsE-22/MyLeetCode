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
    void insertAtbegin(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }
    void deleteFromBegin()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
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
    mylist.insertAtbegin(10);
    mylist.insertAtbegin(9);
    mylist.insertAtbegin(8);
    mylist.deleteFromBegin();
    mylist.print();
    return 0;
}