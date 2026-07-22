class Solution {
public:
    void merge(vector<int> &nums, int low, int mid, int high, int &pair) {
        int k = mid;

        // 1. Count reverse pairs starting from the back
        for (int l = high; l >= mid + 1; l--) {
            while (k >= low && (long long)nums[k] > 2LL * nums[l]) {
                k--;
            }
            pair += (mid - k);
        }

        // 2. Standard merge step
        vector<int> temp;
        int i = low, j = mid + 1;

        while (i <= mid && j <= high) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i++]);
            } else {
                temp.push_back(nums[j++]);
            }
        }

        while (i <= mid) temp.push_back(nums[i++]);
        while (j <= high) temp.push_back(nums[j++]);

        // 3. Copy back to update nums
        for (int idx = low; idx <= high; idx++) {
            nums[idx] = temp[idx - low];
        }
    }

    void mergesort(vector<int> &nums, int low, int high, int &pair) {
        if (low >= high) return;

        int mid = low + (high - low) / 2;
        mergesort(nums, low, mid, pair);
        mergesort(nums, mid + 1, high, pair);
        merge(nums, low, mid, high, pair);
    }

    int reversePairs(vector<int> &nums) {
        if (nums.empty()) return 0;
        int pair = 0;
        mergesort(nums, 0, nums.size() - 1, pair);
        return pair;
    }
};
