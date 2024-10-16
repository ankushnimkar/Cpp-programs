class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int index=0; index <nums.size(); ++index)
            mp[nums[index]] = index;
        
        for(int index=0; index <nums.size(); ++index)
        {
            int rem=target - nums[index];
            if(mp.find(rem) != mp.end() &&  mp[rem] != index )
                return {index, mp[rem]};
        }

        return {};

    }
};