class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int n = s.size();
        int longest = 0;
        int l = 0, maxFreq = 0;

        for(int r=0; r<n; r++){
            freq[s[r] - 'A']++;

            maxFreq = max(maxFreq,freq[s[r] - 'A']); // AAA

            int replaceChars = ( r-l+1 ) - maxFreq;

            if(replaceChars > k){
                freq[s[l] - 'A']--;
                l++;

                replaceChars = (r-l+1) - maxFreq;
            }
            longest = max(longest,(r-l+1));
        }
        return longest;
    }
};
