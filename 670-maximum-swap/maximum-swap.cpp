class Solution {
public:
    int maximumSwap(int num) {
        string a = to_string(num);
        int b = num;
        int n = a.size();
        int maxi = num;
        for(int i =0 ;  i < n ; i++){
            for(int j = i + 1 ; j < n ; j++){
                swap(a[i] , a[j]);
                maxi = max(maxi , stoi(a));
                swap(a[i] , a[j]);

                
            }
        }
        return maxi;

        
    }
};