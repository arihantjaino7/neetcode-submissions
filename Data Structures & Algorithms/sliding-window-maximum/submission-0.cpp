class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int num = n-(k-1);
        vector<int> result(num);
        int high = k-1;
        int low = 0;
        int ans;
        
        while(high < n){
            ans = INT_MIN;
            for(int i = low; i<=high; i++){
                if(nums[i] > ans){
                    ans = nums[i];
                }
            }
            result[low] = ans;
            high++;
            low++;
        }
        return result;
        
    }
};
