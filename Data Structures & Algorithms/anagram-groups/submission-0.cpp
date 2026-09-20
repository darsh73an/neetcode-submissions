class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;

        for(string& s : strs){
            int freq[26] = {};

            for(char ch : s){
                freq[ch - 'a']++;
            }

            string key;
            for(int i=0; i<26; i++){
                key += "#" + to_string(freq[i]);                
            }            
            mp[key].push_back(s);
        }

        for(auto& [key,match] : mp){
            ans.push_back(match);
        }
        return ans;
    }
};


// TC: O(n × k)
// SC: O(n × k) — storing the groups + keys.