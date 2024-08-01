class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c = 0;
        for (auto& i : details) {
            // Convert the relevant substring to an integer and check if it's >= 60
            int age = stoi(i.substr(11, 2));
            if (age > 60) {
                c++;
            }
        }
        return c;
    }
};
