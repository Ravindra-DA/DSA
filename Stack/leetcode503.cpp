                        // leetcode problem 503. Next Greater Element II


class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n= nums.size();
        vector<int>res(n);
        for(int i=n-2;i>=0;i--){
            st.push(nums[i]);
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
                
        }
        if(st.empty()){
            res[i]=-1;
           // continue;
        }
        else{
            res[i]=st.top();
        }
        st.push(nums[i]);
        }
        //reverse(res.begin(),res.end());
        return res;
    }
};