struct Node {
    int key;
    int val;
    Node* next;
};

class MyHashMap {
private:
    vector<Node*> buckets;
    static const int size = 10007;

public:
    MyHashMap() {
        buckets.assign(size, nullptr);
    }
    
    void put(int key, int value) {
        int index = key%size;
        
        Node** curr = &buckets[index];

        while(*curr != nullptr) {

            if((*curr)->key == key) {
                (*curr)->val = value;
                return;
            }

            curr = &((*curr)->next);
        }

        *curr = new Node{key, value, nullptr};
    }
    
    int get(int key) {
        int index = key%size;

        Node* curr = buckets[index];

        while(curr != nullptr) {
            
            if(curr->key == key) 
                return curr->val;

            curr = curr->next;
        }

        return -1;
    }
    
    void remove(int key) {
        int index = key%size;

        Node** curr = &buckets[index];

        while(*curr != nullptr) {
            
            if((*curr)->key == key) {
                Node* temp = *curr;
                *curr = (*curr)->next;
                delete temp;
                return;
            }

            curr = &((*curr)->next);
        }

        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */