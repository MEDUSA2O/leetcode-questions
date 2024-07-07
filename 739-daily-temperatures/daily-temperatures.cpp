auto init = []() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);
    std::cout.tie(0);
    return 'c';
}();
class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> s;
        int n = temperatures.size();
        for (int i = 0; i < n; i++) {
            int t = temperatures[i];
            while (!s.empty() && t > s.top().first) {
                auto [temp, index] = s.top();
                s.pop();
                ans[index] = i - index;
            }
            s.push({t, i});
        }
        return ans;
    }
};