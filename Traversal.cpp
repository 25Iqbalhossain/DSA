#include<bits/stdc++.h>
using namespace std;

printArray(int a[50],int sizee){

for(int i=0;i<sizee;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}


int main(){

int a[50];
int sizee;
cin>>sizee;
for(int i =0;i<sizee;i++){
    cin>>a[i];
}
printArray(a,sizee);

return 0;
}
