class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map <int , int> f;

        for(int i = 0; i<n; i++){
            f[nums[i]]++;
        }
        int current_element = -1;
        int current_max = -1;
        vector<int> vec(k);
        int number = 0;
        while(k!=0){
            current_max = -1;
            for(auto i : f){
                int element = i.first;
                int freq_element = i.second;
                if(freq_element > current_max){
                    current_element = i.first;
                    vec[number] = current_element;
                    current_max = freq_element;
                }
            }
            f.erase(current_element);
        k--;
        number++;
        }
        return vec;
    }
};
