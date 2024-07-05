class Solution {
private:
    vector<int> v; 

public:
    Solution(vector<int>& w) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        v.push_back(w[0]);
        for( int i = 1 ; i < w.size() ; i++){
            v.push_back(w[i] + v.back());
        }

    }

     int pickIndex() {
        int random_no = rand() % v.back();
        int l = 0 ;
        int h = v.size() - 1;
        while( l < h ){
            int mid = l + ( h - l )/2;
            if( v[mid] > random_no) h = mid;
            else{
                l = mid + 1;
            }

        }
        return l;
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */