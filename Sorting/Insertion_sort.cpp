#include <iostream>

using namespace std;

void Insertion_sort(int *A, int n)
{
	int tmp, insert_p;
	for (int i = 1; i < n; i++)
	{
		insert_p = i-1;
		tmp = A[i];
		// Duyet mang duoc sap xep
		while (insert_p >= 0 && A[insert_p] > tmp)
		{
			A[insert_p + 1] = A[insert_p]; // Dich A[insert_p] len tren
			insert_p--;
		}
		A[insert_p + 1] = tmp;
	}
	cout << "Mang sau khi sap xep: " << endl;
	for (int i = 0; i < n; i++) cout << A[i] << ' ';
}

int main()
{
	int n;
	cout << "Nhap vao so phan tu mang: "; cin >> n;
	int *A = NULL;
	A = new int[n];
	cout << "Nhap cac phan tu mang: " << endl;
	for (int i = 0; i < n; i++) cin >> A[i];
	Insertion_sort(A, n);

	return 0;
}
