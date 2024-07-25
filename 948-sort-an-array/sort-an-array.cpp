#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& arr, int l, int m, int r) {
        int n1 = m - l + 1;
        int n2 = r - m;

        // Create temporary arrays
        vector<int> la(n1);
        vector<int> ra(n2);

        // Copy data to temporary arrays la[] and ra[]
        for (int i = 0; i < n1; i++) {
            la[i] = arr[l + i];
        }
        for (int j = 0; j < n2; j++) {
            ra[j] = arr[m + 1 + j];
        }

        // Merge the temporary arrays back into arr[l..r]
        int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (la[i] <= ra[j]) {
                arr[k] = la[i];
                i++;
            } else {
                arr[k] = ra[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of la[], if there are any
        while (i < n1) {
            arr[k] = la[i];
            i++;
            k++;
        }

        // Copy the remaining elements of ra[], if there are any
        while (j < n2) {
            arr[k] = ra[j];
            j++;
            k++;
        }
    }

    void mergesort(vector<int>& arr, int l, int r) {
        if (l >= r)
            return;
        int mid = l + (r - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size() - 1);
        return nums;
    }
};
