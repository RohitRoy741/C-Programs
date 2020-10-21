#include<stdio.h>
void read(int[], int);
void write(int[], int);
int largest(int[], int);
int smallest(int[], int);
int main()
{
    int array[100],size,large,small;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    read(array,size);
    write(array,size);
    large = largest(array,size);
    small = smallest(array,size);
    array[large] = array[small]+array[large];
    array[small] = array[large] - array[small];
    array[large] = array[large] - array[small];
    printf("\nAfter interchange...\n");
    write(array,size);
    return 0;
}
void read(int array[], int size)
{
    int i;
    printf("\nEnter the elements of array\n");
    for(i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&array[i]);
    }
}
void write(int array[], int size)
{
    int i;
    printf("\nElements of array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}
int largest(int array[], int size)
{
    int index = 0,i;
    for(i=1;i<size;i++)
    {
        if(array[i]>array[index])
            index = i;
    }
    return index;
}
int smallest(int array[], int size)
{
    int index = 0,i;
    for(i=1;i<size;i++)
    {
        if(array[i]<array[index])
            index = i;
    }
    return index;
}