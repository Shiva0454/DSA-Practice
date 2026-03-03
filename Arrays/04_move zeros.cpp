#include<iostream>
using namespace std;
 int main()
 {
    int arr[]={1,2,3,5,1};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout <<"true";
                return 0;
            }
        }
    }
    cout<<"false";
 }
