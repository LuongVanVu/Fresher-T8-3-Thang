/*Bài tập 5: Viết chương trình tính tiền cước TAXI. Biết rằng: 
- Km đầu tiên là 5000đ
- 29Km tiếp theo là 4000đ
- Nêu lớn hơn 30Km thì mỗi Km thêm ra sẽ phải trả là 3000đ 
- Hãy nhập số Km sau đó in ra số tiền phải trả.
*/

// 5000*K1 + 4000*K2 + 3000*K3

#include <stdio.h>

enum{
    km1 = 5000,
    km2 = 4000,
    km3 = 3000
};

typedef struct{
    int T1;
    int T2;
    int T3;
} typeHeSo;

void TinhKm(int soKm, typeHeSo *hs){
    int kq, du, K3;
    kq = soKm/31;
    du = soKm%31;
    if (kq > 0)
    {
        hs->T1 = 1;
        hs->T2 = 29;
        hs->T3 = 31*(kq-1) + du + 1;
    }else if (du > 0)
    {
        hs->T1 = 1;
        hs->T2 = du - 1;
        hs->T3 = 0;
    }else{
        hs->T1 = 1;
        hs->T2 = 0;
        hs->T3 = 0;
    }  
}

void GiaCuoc(int soKm){
    typeHeSo hs;
    int giacuoc;

    TinhKm(soKm, &hs);
    giacuoc = km1*hs.T1 + km2*hs.T2 + km3*hs.T3;

    printf("Gia cuoc: %d VND\n",  giacuoc);
}

int DieuKien (int km){
    if(km < 0){
        printf("Khong ton tai Quang duong am!!!\n");
        return 1;
    }else{
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    int km;
    do
    {
        printf("Nhap km: "); scanf("%d", &km);
    } while (DieuKien(km));
    
    
    GiaCuoc(km);

    return 0;
}
