class Solution {
public:
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int d = n % 10;
            n = n / 10;
            totalSum += d * d;
        }
        return totalSum;
    }

public:
    bool isHappy(int n) {
        unordered_set<int>seen;
        while(seen.find(n) == seen.end() && n != 1){
            seen.insert(n);
            n = getNext(n);
        }
        return n == 1;
    }
};