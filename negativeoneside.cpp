#include<bits/stdc++.h>

using namespace std;

void movenegative(int arr[], int n) {
    // optimized approach 
    int left = 0, right = n - 1;
    while (left <= right) {
        if (arr[left] < 0 && arr[right] < 0) {
            left++;
        } else if (arr[left] < 0 && arr[right] > 0) {
            right--;
        } else if (arr[left] > 0 && arr[right] < 0) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        } else {

            right--;
        }
    }

    // for (int i = 0; i < n; i++) {
    //     if (arr[i] < 0) {
    //         int temp = arr[i];
    //         for (int j = i; j > 0; j--) {
    //             arr[j] = arr[j - 1];
    //         }
    //         arr[0] = temp;
    //     }
    // }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    movenegative(arr, n);
    // sort(arr, arr + n);
}