struct Node {
    int val;
    Node* next;
};

class MyHashSet {
private:
    vector<Node*> buckets;
    static const int size = 10007;

public:
    MyHashSet() {
        buckets.assign(size, nullptr);
    }
    
    void add(int key) {
        int index = key % size;
        
        Node** curr = &buckets[index];

        while(*curr != nullptr) {
            
            if((*curr)->val == key) 
                return;
            
            curr = &((*curr)->next);
        }

        *curr = new Node{key, nullptr};
    }
    
    void remove(int key) {
        int index = key % size;

        Node** curr = &buckets[index];

        while(*curr != nullptr) {
            
            if((*curr)->val == key) {
                Node* temp = *curr;
                *curr = (*curr)->next;
                delete temp;
                return;
            }

            curr = &((*curr)->next);
        }
    }
    
    bool contains(int key) {
        int index = key % size;

        Node* curr = buckets[index];

        while(curr != nullptr) {
            
            if(curr->val == key) 
                return true;
            
            curr = curr->next;
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */