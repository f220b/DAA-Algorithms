#include <iostream>
using namespace std;

int binary(int a[], int l, int r, int key)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] > key)
            return binary(a, l, mid - 1, key);
        else
            return binary(a, mid + 1, r, key);
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    int result = binary(arr, 0, n - 1, key);
    if (result == -1)
        cout << "\nKey not found.\n";
    else
        cout << "\nKey found at index : " << result;
    return 0;
}