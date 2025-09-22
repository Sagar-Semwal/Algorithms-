/*
Appraoch:
1> We need to count all substrings that only contains vowels.
2> Idea is to split the string into continuous blocks of vowels.
For a block of lenght l , the total number of substrings are l*(l+1)/2(from the sum of first l natural numbers)
3>Traverse the string :
a>if its a vowel -> increase length of block by 1.
b>if its a consonant , it marks the end of vowel block 
add l*(l+1)/2 into ans and then reset l to  0.
4> After the loop ends again add l*(l+1)/2 for the cases when string is ending with vowels .(In our scenario the block is ended when consonant appear so if the string ends with vowel ,the block is never considered.)
5>ans is the total number of substrings in this case.
*/

#include<iostream>
#include<string>
using namespace std;
bool isVowel(char ch){
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') return true;
return false;

}

int main(){
    string s;
    cin>>s;
    int ans=0;
    int l=0;

    for(char ch:s){
        if(isVowel(ch)){
            l++;
        }
        else{
            ans+=l*(l+1)/2;
            l=0;
         }
    }
    ans+=l*(l+1)/2;

    cout<<ans;
}
