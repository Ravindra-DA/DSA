             // leetcode problem 15 : 3 sum solution using two pointer approach



class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        //int i=0,left=i+1,right=n-1;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]){ // it is use for removing dublicates comapre ith index value nums[i] with previous ith index value nums[i-1]
                continue;
            }
            int left=i+1;
            int right=n-1;
           
            while(left<right){ // here we use two loops one for first value second (this one) is use with taking with 2 vlaues in one loop with help of two pointer 
                int sum=nums[i]+nums[left]+nums[right];
               
                 if(sum<0){
                    left++;
                    
                
                }else if (sum>0){
                    right--;

                }
                else{
                   ans.push_back({nums[i],nums[left],nums[right]});//here we store our answer it can be one or more than one
                   left++;
                   right--;
                   while(left<right && nums[left]==nums[left-1]) left++;  // this is help for remove duplicates from left and right value with compare previous value (only for left)
                  
                }
              
            }
        }
        return ans;
        
    }
};