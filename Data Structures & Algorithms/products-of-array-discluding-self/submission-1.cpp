class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        int product;
        for(int i = 0; i<n; i++){
            product = 1;
            for(int j = 0; j<n; j++){
                if(j!=i){
                    product = product * nums[j];
                }
            }
            output[i] = product;
        }
        return output;
    }
};
