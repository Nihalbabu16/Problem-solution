#include <iostream>
#include <stack>
#include <string>
using namespace std;

string isBalanced(string s) {
    stack<char> st;  
    
    for (auto c: s) {
        switch (c) {
            case '{':
            case '(':
            case '[':
                st.push(c);
                break;
                
            case '}':
                if (st.empty() || (st.top() != '{')) {
                    return "NO";
                }
                st.pop();
                break;
                
            case ')':
                if (st.empty() || (st.top() != '(')) {
                    return "NO";
                }
                st.pop();
                break;
                
            case ']':
                if (st.empty() || (st.top() != '[')) {
                    return "NO";
                }
                st.pop();
                break;
        }
    }
    return st.empty() ? "YES" : "NO";
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int test_cases;
    cin >> test_cases;
    
    for(int a0 = 0; a0 < test_cases; a0++){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    
    return 0;
}
