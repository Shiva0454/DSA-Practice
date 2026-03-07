#include<iostream>
using namespace std;
int main()
{
    int nums[]={3,0,1};
    int n=3;
    for(int i=0;i<=n;i++){
bool found =false;
for(int j=0;j<n;j++){
    if(nums[j]==i){
        found =true;
        break;
    }
}
if(found ==false){
    cout<<"missing number is "<< " "   <<i;
    break;
}
    }
    return 0;
}
