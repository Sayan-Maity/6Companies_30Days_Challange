#include <bits/stdc++.h>
using namespace std;

    int evalRPN(vector<string>& tokens) {   
               
        stack<int> st;
        for (auto it : tokens){
            if (it == "+" || it == "-" || it == "*" || it == "/"){
                int op1 = st.top();
                st.pop();
                int op2 = st.top();
                st.pop();
                if (it == "+") st.push(op2 + op1);
                else if (it == "-") st.push(op2 - op1);
                else if (it == "*") st.push(op2 * op1);
                else st.push(op2 / op1);
            }
            else {
                int ele = stoi(it);
                st.push(ele);
            }
        }
        return st.top();
    }

int main() {
    vector<string>tokens = {"2","1","+","3","*"};
    cout<<evalRPN(tokens);
}