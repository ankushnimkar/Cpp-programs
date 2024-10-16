class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //create a map store index of each array element
        unordered_map<int, int> mp;
        for(int index=0; index <nums.size(); ++index)
            mp[nums[index]] = index;
        
        //check reminder is present in map and if found return the indeces
        for(int index=0; index <nums.size(); ++index)
        {
            int rem=target - nums[index];
            if(mp.find(rem) != mp.end() &&  mp[rem] != index )
                return {index, mp[rem]};
        }

        return {};

    }
};