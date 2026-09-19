class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> s;
        vector<int> ans(n,0);

        for(int i=0; i<n; i++){
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                int temp = s.top();
                s.pop();

                ans[temp] = i - temp; 
                // i means curr idx and temp means s.top idx
            }
            s.push(i);  // bcoz we are counting days
        }
        return ans;
    }
};
