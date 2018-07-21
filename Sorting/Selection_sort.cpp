#include <iostream>
/* The Selection sort algorithm:
	Finding the minimum or maximum element in an unsorted array
	and then putting it in its correct position in a sorted array.
*/
using namespace std;

void Selection_sort(int a[], int n)
{
	int minimum, tmp;
	for(int i = 0; i < n-1; i++)
	{
		minimum = i;
		for(int j = i+1; j < n; j++)
			if (a[minimum] > a[j]) minimum = j;
		swap(a[i], a[minimum]);
	}
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}
int main()
{
    int n;
    cout << "Nhap vao so phan tu mang: "; cin >> n;
    int *Input = NULL;
    Input = new int[n];

    cout << "Nhap cac phan tu mang: ";
    for (int i = 0; i < n; i++)
        cin >> Input[i];
    cout << endl;

    Selection_sort(Input, n);

    return 0;
}
