class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        int result = 0;
        mp[0] = 1;
        for (auto i : nums) {
            sum += i;
            int remainder = sum % k;
            if (remainder < 0) {
                remainder += k; // Adjust negative remainder to be positive
            }
            result += mp[remainder];
            mp[remainder]++;
        }
        return result;
    }
};