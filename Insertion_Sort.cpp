#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int siz){

for(int i=0;i<siz;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

int main(){
int siz;
cin>>siz;
int arr[siz];

for(int i=0;i<siz;i++){
    cin>>arr[i];
}
cout<<"Before Sorting ";
printArray(arr,siz);
cout<<endl;

//inertion Sort

for(int i=1;i<siz;i++){
    int key=arr[i];
    int  j =i-1;
        while(arr[j]>key&&j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]==key;
    }

cout<<"After Sorting ";
printArray(arr,siz);
cout<<endl;
return 0;
}
