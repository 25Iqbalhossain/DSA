// this is only use for prefix
#include<bits/stdc++.h>
#include"Stack_with_doubly_linklist.h"
using namespace std;

 int prefixEvaluation(string chk){
Stack<int>st;// taking a stack
for(int i=chk.length()-1;i>=0;i--){

    if(chk[i]>='0' && chk[i] <='9'){
        st.push(chk[i]-'0');
    }
    else{
        // chk[i] --->operator
        int a = st.pop();
        int b = st.pop();

        switch(chk[i]){
        case '+':
            st.push(a+b);
            break;
        case '-':
            st.push(a-b);
            break;
        case '*':
            st.push(a*b);
            break;
        case '/':
            st.push(a/b);
            break;
        default:
            break;

        }


    }



}
return st.Top();
}
int main(){
//+*423
//-+7*45+20
cout<<prefixEvaluation("+*423")<<endl;
cout<<prefixEvaluation("-+7*45+20")<<endl;
}
