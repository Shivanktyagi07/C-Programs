#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for (int i = 0; i <n; i++){
        cout<<arr[i]<<" ";}
}
void unique(int arr[],int n)  {
    int i,ans=0;
    cout<<"unique elements are=";
for (int i = 0; i <n; i++){
 ans=ans^arr[i];}
cout <<ans;
}
int main(){
int arr[7]={22,22,62,21,5,62,21};
printarray(arr,7);
cout<<endl;
unique(arr,7);
}

