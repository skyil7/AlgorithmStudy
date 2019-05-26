#include <iostream>
#define FOR(a,b,i) for(int i = a;i<b;i++)
using namespace std;

//problem from https://www.acmicpc.net/problem/2750
//solved by Quick Sort Algorithm

int part(int a[],int left,int right)
{
	int pivot = right;
	int i = left - 1;
	int j = left;
	int temp;

	if (left < right)
	{
		while (j < right)
		{
			if (a[pivot] > a[j])
			{
				temp = a[i+1];
				a[i + 1] = a[j];
				a[j] = temp;
				i++;
			}
			j++;
		}
		temp = a[pivot];
		a[pivot] = a[i + 1];
		a[i + 1] = temp;
	}
	pivot = i + 1;

	return pivot;
}

void quickSort(int a[], int left, int right)
{
	if (left < right)
	{
		int pivot = part(a, left, right);
		quickSort(a, left, pivot - 1);
		quickSort(a, pivot + 1, right);
	}
}

int main()
{
	int n;
	int arr[1000];

	cin >> n;

	FOR(0, n, i)
		cin >> arr[i];

	quickSort(arr, 0, n - 1);

	FOR(0, n, i)
		cout << arr[i] << endl;

	return 0;
	
}