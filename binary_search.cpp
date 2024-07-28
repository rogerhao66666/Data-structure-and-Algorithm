#include <bits/stdc++.h>
using namespace std;

int BinarySearch (vector<int>& arr, int low, int high, int x){
    if (high >= low){
        int mid = low + (high - low) / 2;
                
        if (arr[mid] == x){
            return mid;
        }
        if (arr[mid] > x) {
            return BinarySearch (arr, low, mid-1, x);
        } 
        else {
            return BinarySearch (arr, mid+1, high, x);
        }
    }
    return -1;
}

int main () {
    vector <int> arr;
    arr = {1, 2, 4, 9, 10, 13, 16, 23};
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = BinarySearch(arr, 0, n-1, 9);
    if (res == -1){
        cout << "No answer ><" << endl;
    }
    else {
        cout << "Ans is " << res << " ^^" << endl;
    }
    return 0;
}