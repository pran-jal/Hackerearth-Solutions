#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void maxheapify(int* a, int i, int n) {
    int l = 2*i+1;
    int r = 2*i+2;
    int largest = i ;
    if ((l<=n) && (a[l]>a[largest]))
        largest = l;
    if ((r<=n) && (a[r]>a[largest]))
        largest = r;
    if (largest != i) {
        swap (&a[i], &a[largest]);
        maxheapify(a, largest, n);
    }

}

void bmh(int *a, int n) {
    for (int i = n/2; i>0; i--)
        maxheapify(a, i, n);
}

void heapsort(int *a, int n) {
    for (int i = n; i>0; i--) {
    swap(&a[0], &a[i] );
    cout<<a[i]<<endl;
    n--;
    maxheapify(a, 0, n);

    }
}
int main() {

    int arr[] = {6, 1, 5, 2, 4, 3};
    bmh(arr, 5);

    heapsort(arr, 5);
    cout << "The sorted array is : ";
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}
