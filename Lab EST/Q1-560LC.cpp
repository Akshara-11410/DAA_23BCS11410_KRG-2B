class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int pre_sum = 0;
        int c = 0;
        for(int i = 0;i<nums.size();i++){
            
            pre_sum+=nums[i];
            int r  = pre_sum - k;
            
            if(pre_sum == k){
               c++;
            }
       if   (mpp.find(r) != mpp.end())
             c+=mpp[r];
            
            
            
           mpp[pre_sum]++;
        }
        return c;
        
        
    }
};
