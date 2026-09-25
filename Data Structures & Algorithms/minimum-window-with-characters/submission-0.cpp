class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> freq(128,0);   // 128 helps in freq[l] instead of freq[s[l]]
        int l = 0, count = 0, minSubStr = INT_MAX, start = 0;
        for(int i : t){
            freq[i]++;
        }

        for(int r=0; r<s.size(); r++){
            if(freq[s[r]] > 0){
                count++;
            }
            freq[s[r]]--;

            while(count == t.size()){
                if(r-l+1 < minSubStr){
                    minSubStr = min(minSubStr,r-l+1);
                    start = l;
                }

                freq[s[l]]++;
                if(freq[s[l]] > 0){
                    count--;
                }
                l++;
            }
        }
        return minSubStr == INT_MAX ? "" : s.substr(start,minSubStr); // this will get substr from strat of the substr and till the last of substr ie minSubStr
    }
};


// TC: O(|s| + |t|)
// SC: O(1)