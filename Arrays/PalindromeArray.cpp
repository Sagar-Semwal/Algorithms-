#include<iostream>
#include<algorithm>
using namespace std;

bool isPalindrome(int arr[],int n){
 int start=0;
 int end=n-1;
 while(start<end){
    if(arr[start]!=arr[end]){
        return false;
    }
    start++;
    end--;
 }
 return true;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    cout<<"Enter the elements of the array: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Palindrome : "<<isPalindrome(arr,n);
}