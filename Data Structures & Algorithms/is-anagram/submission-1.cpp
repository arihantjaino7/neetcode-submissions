class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mpp1;
        int size = s.size();
        int size_t = t.size();

        if(size == size_t){
            for(int i = 0; i<size; i++){
                mpp1[s[i]]++;
            }
            map<char,int> mpp2;
            for(int i = 0; i<size; i++){
                mpp2[t[i]]++;
            }
            if(mpp1 == mpp2){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};
