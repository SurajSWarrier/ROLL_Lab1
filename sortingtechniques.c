# include <stdio.h>

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
        printf("%d",insertionsort(a));
    }
    else if(option==2)
    {
        printf("%d",selectionsort(a));
    }
    else if(option==3)
    {
        printf("%d",bubblesort(a));
    }
    else if(option==4)
    {
        printf("%d",mergesort(a));
    }
    else if(option==5)
    {
        printf("%d",quicksort(a));
    }
}