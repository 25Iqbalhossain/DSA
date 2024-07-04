#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int x ,int lb,int up){
if(lb<=up){
        int mid=(lb+up)/2;
    //x==arr[mid]
    if(x==arr[mid]) return mid;

    //x>arr[mid]
    else if(x>arr[mid]) binarySearch(arr,x,mid+1,up);

    //x < arr[mid]
    else binarySearch(arr,x,lb,mid-1);
}

else return -1;
}
int main(){

int siz;
cout<<"Enter your array size "<<endl;
cin>>siz;
int arr[siz];
for(int i=0;i<siz;i++){

    cin>>arr[i];
}
int checkValue;
cout<<"Enter your value do you want to check ";
cin>>checkValue;
int indexNumber=binarySearch(arr,checkValue,0,siz-1);
cout<<"Index number "<<indexNumber<<" Position "<<indexNumber+1;
return 0;
}
