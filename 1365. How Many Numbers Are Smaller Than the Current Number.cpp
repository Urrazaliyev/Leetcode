class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int check=0;
        for(int i=0;i<nums.size();i++){
            check=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]>nums[j])check++;
            }
            ans.push_back(check);
        }
    return ans;
    }
};
