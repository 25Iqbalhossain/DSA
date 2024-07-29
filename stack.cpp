#include<bits/stdc++.h>
#include"Stack_with_doubly_linklist.h"
using namespace std;
int main()
{
Stack st;
st.push(1);
st.push(2);
st.push(5);
while(!st.empty()){
    cout<<st.pop()<<endl;
}
cout<<st.size()<<endl;
if(!st.empty()) cout<<st.Top()<<endl;

return 0;
}
