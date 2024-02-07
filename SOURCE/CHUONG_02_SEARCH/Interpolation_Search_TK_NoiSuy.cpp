/*
    Cho trước mảng một chiều có n phần tử. 
    Tìm phần tử data có giá trị cho trước trong mảng. 
    Nếu phần tử đó tồn tại trong danh sách thì xuất vị trí của nó trong danh sách. 
    Nếu phần tử đó không tồn tại trong danh sách thì trả về giá trị -1.
*/

#include <iostream>
using namespace std;
    // Cần phải sắp xếp mảng trước khi thực hiện tìm kiếm nội suy
    
int InterpolationSearch(int arr[], int n, int data)
{
    int start, end, pos;
    start = 0;
    end = n - 1;
    while (start <= end && data >= arr[start] && data <= arr[end])
    {
        pos = start + ((double)(end - start) / (arr[end] - arr[start])) * (data - arr[start]);
        
        if (arr[pos] == data)
            return pos;
        else if (arr[pos] < data)
            start = pos + 1;
        else    // arr[pos] > data 
            end = pos - 1;
    }    

    // không tìm thấy phần tử nào có giá trị data => return -1
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

    if (InterpolationSearch(arr, n, data) != -1)
        cout << "\nVi tri tim thay data: " << InterpolationSearch(arr, n, data);
    else
        cout << "\nKhong tim thay vi tri data.";
    return 0;
}