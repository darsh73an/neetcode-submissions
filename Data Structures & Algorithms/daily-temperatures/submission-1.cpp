class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> s;
        vector<int> ans(n,0);

        for(int i=0; i<n; i++){
            // if stack has less idx elements than curr ith element then remove it from stack bczo we want next greator in stack
            while(!s.empty() && temperatures[i] > temperatures[s.top()]){
                // focus in this loop we are pushing the nxt greator for for prev element thaat is still present in stack but not in for loop

                int temp = s.top();  // stores idx 
                s.pop();
            
            ans[temp] = i - temp;  // bcoz from curr idx we have to dind the large element day
            }
            s.push(i);
        }
        return ans;
    }
};

// 0(n)
// 0(n)
