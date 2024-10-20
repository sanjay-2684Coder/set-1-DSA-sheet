#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int arr[8]={12,10,9,45,3,10,9,3};
    
    unordered_map<int,int>ans;
    for(int i=0;i<8;i++){
         ans[arr[i]]++;
    }
    cout<<"unique Number is :"<<endl;
    
    for(auto i:ans){
        if(i.second ==1){
            cout<<i.first<<" ";
        }
    }
    cout<<endl;
    return 0;
}