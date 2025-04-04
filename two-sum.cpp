class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            map<int,int> mp,mp1;
            for(int i=0;i<nums.size();i++){
                mp[nums[i]]=i;
                mp1[nums[i]]++;
            }
            for(int i=0;i<nums.size();i++){
                int comp=target-nums[i];
                if(mp1[comp] && mp[comp]!=i){
                    return {i,mp[comp]};
                }
            }
            return {};
        }
    };