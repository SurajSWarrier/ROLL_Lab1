# include <stdio.h>

void insertionsort(int a[],int n);
void selectionsort(int a[],int n);
void bubblesort(int a[],int n);
void mergesort(int arr[], int l, int r);
void quicksort(int arr[], int low, int high);
void printArray(int A[], int size);


int main()
{
    int n;
    printf("Enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements one by one:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int option;
    printf("How do you want to sort?\n1.Insertion Sort\n2.Selection Sort\n3.Bubble Sort\n4.Merge Sort\n5.Quick Sort\nEnter your choice\n");
    scanf("%d",&option);
    if(option==1)
    {
        insertionsort(a,n);
        printArray(a,n);
    }
    else if(option==2)
    {
        selectionsort(a,n);
        printArray(a,n);
    }
    else if(option==3)
    {
        bubblesort(a,n);
        printArray(a,n);
    }
    else if(option==4)
    {
        mergesort(a,0,n-1);
        printArray(a,n);
    }
    else if(option==5)
    {
        quicksort(a,0,n-1);
        printArray(a,n);
    }
    else
    {
        printf("invalid option");
    }
}

void insertionsort(int a[],int n)
{ 
    int i, key, j; 
    for (i = 1; i < n; i++)
    { 
        key = a[i]; 
        j = i - 1; 
        while (j >= 0 && a[j] > key)
        { 
            a[j + 1] = a[j]; 
            j = j - 1; 
        } 
        a[j + 1] = key; 
    } 
}

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
void selectionsort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) 
    { 
        
        min_idx = i; 
        for (j = i+1; j < n; j++) 
        if (arr[j] < arr[min_idx]) 
            min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
    } 
}
void bubblesort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    i = 0;
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 
void mergesort(int arr[], int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
 
        mergesort(arr, l, m);
        mergesort(arr, m + 1, r);
 
        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 

        if (arr[j] < pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

void quicksort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int pi = partition(arr, low, high); 
        quicksort(arr, low, pi - 1); 
        quicksort(arr, pi + 1, high); 
    } 
}