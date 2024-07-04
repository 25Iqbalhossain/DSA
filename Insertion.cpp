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
for(int i=0;i<sizee;i++){
    cin>>a[i];
}

int pos,value;
cout<<"Enter your position "<<endl;
cin>>pos;
cout<<"Enter your value "<<endl;
cin>>value;

if(pos<0||pos>sizee){
    cout<<"Invalid size and position "<<endl;
}

else{
// this code has 0(n) time complexity;
/**for(int i =sizee-1;i>=pos;i--){
    a[i+1]=a[i];
}**/
// this code has 0(1) time complexity;
a[sizee]=a[pos];
a[pos]=value;

}


cout<<"NEw ARRay Insertion Values "<<endl;
printArray(a, sizee+1);

return 0;
}

