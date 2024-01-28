class Solution {
public:
    int mySqrt(int x) {
        int start = 1;
        int last = x;
        while(start <= last){
            int mid = start + (last - start)/2;
            if(mid == x/mid) return mid;
            else if(mid > x/mid) {
                last = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        return last;
        
    }
};