#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int value;
    ListNode *next;
    ListNode() : value(0), next(nullptr) {}
    ListNode(int x) : value(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : value(x), next(next) {}
};

ListNode *oddEvenList(ListNode *head)
{
    if (head == NULL)
        return head;
    ListNode *odd = head;
    ListNode *even = head->next;

    ListNode *evenHead = even;
    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next; // 1->3
        odd = odd->next;        // 3
        even->next = odd->next; // 2->4
        even = even->next;      // 4
    }
    odd->next = evenHead; // 3->2
    return head;
}

int main()
{
    ListNode *head = NULL;
    ListNode *one = NULL;
    ListNode *two = NULL;
    ListNode *three = NULL;
    ListNode *four = NULL;

    one = new ListNode();
    two = new ListNode();
    three = new ListNode();
    four = new ListNode();

    one->value = 1;
    two->value = 2;
    three->value = 3;
    four->value = 4;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    head = oddEvenList(one);
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }

    return 0;
}
