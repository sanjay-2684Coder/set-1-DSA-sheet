// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter a no. "<<endl;
    cin>>n;
    int ans = n;
    int digit;
    int rev=0;
    while(n!=0){
        digit = n%10;
        rev = rev *10+digit;
        n= n/10;
    }
      if(rev == ans){
          cout<<"it is palindrome Number";
      }
      else{
          cout<<"it is not a palidrome Number";
      }
    return 0;
}