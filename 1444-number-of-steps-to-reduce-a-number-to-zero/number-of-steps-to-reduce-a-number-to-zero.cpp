class Solution {
public:
    int numberOfSteps(int num) {
        int key = num;
        int count = 0 ;
        while (key != 0) {
            if (key % 2 == 0) {
                key = key / 2;
                count++;
            } else {
                key = key - 1;
                count++;
            }
        }
        return count ; 
    }
};