//subsequence ans  sum


#include<bits/stdc++.h>

using namespace std;
void subseq(int index, vector < int > & ans, int arr[], int size, int s, int sum) {
    if (index >= size) {
        if (s == sum) {
            for (int i = 0; i < size; i++)
                cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    ans.push_back(arr[index]);
    s += arr[index];
    subseq(index + 1, ans, arr, size, s, sum);
    s -= arr[index];
    ans.pop_back();
    subseq(index + 1, ans, arr, size, s, sum);
}

void subseqsum(int index, vector < int > & ans, int arr[], int size, int s, int sum) {
    if (index == size) {
        if (s == sum) {
            for (int i = 0; i < ans.size(); i++)
                cout << ans[i] << " ";

            cout << endl;
            return;
        }
        return;
    }

    s += arr[index];
    ans.push_back(arr[index]);
    subseqsum(index + 1, ans, arr, size, s, sum);
    s -= arr[index];
    ans.pop_back();
    subseqsum(index + 1, ans, arr, size, s, sum);

}
int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int sum;
    cin >> sum;
    vector < int > ans;
    int s = 0;
    subseqsum(0, ans, arr, n, s, sum);
    return 0;
}
