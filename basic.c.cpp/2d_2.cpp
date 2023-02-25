#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the value of n:"<<endl;
    cin >> n;
    int a[1000005];
    cout<<"enter the array"
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // till here we have taken the input here
    int left[1000005], right[1000005];
    // here we have create two array left and right//
    cout<<"run"<<endl;
    int max_left = 0, max_right = 0;
    // finding the max of left and right array here

    for (int i = 0; i < n; i++) {
        if (a[i] > max_left) {
            max_left = a[i];
        }
        left[i] = max_left;
    }
    for (int i = 0; i < n; i++) {
       cout<<left[i]<<endl;
    }
    // for (int i = n - 1; i >= 0; i--) {
    //     if (a[i] > max_right) {
    //         max_right = a[i];
    //     }
    //     right[i] = max_right;
    // }
    // int ans = 0;
    // for (int i = 0; i < n; i++) {
    //     int h = min(left[i], right[i]);
    //     ans += max(h - a[i], 0);
    // }
    // cout << ans << endl;
    return 0;
}