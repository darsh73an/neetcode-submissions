class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i : s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }else{
                if(st.empty()){
                    return false; // bcoz there is closing but st is empty so
                }

                char ch = st.top();

                if(ch != '(' && i == ')') return false;  // top is open and curr is not closing
                if(ch != '[' && i == ']') return false;
                if(ch != '{' && i == '}') return false;

                st.pop();
            }
        }
        return st.empty();
    }
};

// tc 0(n)
// sc 0(n)
