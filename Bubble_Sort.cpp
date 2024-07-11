#include<bits/stdc++.h>
using namespace std;

void InputArray(int arr[],int siz){
for(int i=0;i<siz;i++){
    cin>>arr[i];
}
}
void PrintArray(int arr[],int siz){
   for(int i=0;i<siz;i++){
        cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main(){
    int siz;
    cin>>siz;
int arr[siz];

InputArray(arr,siz);
cout<<"Unsorted array"<<endl;
PrintArray(arr,siz);
for(int i=1;i<siz;i++){
        cout<<"Iteration Number -> "<<i<<endl;
    for(int j=0;j<=siz-2;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]= arr[j+1]; //you can use sort(arr[j],arr[j+1]);
                arr[j+1]=temp;
            }
PrintArray(arr,siz);
    }
    cout<<endl;
}
cout<<"After sort:  "<<endl;
PrintArray(arr,siz);

}
