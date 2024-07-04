#include<bits/stdc++.h>
using namespace std;
int main(){
int flag=0;
int siz;
cin>>siz;
int arr[siz];
int x;
for(int i=0;i<siz;i++){
    cin>>arr[i];
}


char c;
cout<<"Do you want to search : (Y/N) "<<endl;
cin>>c;
while(toupper(c)=='Y'){

    cout<<"Enter your elements do you want to check"<<endl;
cin>>x;
for(int i=0;i<siz;i++){
    if(arr[i]==x){
            cout<<"INdex number : "<< i<<endl<< i+1 <<" Position "<<endl;
            flag=1;

    }
}

if (flag==0){
    cout<<"Not found";
}
cout<<"Do you want to check again:(Y/N) "<<endl;
cin>>c;
}


return 0;
}
