class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size(), step = 0, start = 0, end = 0,	maxend =0;
        while (end < n - 1) {
			for (int i = start; i <= end; i++) {
				maxend = max(maxend, i + nums[i]);
			}
            start = end + 1;
            end = maxend;
            step+=1;
        }
		return step;
    }
};