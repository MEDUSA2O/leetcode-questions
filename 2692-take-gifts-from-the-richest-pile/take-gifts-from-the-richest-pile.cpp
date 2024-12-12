#include <vector>
#include <cmath>
#include <algorithm> // For max
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        for (int i = 0; i < k; i++) {
            int maxi = 0, index = 0;
            for (int j = 0; j < gifts.size(); j++) {
                if (gifts[j] > maxi) {
                    maxi = gifts[j];
                    index = j;
                }
            }
            gifts[index] = sqrt(maxi);
        }
        
        long long sum = 0;
        for (int gift : gifts) {
            sum += gift;
        }
        
        return sum;
    }
};
