#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cout<<"Enter your size of square marix "<<endl;
cin>>n;
int matrix[n][n];
cout<<"Enter your Elements"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>matrix[i][j];
    }
}
cout<<"Major diagonal"<<endl;
for(int i=0;i<n;i++){
cout<<matrix[i][i];
}
cout<<"Minor diagonal"<<endl;
for(int i=0;i<n;i++){
    cout<<matrix[i][n-i-1];
}

}
