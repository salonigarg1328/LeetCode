class MyCalendarTwo {
public:
    vector<pair<int,int>> books;
    vector<pair<int,int>> overlaps;
    MyCalendarTwo() {
        
    }
    
    bool book(int startTime, int endTime) {
        for(auto &p:overlaps){
            if(startTime < p.second && endTime > p.first ){
                return false;
            }
        }
        for(auto &p:books){
            if(startTime < p.second && endTime > p.first){
                overlaps.push_back({max(startTime,p.first),min(endTime,p.second)});
            }
        }
        books.push_back({startTime,endTime});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(startTime,endTime);
 */