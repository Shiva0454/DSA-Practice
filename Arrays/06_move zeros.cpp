#include<iostream>
using namespace std;
 int main()
 {
    int digits[]={1,2,9};
    int n=3;
    int carry=1;
    for(int i=n-1;i>=0;i--){
digits[i]=digits[i]+carry;
if(digits[i]==10){
    digits[i]=0;
    carry=1;

}
else{
    carry=0;
    break;
}
    }
    if(carry==1){
        cout<<1<<" ";
    }
    for(int i=0;i<n;i++){
        cout<<digits[i]<< " ";
    }
    return 0;
 }
