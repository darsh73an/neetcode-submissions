class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1 = s.size();
        int t1 = t.size();

        if(s1 != t1){
            return false;
        }
        int freq[26] = {};

        for(int i=0; i<s1; i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }
        for(int i : freq){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};
