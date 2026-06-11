//Leetcode problem -decode-string
//https://leetcode.com/problems/decode-string/
class Solution {
public:
    string decodeString(string s) {
        stack<char> st;

        for(char ch : s) {
            if(ch != ']') {
                st.push(ch);
            }
            else {
                // string nikalo
                string temp = "";
                while(!st.empty() && st.top() != '[') {
                    temp = st.top() + temp;
                    st.pop();
                }

                // '[' hatao
                st.pop();

                // number nikalo
                string num = "";
                while(!st.empty() && isdigit(st.top())) {
                    num = st.top() + num;
                    st.pop();
                }

                int k = stoi(num);

                // repeated string banao
                string decoded = "";
                for(int i = 0; i < k; i++) {
                    decoded += temp;
                }

                // wapas stack me push karo
                for(char c : decoded) {
                    st.push(c);
                }
            }
        }

        string ans = "";

        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};