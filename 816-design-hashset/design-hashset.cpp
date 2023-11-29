class MyHashSet {
private:
    const int size = 1000;
    vector<list<int>> buckets;

    int _hash(int key) {
        return key % size;
    }

public:
    MyHashSet() : buckets(size) {}

    void add(int key) {
        int hash_key = _hash(key);
        if (buckets[hash_key].empty() || find(buckets[hash_key].begin(), buckets[hash_key].end(), key) == buckets[hash_key].end()) {
            buckets[hash_key].push_back(key);
        }
    }

    bool contains(int key) {
        int hash_key = _hash(key);
        return !buckets[hash_key].empty() && find(buckets[hash_key].begin(), buckets[hash_key].end(), key) != buckets[hash_key].end();
    }

    void remove(int key) {
        int hash_key = _hash(key);
        auto it = find(buckets[hash_key].begin(), buckets[hash_key].end(), key);
        if (!buckets[hash_key].empty() && it != buckets[hash_key].end()) {
            buckets[hash_key].erase(it);
        }
    }
};