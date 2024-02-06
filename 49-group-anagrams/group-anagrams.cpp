class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams; // Mapping sorted string to list of anagrams
        vector<vector<string>> result;

        // Iterate through each string in the input vector
        for (const string& s : strs) {
            // Create a copy of the string and sort it
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());

            // Add the sorted string to the map and append the original string to its list
            anagrams[sortedStr].push_back(s);
        }

        // Copy the values from the map to the result vector
        for (auto& entry : anagrams) {
            result.push_back(entry.second);
        }

        return result;
        
    }
};