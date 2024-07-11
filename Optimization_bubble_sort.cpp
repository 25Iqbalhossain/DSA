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
        int flag=0;
        cout<<"Iteration Number -> "<<i<<endl;
    for(int j=0;j<siz-i;j++){
                                              //replace size-1== size-i+1
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]= arr[j+1];     //you can use sort(arr[j],arr[j+1]);
                arr[j+1]=temp;
                flag=1;
            }
PrintArray(arr,siz);
    }

    cout<<endl;
      if(flag==0) break;
}
cout<<"After sort:  "<<endl;
PrintArray(arr,siz);

}
