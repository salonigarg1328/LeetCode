class Solution {
public:
    int longestMountain(vector<int>& arr) {
     int n=arr.size(), length=0;
     int i=1;
     for(i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
          int  left=i;
             int right=i;
            while(left>0 && arr[left]>arr[left-1]){
                left--;
            }
            while(right<n-1 && arr[right+1]<arr[right]){
                right++;
               
            }
            length=max(length,right-left+1);
        }
     }
        return length;
    }
    
};