class MyHashMap {
private:
    static const int size = 1000; // Choose a suitable size for the array
    list<pair<int, int>> table[size];

    int hash(int key) {
        return key % size;
    }

public:
    MyHashMap() {}

    void put(int key, int value) {
        int index = hash(key);
        for (auto& kv : table[index]) {
            if (kv.first == key) {
                kv.second = value; // Update value if key already exists
                return;
            }
        }
        table[index].emplace_back(key, value); // Insert a new key-value pair
    }

    int get(int key) {
        int index = hash(key);
        for (const auto& kv : table[index]) {
            if (kv.first == key) {
                return kv.second; // Return value if key is found
            }
        }
        return -1; // Return -1 if key is not found
    }

    void remove(int key) {
        int index = hash(key);
        table[index].remove_if([key](const auto& kv) { return kv.first == key; });
        // Remove the key-value pair if the key exists
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */