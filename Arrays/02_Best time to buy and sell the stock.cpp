#include<iostream>
using namespace std;
int main()
{
    int arr[]={7,1,6,4,3};
    int n=5;
    int maxprofit=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int profit=arr[j]-arr[i];
            if(profit>maxprofit){
                maxprofit=profit;
            }
        }
    }
    cout<<maxprofit;
    }
