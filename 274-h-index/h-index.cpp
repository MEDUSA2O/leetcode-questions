class Solution {
public:
    int hIndex(vector<int>& citations) {
        int c = 0;
        sort(citations.begin() , citations.end() , greater<int>());
        for(int i = 0 ; i < citations.size() ; i++){
            if(citations[i] > i){
                c++;
            }
        }
        return c;
        
    }
};