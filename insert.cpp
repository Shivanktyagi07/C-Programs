#include<iostream>
using namespace std;
void printarray(int ar[],int n){
    cout<<"elements are= ";
    for (int i = 0; i < n; i++)
    {
        cout<<ar[i]<<" " ;}
    }
    void insert(int ar[],int n){
        int x,index,i;
        cout<<endl<<"eneter index value =";
        cin>>index;
         cout<<"eneter elements =";
        cin>>x;
         for (int i = n-1; i >=index; i--)
        {
            ar[i+1]=ar[i];}
            ar[index]=x; }
int main(){
    int ar[7]={1,2,3,4,5,6};
    printarray(ar,7);
    insert(ar,6);
    printarray(ar,7);
}





