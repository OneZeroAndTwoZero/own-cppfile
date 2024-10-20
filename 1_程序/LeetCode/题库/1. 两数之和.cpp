class Solution {
public:
    unordered_map<int,int> f,id;
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i < nums.size();i ++){
            if(f[target - nums[i]])
                return {id[target - nums[i]],i};
            else{
                f[nums[i]] = 1;
                id[nums[i]] = i;
            }
        }
        return{};
    }
};
