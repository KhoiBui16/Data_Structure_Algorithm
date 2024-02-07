/*
    Cho trước mảng một chiều có n phần tử. 
    Tìm phần tử data có giá trị cho trước trong mảng. 
    Nếu phần tử đó tồn tại trong danh sách thì xuất vị trí của nó trong danh sách. 
    Nếu phần tử đó không tồn tại trong danh sách thì trả về giá trị -1.
*/

#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int data)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == data)
            return i;
    }
    return -1;
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

    if (LinearSearch(a, n, data) != -1)
        cout << "\nVi tri tim thay data: " << linearSearch(a, n, data);
    else
        cout << "\nKhong tim thay vi tri data.";
    return 0;
}