class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
      string w1;
      string w2;
      for(string i : word1){
          w1 += i;
      }  
      for(string j : word2){
          w2 += j;
      }
      return w1 == w2;
        
    }
};