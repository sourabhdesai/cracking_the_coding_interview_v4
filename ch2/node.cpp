// My Implementation of a node, for use in LinkedList type problems

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
    
    Node(char * str) {
        if(str != NULL) {
            value = *str;
            next = ( *(str+1) == '\0' ? NULL : new Node(str+1) );
        } else {
            throw "String Input cannot be NULL";
        }
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
