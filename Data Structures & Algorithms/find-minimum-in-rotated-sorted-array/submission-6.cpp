class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        int res = -1;
        int mid;
        if(nums[0] < nums[high]){
            return nums[0];
        }
        if(n == 1){
            return nums[0];
        }
        while(low <= high){
            mid = (low + high)/2;
            if(nums[mid] > nums[n-1]){
                low = mid+1;
            }
            else{
                res = nums[mid];
                high = mid-1;
            }
            

        }
        return res;
    }
};