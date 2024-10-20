#include<iostream>
using namespace std;

   int firstocc(int arr[],int size,int key){

   int s= 0;
   int e = size - 1;
   int mid = s +(e  - s)/2;
   int ans = -1;
   while(s <= e){
      
       if(arr[mid] == key){
         ans = mid;
          e = mid - 1;  
       }
       if(key > arr[mid]){
        s = mid + 1;
       }
       else if(key < arr[mid]){
        e = mid - 1;
       }
       mid = s +(e  - s)/2;
   } 
   return ans;
}

int lastocc(int arr[],int size,int key){

   int s= 0;
   int e = size - 1;
   int mid = s +(e  - s)/2;
   int ans = -1;
   while(s <= e){
      
       if(arr[mid] == key){
         ans = mid;
          s = mid + 1;  
       }
       if(key > arr[mid]){
        s = mid + 1;
       }
       else if(key < arr[mid]){
        e = mid - 1;
       }
       mid = s +(e  - s)/2;
   } 
   return ans;
}


int main(){
  int even[16] = {1,1,2,2,2,3,3,3,3,3,3,3,3,3,3,3};
    
    
    int n = firstocc(even,16,3);
    cout << "The element 3 is at fisrtocc index: "<<n <<endl;
    
     int m = lastocc(even,16,3);
    cout << "The element 3 is at lastocc index: "<<m <<endl;
   cout<<"Total number of occurance is: ";
   int totalocc = (m - n) + 1;
   cout<<totalocc;
}
