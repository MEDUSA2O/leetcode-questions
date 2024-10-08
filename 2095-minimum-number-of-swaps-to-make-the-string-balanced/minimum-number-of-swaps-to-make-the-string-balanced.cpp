class Solution {
public:
    int minSwaps(string s) {
        if(s.size() == 0)return 0;
        stack<char>st;
        int ub = 0;
        for(auto i : s){
            if(i == '['){
                st.push('[');
            }
            else{
                if(st.empty()){
                    ub++;
                }
                else{
                    st.pop();
                }
            }
        }
        return (ub + 1)/2;
        
    }
};