class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>>ans;
        sort(products.begin() , products.end() );
        int l = 0 ; 
        int r = products.size() - 1;
        for( int i = 0 ; i < searchWord.size() ; i++){
            char c = searchWord[i];
            while( l <= r && (products[l].size() <= i || products[l][i] != c) ){
                l++;
            }
            while( l <= r && (products[r].size() <= i || products[r][i] != c)){
                r--;
            }
            vector<string>sugg;
            for(int j = l ; j < l + min(3 , r - l + 1) ; j++ ){
                sugg.push_back(products[j]);
            }
            ans.push_back(sugg);

        }
        return ans;

        
    }
};