# include <stdio.h>

void insertionsort(int a[],int n);
void selectionsort(int a[],int n);
void bubblesort(int a[],int n);
void mergesort(int a[],int n);
void quicksort(int a[],int n);


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
    }
    else if(option==2)
    {
        selectionsort(a,n);
    }
    else if(option==3)
    {
        bubblesort(a,n);
    }
    else if(option==4)
    {
        mergesort(a,n);
    }
    else if(option==5)
    {
        quicksort(a,n);
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