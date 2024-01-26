#include <iostream>
#include <stack>
using namespace std;

string removeStars(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '*') {
            st.push(s[i]);
        } else if (!st.empty()) {
            st.pop();
        }
    }

    string result = "";
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    string s;
    getline(cin, s);
    string result = removeStars(s);
    cout << result << endl;

    return 0;
}