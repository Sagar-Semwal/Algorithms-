#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int m;
    cout<<"Enter the number of rows in the array: ";
    cin>>m;
    int n;
    cout<<"Enter the number of columns in the array: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
//     cout<<"Row wise Printing:  "<<endl;
//      for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// cout<<endl;
// cout<<"Column wise Printing: "<<endl;
//     for(int j=0;j<n;j++){
//         for(int i=0;i<m;i++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

int brr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        brr[i][j]=arr[j][i];
    }
}

cout<<"Real Matrix: "<<endl;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
cout<<"Transpose Matrix: "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}

}

