#include<bits/stdc++.h>
#include"MYQUEUE.h"

int main(){
    Queue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int chk;
        cin>>chk;
        q.push(chk);
    }

    while(!q.empty()){
        cout<<q.pop()<<" ";
    }

}
