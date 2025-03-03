#include <stdio.h>

int main()
{
    //Basic syntex of pointer.
    // int c = 4; // variable declaration.

    // int *p = &c; // Pointer declaration.

    // printf("The value of c = %d\n", c); // Out value of  c.

    // printf("The address of c that stores in the  pointer variable in p the value is : %d", *p);//Output the value of myAge with the pointer.

    // printf("\nThe address of c is = %p\n", &c);//Output the memory address of c.

    // printf("The address of c that stores in the pointer variable = %d\n", p); //Output the memory address of c with the pointer.




    // Pointer with using array.
    // int arr[] = {55, 60, 76, 34, 23};

    // int size = sizeof(arr) / sizeof(arr[0]);

    // printf("The element number of the array is : %d\n", size);

    // printf("The size of the full array : %d\n", sizeof(arr));

    // printf("The array is : \n");

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i]);
    // }
    // printf("\nGet the first element of the array : %d\n", *arr);

    // printf("Get the second element of the array : %d\n", *(arr + 1));

    // printf("Get the address of the array is : %d\n", arr);

    // printf("Get the address of the first element of the array : %d\n", &arr[0]);

    // printf("Print the array with the help of pointer : \n");

    // int *ptr = arr;

    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", *(ptr + i));
    // }




    // pointer to pointer.
    int a = 10;

    int *p;

    int **pp;

    p = &a; // pointer p is pointing to the address of a

    pp = &p; // pointer pp is a double pointer pointing to the address of pointer p

    printf("address of a: %x\n", p); // Address of a will be printed

    printf("address of p: %x\n", pp); // Address of p will be printed

    printf("value stored at p: %d\n", *p); // value stoted at the address contained by p i.e. 10 will be printed

    printf("value stored at pp: %d\n", **pp); // value stored at the address contained by the pointer stoyred at pp


 

    // array address calculate.
    // int arr[] = { 3, 5, 6, 7, 9 };

    // int *p = arr;

    // int (*ptr)[5] = &arr;
    
    // int size = sizeof(p);
    // printf("%d",size);

    // printf("p = %p, ptr = %p\n", p, ptr);

    // printf("*p = %d, *ptr = %p\n", *p, *ptr);
    
    // printf("sizeof(p) = %lu, sizeof(*p) = %lu\n", sizeof(p), sizeof(*p));

    // printf("sizeof(ptr) = %lu, sizeof(*ptr) = %lu\n", sizeof(ptr), sizeof(*ptr));
    


    return 0;
}