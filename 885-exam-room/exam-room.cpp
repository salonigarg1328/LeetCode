class ExamRoom {
public:
    int n;
    set<int> seats;
    ExamRoom(int n) {
        this->n = n;
    }
    
    int seat() {
        if(seats.empty()){
            seats.insert(0);
            return 0;
        }
        int dis=*seats.begin();
        int seatPos=0;
        int prev=-1;
        for(int s:seats){
            if(prev != -1){
                int d=(s-prev)/2;
                if(d>dis ){
                    dis=d;
                    seatPos=prev+d;
                }
            }
            prev=s;
        }
        if(n-1- *seats.rbegin() > dis){
            seatPos = n-1;
        }
        seats.insert(seatPos);
            return seatPos;
        
    }
    
    void leave(int p) {
        seats.erase(p);
    }
};

/**
 * Your ExamRoom object will be instantiated and called as such:
 * ExamRoom* obj = new ExamRoom(n);
 * int param_1 = obj->seat();
 * obj->leave(p);
 */