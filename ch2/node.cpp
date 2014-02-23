// My Implementation of a node, for use in LinkedList type problems

class Node {
  public:
    char value;
    Node* next;
    
    Node(char val) {
        this->value = val;
        this->next = NULL;
    }
    
    Node(char val, Node * next) {
        this->value = val;
        this->next = next;
    }
    
    Node(char * str) {
        if(str != NULL) {
            this->value = *str;
            this->next = ( *(str+1) == '\0' ? NULL : new Node(str+1) );
        } else {
            throw "String Input cannot be NULL";
        }
    }
    
    ~Node() {
        if( this->next != NULL ) delete this->next;
        this->next = NULL;
    }
    
    void printList() {
        cout << this->value;
        if(this->next == NULL)
          cout << endl;
        else
          this->next->printList();
    }
};
