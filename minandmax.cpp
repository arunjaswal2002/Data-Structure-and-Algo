#include<bits/stdc++.h>

using namespace std;

void minandmax(int arr[], int n) {
    sort(arr, arr + n);

    cout << arr[0] << " " << arr[n - 1] << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    minandmax(arr, n);
}