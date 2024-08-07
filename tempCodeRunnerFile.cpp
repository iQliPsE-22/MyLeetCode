#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
   int data;
   Node *next;
};

int main()
{
   Node *head = NULL;
   Node *second = NULL;
   Node *third = NULL;

   head = new Node();
   second = new Node();
   third = new Node();

   head->data = 1;
   head->next = second;
   second->data = 2;
   second->next = third;
   third->data = 3;
   third->next = NULL;

   Node *temp = head;
   while (temp != NULL)
   {
      cout << temp->data << " ";
      temp = temp->next;
   }

   cout << endl;

   Node *prev = NULL;
   Node *current = head;
   Node *next = NULL;

   while (current != NULL)
   {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
   }

   head = prev;

   while (head != NULL)
   {
      cout << head->data << " ";
      head = head->next;
   }

   Node *temp = current->next;  1 2 3
   current->data = temp->data;
   current->next = temp->next;



   return 0;
}