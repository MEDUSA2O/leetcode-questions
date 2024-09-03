class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;
        if(n == 2){
            return min(height[0],height[1]);
        }
        int v = 0;
        int a = 0;
        while(l < r){
             a = min(height[l] , height[r]) * (r - l);
            v = max(v, a);
            if(height[l] <= height[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return v;   
        
    }
};