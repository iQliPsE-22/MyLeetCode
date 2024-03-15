#include<iostream>
using namespace std;

class Node{
  public:
  int value;
  Node*next;
};
int main(){
    Node* head;
    Node*one = NULL;
    Node*two = NULL;
    Node*three  = NULL;
    Node*four = NULL;
    
    one = new Node();
    two = new Node();
    three = new Node();
    four = new Node();
    
    one->value = 1;
    two->value = 2;
    three->value = 3;
    four->value = 4;
    
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    
    head = one;
    
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;
    
    Node*zero = NULL;
    zero = new Node();
    zero->value = 0;
    zero->next = one;
    
    head = zero;
     while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;

    Node*five = NULL;
    five = new Node();
    five->value = 5;
    five->next = NULL;
    four->next = five;
    head = zero;
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
    cout<<endl;

    head = zero;
    Node*newNode;
    newNode = new Node;
    newNode->value = 4;
    
    Node *temp = head;
    
    for(int i=0; i < 4; i++) {
      if(temp->next != NULL) {
        temp = temp->next;
      }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    while(head != NULL){
        cout<<head->value<<" ";
        head = head->next;
    }
}
