class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            map<long long int,int> mp;
            vector<long long int> num;
            for(long long int i=0;i<nums.size();i++){
                if(!mp[nums[i]]){
                    num.push_back(nums[i]);
                }
                mp[nums[i]]++;
            }
            int mx=0;
            for(int i=0;i<num.size();i++){
                if(mp[num[i]-1]==0){
                    int count=0;
                    while(mp[num[i]+count]){
                        count++;
                    }
                    mx=max(mx,count);
                }
            }
            return mx;
        }
    };