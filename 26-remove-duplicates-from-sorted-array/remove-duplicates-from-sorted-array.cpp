
// #include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int k = 0;
        for(int i = 0 ; i < nums.size() ;i++){
            if( i == nums.size() -1 || nums[i]!=nums[i+1]){
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
