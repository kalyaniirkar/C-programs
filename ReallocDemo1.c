#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *Arr = NULL;

     //step 1 is allocate the memory
    Arr = (int *)malloc(5 * sizeof(int)); 

    // step 2: Use the memory

    Arr = (int *)realloc(Arr,10*sizeof(int));
    {
        printf("unable to alloacte memory\n");
    }

    // step 3 : Free the memory
    free (Arr);

    return 0;
}