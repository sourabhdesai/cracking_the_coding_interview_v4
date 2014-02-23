#include <iostream>
using namespace std;

/**
 *Problem:
Given a circular linked list, implement an algorithm which returns node at the beginning of the loop
NOTE: Im also gonna remove the loop from the list, even though it is not asked in the question
 */

struct Node {
  char value;
  Node* next;

  Node(char val) {
    value = val;
    next = NULL;
  }

  Node(char val, Node * nex) {
    value = val;
    next = nex;
  }

  ~Node() {
    if( next != NULL ) delete next;
    next = NULL;
  }

  void printList() {
    cout << value;
    if(next == NULL) cout << endl;
    else next->printList();
  }
};

Node * removeLoop( Node * head );

int main( int argc, char* argv[] ) {
    Node * node = new Node('H');
    node->next = new Node('e', new Node('l', new Node('l', new Node('o',node))));
    cout << removeLoop(node)->value << endl;
    node->printList();
    delete node;
    return 0;
}

// Implementing this iteratively to avoid stack allocation
Node * removeLoop( Node * head ) {
  if(head == NULL) return NULL;
  Node * node = head;
  while(node->next != NULL) {
    Node * temp = head;
    while(temp != node) {
      if(node->next == temp) {
        node->next = NULL;
        return temp;
      }
      temp = temp->next;
    }
    node = node->next;
  }
  return NULL;

}
