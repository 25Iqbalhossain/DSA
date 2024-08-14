#include<bits/stdc++.h>
#include<stack>
#include"Stack_with_doubly_linklist.h"
using namespace std;
int main(){
    int n;
    cin>>n;
 int arr[n];
 stack<int>st;
 stack<int>minStack;
 for(int i=0;i<n;i++){
    cin>>arr[i];
 }
 int min=INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<=min){
        minStack.push(arr[i]);
        min=arr[i];
    }
    st.push(arr[i]);
}

while(!st.empty()){
    //if
    if(st.top() != minStack.top()){
        st.pop();
        cout<<minStack.top()<<" ";
    }
    else{
       cout<<minStack.top()<<" ";
       minStack.pop();
       st.pop();

    }


}

return 0;
}
