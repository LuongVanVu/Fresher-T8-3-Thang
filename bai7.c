#include <stdio.h>
#include <stdlib.h>

    typedef struct{
        int *ptr;
        int size;
    }Array;



void CreateArray(Array *value){

    srand(time(NULL));
    value->size = 10 + rand() % (30 +1 - 10);
    int arr;
    printf("Kich thuoc cua mang la: %d\n", value->size);

    value->ptr = (int *)malloc(value->size *sizeof(int));
    int i;
    for(i = 0; i < value->size; i++){
        //srand(time(NULL));
        arr = rand() % 50;
        value->ptr[i] = arr;
    }
}

// void Tong3solonnhat(Array *value1){
//     int sum = 0, index = 0, max = 0;
//     int i;
//     for ( i = 0; i < value1->size; i++)
//     {
//         sum = value1->ptr[i] + value1->ptr[i + 1] + value1->ptr[i + 2];
//         if (max < sum)
//         {
//             max = sum;
//             index = i;
//         }      
//     }
//     printf("\nTong cua 3 so lien ke lon nhat la: %d + %d + %d = %d", value1->ptr[index], value1->ptr[index + 1], value1->ptr[index + 2], max );  
// }

// void TimSoChan (Array *value2){
//     int so_chan = 0, index = 0, i;
//     for ( i = 0; i < value2->size; i++)
//     {
//         if (value2->ptr[i] % 2 == 0)
//         {
//             printf("\nSo chan la %d, vi tri arr[%d]", value2->ptr[i], i);
//         }    
//     }  
// }

// Tao mang2 voi cac phan tu la so chan cua mang 1

void MangChan(Array *value, Array *value_1){
    int i;
    int count = 0;
    for ( i = 0; i < value->size; i++)
    {
        if (value->ptr[i] % 2 == 0)
        {
            count++;
        }    
    }
    value_1->ptr = (int *)malloc(count * sizeof(int));
    int index = 0;
    for ( i = 0; i < value->size; i++)
    {
        if (value->ptr[i] % 2 == 0)
        {
            value_1->ptr[index] = value->ptr[i];
            index++;
        }   
    }
    printf("\n===============================\n");
    printf("Mang vua moi khoi tao la: \n");
    for ( i = 0; i < count; i++)
    {
        printf("arr[%d] = %d\t", i, value_1->ptr[i]); //ds
    }
    
    
}
int main(int argc, char const *argv[])
{
    Array arr, arr_1;
    CreateArray(&arr);
    int i;
    for ( i = 0; i < arr.size; i++)
    {
        printf("arr[%d] = %d\n", i, arr.ptr[i]);
    }
    // Tong3solonnhat(&arr);
    // TimSoChan (&arr);
    MangChan(&arr, &arr_1);
    
    return 0;
}
