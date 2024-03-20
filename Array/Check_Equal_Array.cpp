#include <bits/stdc++.h>
using namespace std;

bool areEqual(int arr1[], int arr2[], int N, int M)
{
	if (N != M)
		return false;

	sort(arr1, arr1 + N);
	sort(arr2, arr2 + M);

	for (int i = 0; i < N; i++)
		if (arr1[i] != arr2[i])
			return false;
  
	return true;
}

int main()
{
	int arr1[] = { 3, 5, 2, 5, 2 };
	int arr2[] = { 2, 3, 5, 5, 2 };
	int N = sizeof(arr1) / sizeof(int);
	int M = sizeof(arr2) / sizeof(int);

	if (areEqual(arr1, arr2, N, M))
		cout << "Yes";
	else
		cout << "No";
	return 0;
}
