#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    stack<string> st;
    for(int i=0;i<5;i++){
        cin>>s;
        st.push(s);
    }
    while(!st.empty()){
        cout<<st.top()<<" " ;
        st.pop();
    }
}
