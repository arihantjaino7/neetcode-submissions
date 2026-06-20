class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        int mid;

        // [5, 6, 7, 8, 9, 10, 1, 2, 3, 4]
        //      Part 1            Part 2
        // [5, 6, 7, 8, 9, 10] [1, 2, 3, 4]

        // [3, 5, 1]  target = 3
        //   p1   p2
        // [3, 5] [1]      low = 0       high = 2    mid = 1

        //  0  1  2  3  4  5
        // [3, 4, 5, 6, 1, 2]   target = 3
        //    part 1    part 2
        // [3, 4, 5, 6] [1, 2]    low = 0       high = 5    mid = 2



        while(low <= high){
            mid = (high + low)/2;
            if(nums[mid] > nums[n-1]){
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] < target){
                    low = mid+1;
                }
                else{
                    if(nums[0] > target){
                        low = mid+1;
                    }
                    else{
                        high = mid-1;
                    }
                }
            }
            else{
                if(nums[mid] == target){
                    return mid;
                }
                else if(nums[mid] > target){
                    high = mid-1;
                }
                else{
                    if(target > nums[n-1]){
                        high = mid-1;
                    }
                    else{
                        low = mid+1;
                    }
                }
            }
        }
        return -1;
    }
};
