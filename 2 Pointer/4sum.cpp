                     // leetcode problem 18 (4sum) solution

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, long long target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n-3;i++){
           long long sum=(long long )target-nums[i];
           for(int j=i+1;j<n-2;j++){
            int left=j+1;;
            int right=n-1;
            while(left<right){
                long long sum2=(long long )nums[j]+nums[left]+nums[right];
                if(sum2<sum){
                    left++;
                }
                else if(sum2>sum){
                    right--;

                }
                else{
                    ans.push_back({nums[i],nums[j],nums[left],nums[right]});
                    
                    left++;
                    right--;
                }
            }
           }
        }
        vector<vector<int>>fans;
        if(ans.empty()){
            return fans;
        }
        fans.push_back(ans[0]);
        for(int i=1;i<ans.size();i++){
            // fans.push_back(ans[0]);
            if(find(fans.begin(),fans.end(),ans[i])!=fans.end()){
                continue;
            }
            else{
            fans.push_back(ans[i]);
            }

        }
        return fans;
    }
};