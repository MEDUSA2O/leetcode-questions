#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size();
        vector<int> combo(size1 + size2);
        int i = 0, j = 0, k = 0;
        
        // Merge the two arrays
        while (i < size1 && j < size2) {
            if (nums1[i] < nums2[j]) {
                combo[k++] = nums1[i++];
            } else {
                combo[k++] = nums2[j++];
            }
        }
        
        // Add remaining elements of nums1, if any
        while (i < size1) {
            combo[k++] = nums1[i++];
        }
        
        // Add remaining elements of nums2, if any
        while (j < size2) {
            combo[k++] = nums2[j++];
        }
        
        // Calculate median
        int totalSize = size1 + size2;
        if (totalSize % 2 == 0) {
            return (combo[totalSize/2 - 1] + combo[totalSize/2]) / 2.0;
        } else {
            return combo[totalSize/2];
        }
    }
};
