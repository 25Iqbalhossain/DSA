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
cout<<"position of the Deletion "<<endl;
cin>>pos;


if(pos<0||pos>sizee-1){
    cout<<"Invalid size and position "<<endl;
}
else{
        if(pos==sizee-1) sizee--;
else{
        for(int i=pos+1; i<sizee;i++){
        a[i-1]=a[i];
    }
    sizee--;
}
printArray(a,sizee);
}


return 0;
}
