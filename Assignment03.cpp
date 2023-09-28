//=====================================================================================================
#include <cstdlib>
#include <iostream>

using namespace std;
//=====================================================================================================
//Helper functs for Heapsort and Quicksort
//=====================================================================================================
int heapify(int arr[], int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int comp;

    if (l < N && arr[l] > arr[largest])
    {
        largest = l;
        comps++;
    }
        

    if (r < N && arr[r] > arr[largest])
    {
        largest = r;
        comps++;
    }

    if (largest != i) 
    {
        swap(arr[i], arr[largest]);
        heapify(arr, N, largest);
        comps++;
    }
    return comps;
}

int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];
 
    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);
 
    for (int j = low; j <= high - 1; j++) {
 
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
 
            // Increment index of smaller element
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

//=====================================================================================================
// Heapsort
//=====================================================================================================
void heapSort(int arr[], int N)
{
    int comps;
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        comps = heapify(arr, N, i);
 
    // One by one extract an element
    // from heap
    for (int i = N - 1; i > 0; i--) {
 
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        comps = heapify(arr, i, 0);
    }
}

//=====================================================================================================
// Quicksort
//=====================================================================================================
// int quicksort(int array[], int n)
// {
//     int p = rand() % array.size()



//     int pi = partition(arr, low, high);

//     quickSort(arr, low, pi - 1);
//     quickSort(arr, pi + 1, high);
// }

int main() 
{
    cout << "Array 1 Values" << endl
    int array1[];
    for(int i = 0; i < 100; i++)
    {
        array1[i] = rand() % 100;
        cout << i << " ,";
    }
    cout << endl;

    cout << "Array 2 Values" << endl
    int array2[];
    for(int i = 0; i < 100; i++)
    {
        array2[i] = rand() % 100;
        cout << i << " ,";
    }
    cout << endl;

    int N = array1.size();
    heapSort(array1, N);
    cout << (heapSort(array1, N)) << endl;

    cout << "Array 1 Values" << endl
    for(int i = 0; i < 100; i++)
    {
        cout << array1[i] << " ,";
    }
    cout << endl;

    cout << "Array 2 Values" << endl
    for(int i = 0; i < 100; i++)
    {
        cout << array2[i] << " ,";
    }
    cout << endl;

}