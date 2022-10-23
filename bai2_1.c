/*Yêu cầu: Tạo một mảng với số phần bất kỳ.
- Viết chương trình tính tổng của 3 số liên kề lớn nhất.
- Viết chương trình tính tổng của 3 số liên kề bé nhất. */

#include <stdio.h>

int a[] = {1, 2 , 9 , 6, 7 ,8, 5, 1, 2, 4};

void Tong3soLienKeLonNhat (int x[], int n ){
    int sum = 0, max = 0, index = 0;
    int i;
    for( i = 0; i < n - 2; i++){
        sum = x[i] + x[i + 1] + x[i + 2];
        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }
    printf("\nTong cua 3 so lien ke lon nhat la: %d + %d + %d = %d", x[index], x[index + 1], x[index + 2], max );
}

void Tong3soLienKeBeNhat (int x[], int n ){
    int sum = 0, min = x[0] + x[1] + x[2], index = 0;
    // printf("\nMin = %d", min);
    int i;
    for( i = 0; i < n - 2; i++){
        sum = x[i] + x[i + 1] + x[i + 2];
        if (sum < min)
        {
            min = sum;
            index = i;
        }
    }
    printf("\nTong cua 3 so lien ke be nhat la: %d + %d + %d = %d", x[index], x[index + 1], x[index + 2], min);
}

int main(int argc, char const *argv[])
{
    int length = sizeof(a)/sizeof(a[0]);
    printf("Chieu dai cua mang la: %d", length);
    Tong3soLienKeLonNhat(a, length);
    Tong3soLienKeBeNhat(a,length);
    return 0;
}
