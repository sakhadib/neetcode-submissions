class Solution {
public:
    int maxArea(vector<int>& nums) {
        int m = 0;

        int i = 0;
        int j = nums.size() - 1;

        while(i<j){
            int area = min(nums[i], nums[j]) * (j - i);
            m = max(area, m);

            if(nums[i] < nums[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return m;
    }
};
