#include <stdio.h>
int main()
{
    int Arr[5] = {10,20,30,40,50};
    printf("size of Arr : %lu\n",sizeof(Arr));    //20
    printf("Arr : %lu\n",Arr);
    printf("&Arr : %lu\n",&Arr);
    printf("(&Arr) + 1 : %lu\n",(&Arr) + 1);

    return 0;
}