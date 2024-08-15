#include<bits/stdc++.h>
#include<stack>
#include<queue>
using namespace std;

void reverseKelement(int n,int k,queue <int> &q){

int x=n/k;
int y=n%k;
stack<int>st;
while(x>0){
    int chk=k;
    while(chk>0){
        st.push(q.pop());
        chk--;
    }
    while(!st.empty()){
        q.push(st.pop());//check this line if you use in codeblocks
    }
    x--;
}
while(y>0){

    while(chk>0){
        st.push(q.pop());
        y--;
    }
    while(!st.empty()){
        q.push(st.pop());
    }
}
}

int main(){

int n,k;
cin>>n>>k;
queue<int>q;
for( int i=0;i<n;i++){
        int val;
    cin>>val;
    q.push(val);
}

reverseKelements(n,k,q);
while(q.empty()){
    cout<<q.pop()<<" ";
}

return 0;
}
