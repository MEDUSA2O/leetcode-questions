class Solution {
public:
    bool isPossible(vector<int> &stalls, int m, int mid, int n) {
        int cowCount = 1;
        int lastPos = stalls[0];
        
        for (int i = 1; i < n; i++) {  
            if (stalls[i] - lastPos >= mid) {
                cowCount++;
                if (cowCount == m) {
                    return true;
                }
                lastPos = stalls[i];
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int n = position.size();
        int s = 1; 
        int e = position[n - 1] - position[0];  
        int ans = -1;
        int mid = s + (e - s) / 2;
        
        while (s <= e) {
            if (isPossible(position, m, mid, n)) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};
