#include<bits/stdc++.h>
#include<stack>
using namespace std;
bool balanceParenthesis(string s){
int n=s.size();
stack<char>st;
 bool isBalance=true;
if(s[0]==')'||s[0]=='}'||s[0]=='['){
    return false;
}
for(int i=0;i<n;i++){

    if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        st.push(s[i]);
       }
 //closing bracket
  else if(s[i]==')'){
    if(st.top()=='(') {
        st.pop();
       }
       else{
        isBalance=false;
        break;
       }
  }
   else if(s[i]=='}'){
    if(st.top()=='{'){
        st.pop();
       }
       else{
        isBalance=false;
        break;
       }
  }
 else if(s[i]=='['){
    if(st.top()=='['){
        st.pop();
       }
       else{
        isBalance=false;
        break;
       }
  }

}
return isBalance;
}

int main(){
string chk;
cin>>chk;
if(balanceParenthesis(chk)) {cout<<"Yes";}
else {cout<<"No";}
   cout<<endl;
}



