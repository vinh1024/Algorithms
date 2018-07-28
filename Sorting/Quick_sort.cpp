#include <iostream>
#include <cstdlib> // Su dung ham rand()
using namespace std;

void printArray(int A[], int l, int r)
{
    for (int i = l; i < r - l ; i++)
    {
        cout << A[i] << ' ';
    }
    cout << endl;
}

void quick_sort(int A[], int l, int r)
{
    int i, j, x;
    i = l;
    j = r;
    x = A[(r+l)/2];
    do{
        while (A[i] < x) i++;
        while (A[j] > x) j--;
        if (i <= j)
        {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }while (i <= j);
    if (l < j) quick_sort(A, l, j);     // j la vi tri cuoi cung cua mang ben trai duoc tao ra
    if (i < r) quick_sort(A, i, r);     // i la vi tri dau tien cua mang ben phai duoc tao ra
}


int main()
{
    int n;
    cout << "Nhap so phan tu mang: "; cin >> n;
    int *A = NULL;
    A = new int[n];
    //int B[] = {77, 44, 99, 11, 33, 55, 88, 22, 66};
    for (int i = 0; i < n; i++) A[i] = rand()%100 + 1; // Tao mang co cac phan tu thuoc [1 100]
    cout << "Mang chua sap xep: " << endl;
    printArray(A, 0, n);
    quick_sort(A, 0, n-1);
    cout << "Mang sau khi sap xep: " << endl;
    printArray(A, 0, n);

    return 0;
}


