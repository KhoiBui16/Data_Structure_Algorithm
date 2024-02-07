/*
    Cho trước mảng một chiều có n phần tử. 
    Tìm phần tử data có giá trị cho trước trong mảng. 
    Nếu phần tử đó tồn tại trong danh sách thì xuất vị trí của nó trong danh sách. 
    Nếu phần tử đó không tồn tại trong danh sách thì trả về giá trị -1.
*/

#include <iostream>
using namespace std;

    // Cần sắp xếp mảng trước khi thực hiện tìm kiếm nhị phân
    // Code trực tiếp
int BinarySearch(int arr[], int n, int data)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        // int mid = (left + right) / 2; không phổ biến

        // phổ biến vì tránh trường hợp bị overflow: tràn số khi số lượng phần tử rất lớn
        int mid = start + (end - start) / 2 
        if (arr[mid] == data)
            return mid;
        else if (arr[mid] < data)
            left = mid + 1;
        else    // TH: arr[mid] > data
            right = mid - 1;
    }
    // thoát ra khỏi vòng lặp -> left > right nếu không tìm thấy reuturn -1
    return -1
}

    // Code bằng đệ quy

int BinarySearchRecursion(int arr[], int start, int end, int data)
{
    // trường hợp điều kiện dừng
    if (start > end)
        return -1;

    int mid = start + (end - start) / 2;

    else if (arr[mid] == data)
        return data;
    else if (arr[mid] < data)
        return BinarySearchRecursion(arr, mid + 1, end, data);
    else
        return BinarySearchRecursion(arr, start, mid - 1, data);
}

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang : ";
    cin >> n;

    int data;
    cout << "Nhap phan tu can tim kiem: ";
    cin >> data;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap arr[" << i << "]: ";
        cin >> arr[i];
    }

    if (BinarySearch(a, n, data) != -1)
        cout << "\nVi tri tim thay data: " << BinarySearch(a, n, data);
    else
        cout << "\nKhong tim thay vi tri data.";
    return 0;
}