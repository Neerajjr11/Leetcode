class LRUCache {
public:
    class node{
        public:
            int key;
            int val;
            node* next;
            node* prev;
            node(int k, int v){
                key = k;
                val = v;
            }
    };
    // initialize an empty head and tail
    node* head = new node(0, 0);
    node* tail = new node(0, 0);
    int cap;
    unordered_map<int, node*>mp;
    LRUCache(int capacity) {
        cap = capacity;
        // initialize the connection between the head and tail of DLL
        head->next = tail;
        tail->prev = head;
    }
    void addnode(node* newnode){
        node* temp = head->next;
        newnode->next = temp;
        temp->prev = newnode;
        newnode->prev = head;
        head->next = newnode;
    }
    void deletenode(node* delnode){
        node* delnext = delnode->next;
        node* delprev = delnode->prev;
        delprev->next = delnext;
        delnext->prev = delprev;
    }
    int get(int key) {
        if(mp.find(key) != mp.end()){
            node* addrnode = mp[key];
            int value = addrnode->val;
            mp.erase(key);
            // if there exists a node in the DLL then we need to change it to MRU
            deletenode(addrnode);
            addnode(addrnode);
            mp[key] = head->next;
            return value;
        }
        return -1;
    }
    
    void put(int key, int value) {
        // if the key we are inserting already exists
        if(mp.find(key) != mp.end()){
            node* existingnode = mp[key];
            mp.erase(key);
            deletenode(existingnode);
        }
        if(mp.size() == cap){
            // if the size is same as capacity then to insert the new key we remove the LRU key
            // which is present before the tail in the DLL
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key, value));
        mp[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */