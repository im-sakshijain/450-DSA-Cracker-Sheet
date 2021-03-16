//Method:1st->//as sorting is used therefore not the best method
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        sort(nums.begin(),nums.end());
        for(i = 0;i<nums.size();i++) {
            if(nums[i]==nums[i+1]) {
                break;
            } 
        }
        return nums[i];
    }
};
//Method:2nd->Most optimal Solution,time complexity:o(n),space complexity:o(1)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i;
        for(i = 0;i<nums.size();i++) {
            int m = abs(nums[i]) - 1;
            if(nums[m]>0)
                nums[m] = -nums[m];
            else
                return abs(m)+1;
        }
        return -1;
    }
};