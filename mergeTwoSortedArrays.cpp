#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i = 0; int j = 0;
    int k = 0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
       else{
        arr3[k] = arr2[j];
        k++;
        j++;
       }
    }
    while(i<n){
        arr3[k] = arr1[i];
        k++;
        i++;
    }

    while(j<m){
        arr3[k] = arr2[j];
        k++;
        j++;
    }
}
void print(int ans[],int n){
    for(int i = 0;i<n; i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
int arr1[5] = {1,3,5,7,9};
int arr2[5] = {2,4,6,8,10};
int arr3[10] = {0};
merge(arr1,5,arr2,5,arr3);
cout<< "the merging of two sorted array is: ";
print(arr3,10);
return 0 ;
}
