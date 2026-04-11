class LRUCache {
public:
    list<pair<int,int>> dll;
    unordered_map<int,list<pair<int,int>>::iterator> mp;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        if(!mp.count(key)) return -1;
        dll.splice(dll.end(),dll,mp[key]);
        return mp[key]->second;
    }
    
    void put(int key, int value) {
        if(mp.count(key)){
            mp[key]->second=value;
            dll.splice(dll.end(),dll,mp[key]);
        }else {
            if((int)dll.size()==cap){
                mp.erase(dll.front().first);
                dll.pop_front();
            }
            dll.push_back({key,value});
            mp[key]=prev(dll.end());
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */