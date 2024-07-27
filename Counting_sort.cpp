 #include<bits/stdc++.h>
 using namespace std;

 void  PrintArray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

 }
 int main(){
 int size;
 cin>>size;
 int arr[size];
 for(int i=0;i<size;i++){
    cin>>arr[i];
 }


//step 1
int max =INT_MIN;
for(int i=0;i<size;i++)
{
    if(arr[i]>max)
        max=arr[i];

}
//step 2
int count[max+1];
for(int i=0;i<=max;i++){
    count[i]=0;
}
//step 3

for(int i=0;i<size;i++){
    count[arr[i]]++;
}

//step 4

for(int i=0; i<=max; i++){
    count[i]=count[i]+count[i-1];
}
//step 5 //Final Array --->Backword Traversal of Basic Array
int final[size];
for(int i=size-1;i>=0;i--){
    count[arr[i]]--;
int  k=count[arr[i]];
    final[k]=arr[i];
}
cout<<"After Sort "<<endl;
PrintArray(final,size);

 return 0;
 }
