1class LRUCache {
2public:
3    list<pair<int,int>> dll;
4    unordered_map<int,list<pair<int,int>>::iterator> mp;
5    int cap;
6    LRUCache(int capacity) {
7        cap=capacity;
8    }
9    
10    int get(int key) {
11        if(!mp.count(key)) return -1;
12        dll.splice(dll.end(),dll,mp[key]);
13        return mp[key]->second;
14    }
15    
16    void put(int key, int value) {
17        if(mp.count(key)){
18            mp[key]->second=value;
19            dll.splice(dll.end(),dll,mp[key]);
20        }else {
21            if((int)dll.size()==cap){
22                mp.erase(dll.front().first);
23                dll.pop_front();
24            }
25            dll.push_back({key,value});
26            mp[key]=prev(dll.end());
27        }
28    }
29};
30
31/**
32 * Your LRUCache object will be instantiated and called as such:
33 * LRUCache* obj = new LRUCache(capacity);
34 * int param_1 = obj->get(key);
35 * obj->put(key,value);
36 */