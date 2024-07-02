class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0 ; 
        int j = 0 ;
        int k = 0;
        int totalSize = nums1.size() + nums2.size();
        vector<int> com(totalSize); 
        while( i < nums1.size()  && j < nums2.size()){
            if(nums1[i] > nums2[j]){
                com[k++] = nums2[j++];
            }
            else{
                com[k++] = nums1[i++];
            }
        }
        while( i < nums1.size()){
            com[k++] = nums1[i++];
        }
        while( j < nums2.size()){
            com[k++] = nums2[j++];
        }
       if (com.size() % 2 == 0) {
            return (com[com.size() / 2 - 1] + com[com.size() / 2]) / 2.0;
        } else {
            return com[com.size() / 2];
        }

        
    }
};