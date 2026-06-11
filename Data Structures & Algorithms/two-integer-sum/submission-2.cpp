class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mp;
        mp[nums[0]]=0;
        for(int i=1;i<n;i++){

            int needed=target-nums[i];
            if(mp.find(needed)!=mp.end()) return {mp[needed],i};
            mp[nums[i]]=i;
            
        }
        return {};
        
    }
};
