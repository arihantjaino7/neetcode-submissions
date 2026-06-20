class Solution {
public:
    int hour(vector<int>& piles, int mid){
        int count = 0;
        for(int i = 0; i<piles.size(); i++){
            count += piles[i] / mid;
            if(piles[i]%mid != 0){
                count++;
            }
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int high = INT_MIN;
        for(int i = 0; i<n; i++){
            if(piles[i] > high){
                high = piles[i];
            }
        } 
        int low = 1;
        int result = -1;
        while(low <= high){
            int mid = (high + low)/2;
            if(hour(piles, mid) <= h){
                result = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return result;
    }
};
