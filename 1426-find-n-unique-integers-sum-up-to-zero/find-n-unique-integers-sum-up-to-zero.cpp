class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>arr;
        for(int i = 1 ; i < n ; i++){
            arr.push_back(i);
        }
        int sum = -((n-1)*n)/2 ; 
        arr.push_back(sum);
        return arr;

    }
};