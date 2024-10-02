#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *createLinkedList()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    // head->next->next->next->next->next = new ListNode(6);
    return head;
}

void printLinkedList(ListNode *head)
{
    ListNode *current = head;
    while (current != NULL)
    {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    ListNode *head = createLinkedList();
    stack<ListNode *> s;
    ListNode *current = head;
    while (current != NULL)
    {
        s.push(current);
        current = current->next;
    }

    ListNode *next = nullptr;
    current = head;
    int sizeOfStack = s.size();
    while (s.size() > sizeOfStack / 2)
    {
        next = current->next;
        current->next = s.top();
        s.pop();
        current->next->next = next;
        current = next;
    }
    current->next = nullptr;
    printLinkedList(head);
}