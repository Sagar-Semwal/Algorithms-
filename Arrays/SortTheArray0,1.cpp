#include<iostream>
#include<vector>
using namespace std;

void sortArray(vector<int>&v){
    int n=v.size();
    int i=0;
    int j=v.size()-1;
    while(i<j){
        if(v[i]==0) i++;
        else if(v[j]==1) j--;
        else{
            swap(v[i],v[j]);
            i++;
            j--;
            
        }
        
    }

}



int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of the array (only 0s and 1s): ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Before Sorting:\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    sortArray(v);

    cout << "After Sorting:\n";
    for (int x : v) cout << x << " ";
}
