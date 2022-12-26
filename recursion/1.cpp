// #include <iostream>
// using namespace std;
// void sort(int n1, int n2, int arr[], int arr1[], int arr2[])
// {
//     int i = 0, j = 0, k = 0;
//     while (i < n1 && j < n2)
//     {
//         if (arr1[i] < arr2[j])
//             arr2[k++] = arr[i++];
//         else
//             arr2[k++] = arr1[j++];
//     }
//     while (i < n1)
//         arr2[k++] = arr[i++];
//     while (j < n2)
//         arr2[k++] = arr1[j++];
// }
// int main()
// {
//     int n1;
//     cin >> n1;
//     int arr[100];
//     for (int i = 0; i < n1; i++)
//     {
//         cin >> arr[i];
//     }
//     int n2;
//     cin >> n2;
//     int arr1[100];
//     for (int j = 0; j < n2; j++)
//     {
//         cin >> arr1[j];
//     }
//     int arr2[n1+n2];
//     sort(n1, n2, arr, arr1, arr2);
//     // cout << "Array after merging" << endl;
//     for (int i = 0; i < n1 + n2; i++)
//         cout << arr2[i] << " ";
//     return 0;
// }
// C++ program to merge two sorted arrays/
#include<iostream>
using namespace std;

// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
void mergeArrays(int arr1[], int arr2[], int n1,
							int n2, int arr3[])
{
	int i = 0, j = 0, k = 0;

	// Traverse both array
	while (i<n1 && j <n2)
	{
		if (arr1[i] < arr2[j])
			arr3[k++] = arr1[i++];
		else
			arr3[k++] = arr2[j++];
	}

	// Store remaining elements of first array
	while (i < n1)
		arr3[k++] = arr1[i++];

	// Store remaining elements of second array
	while (j < n2)
		arr3[k++] = arr2[j++];
}

// Driver code
int main()
{
	int arr1[100];
	int n1 ;
    cin>>n1;
    for (int i = 0; i < n1; i++)
    {
        cin>>arr1[i];
    }
    
	int arr2[100];
	int n2;
    cin>>n2;
    for (int j = 0; j < n2; j++)
    {
        cin>>arr2[j];
    }
    

	int arr3[n1+n2];
	mergeArrays(arr1, arr2, n1, n2, arr3);

	cout << "Array after merging" <<endl;
	for (int i=0; i < n1+n2; i++)
		cout << arr3[i] << " ";

	return 0;
}
