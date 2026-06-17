class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int high = 0;
        int low = 0;
        int len = 0;
        int result = 0;
        
        unordered_map<char, int> f;

        for(high = 0; high<n; high++){
            f[s[high]]++;
            while(f[s[high]] > 1){
                f[s[low]]--;
                if(f[s[low]] == 0){
                    f.erase(s[low]);
                }
                low++;
            }
            len = high - low + 1;
            result = max(len,result);
        }
        return result;
    }
};
