// Tạo arr3 = arr1 + arr2 (gộp 2 mảng lại)
// Sắp xếp mảng 3 theo thứ tự tăng dần, giảm dần
// Đếm số xuất hiện nhiều nhất trong mảng

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define SIZE(arr)     sizeof(arr)/sizeof(arr[0])

uint8_t mang1[] = {1, 7, 20, 4, 15, 18}; //6 ô nhớ
uint8_t mang2[] = {3, 14, 18, 21, 25, 14, 17, 19, 28}; //9 ô nhớ

uint8_t *mang3;

void ArrCoppy (uint8_t arr3[], uint8_t arr1[], uint8_t arr2[]){
    // Tinh kich thuoc mang 1, 2
    uint8_t length1 = SIZE(mang1);
    uint8_t length2 = SIZE(mang2);
    printf("kich thuoc mang 1 = %d", length1);
    printf("\nkich thuoc mang 2 = %d", length2);
    
    // Tinh kich thuoc mang3
    uint8_t length3 = length1 + length2;
    printf("\nkich thuoc mang 3 = %d", length3);
    printf("\n--------------------");

    // Cap phat bo nho cho mang3
    mang3 = (uint8_t *)malloc( length3 * sizeof(uint8_t));

    // copy mang1 -> mang3
    int i;
    for ( i = 0; i < length1; i++){
        mang3[i] = mang1[i];
    }
    // copy mang2 -> mang3
    for ( i = 0; i < length2; i++){
        mang3[length1 + i] = mang2[i];
    }
    // Xuat mang3
    for ( i = 0; i < length3; i++){
        printf("\nmang3[%d] = %d", i, *(mang3 + i));
    }
}

// Sap xem mang3 tang dan
void TangDan(uint8_t a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    printf("\nMang sap xep tang dan la: ");
    for(i = 0; i < n; i++){
        printf("%3d", a[i]);
    }
}

// Sap xem mang3 giam dan
void GiamDan(uint8_t a[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;        
            }
        }
    }
    printf("\nMang sap xep giam dan la: ");
    for(i = 0; i < n; i++){
        printf("%3d", a[i]);
    }
}
// Tim phan tu co so lan xuat hien nhieu nhat
void TimSoLanXuatHien (uint8_t a[], int n){
    int i, j;
    int max = 1;
    int index = 0;
    for ( i = 0; i < n-1; i++)
    {
        int count = 1;
        for ( j=i+1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }   
        }
        if (count > max)
        {
            max = count;
            index = i;
        } 
    }
    printf("\nPhan tu %d co so lan xuat hien nhieu nhat (%d lan).", a[index], max);
    
}
int main(int argc, char const *argv[])
{
    uint8_t length3 = SIZE(mang1) + SIZE(mang2);
    ArrCoppy(mang3, mang1, mang2);
    printf("\n------------------");
    TangDan(mang3, length3);
    printf("\n------------------");
    GiamDan(mang3, length3);
    printf("\n------------------");
    TimSoLanXuatHien(mang3, length3);
    return 0;
}
