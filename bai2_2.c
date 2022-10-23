/*Yêu cầu: Đảo ngược chuỗi
- ví dụ:
        + Chuỗi ban đầu: "There are five new books in the living room."
        + Chuỗi cần đảo ngược là: "room. living the in books new five are There"
*/


#include <stdio.h>

char str[] = "Your payment method will automatically be charged in advance every 4 weeks. You will be charged the introductory rate for the introductory period, and thereafter will be charged the standard rate. All subscriptions renew automatically. You can cancel anytime. Mobile apps are not supported on all devices. These offers are not available for current subscribers. Other restrictions and taxes may apply. Offers and pricing are subject to change without notice.";

int LENGTH(char x[]){
    int i = 0;
    while (x[i] != '\0')
    {
        ++i;
    }
    return i;
}

void DaoNguocChuoi(char x[], char y[]){
    int length = LENGTH(x);
    int i;
    for (i = 0; i < length; i++)
    {
        y[i] = x[length - 1 - i];
    }
}

void DoiKyTu (char arr[], int length){
    char temp[length];
    int i, j;
    for (i = 0; i < length; i++)
    {
        temp[i] = arr[length - 1 -i];
    }
    for (j = 0; j < length; j++)
    {
        arr[j] = temp[j];
    }
    
}

// void Hienthi (char x[]){
//     int k;
//     for (k = 0; x[k] != '\0'; k++) {
//         printf("%c",x[k]);
//     }
// }

int main(int argc, char const *argv[])
{
    char result[LENGTH(str)];
    DaoNguocChuoi(str,result);
    int i = 0;
    int front = 0, end = -1, length = 0;
    for ( i = 0; i <= LENGTH(result); i++)
    {
        if (result[i] == 32 || result[i] == 0)
        {
            front = end;
            end = i;
            length = end - front - 1;
            DoiKyTu(result + front + 1, length);
        }
    }   
    printf("%s",result);
    return 0;
}





// Cách 2
/*#include <stdio.h>

char mang1[] = "Your payment method will automatically be charged in advance every 4 weeks. You will be charged the introductory rate for the introductory period, and thereafter will be charged the standard rate. All subscriptions renew automatically. You can cancel anytime. Mobile apps are not supported on all devices. These offers are not available for current subscribers. Other restrictions and taxes may apply. Offers and pricing are subject to change without notice.";
char mang2[459];
int SIZE_ARR(char arr[])
{
    int i = 0;
    while (arr[i] != 0) {
        i++;
    }
    return i+1;
}

void hienthi(const char arr[], int length)
{
    int i;
    for ( i = 0; i < length; i++) {
        printf("%c",arr[i]);
    }
}

int main(int argc, char const *argv[])
{
    int size = SIZE_ARR(mang1);
    int front = 0;
    int end = -1;
    int length = 0;
    int i, j;
    for ( i = 0; i <= size; i++) {
        if (mang1[i] == 32 || mang1[i] == 0) {
            front = end;
            end = i;
            length = end - front ;
            for ( j = 0 ; j < length ; j++) {
                mang2[size - i + j] = mang1[front + 1 + j];
            }
        }
    }  
    hienthi(mang2,size);
    return 0;
}*/