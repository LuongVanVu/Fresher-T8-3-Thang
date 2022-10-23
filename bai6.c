/*Yêu cầu: Cho một cái túi, bỏ vào túi những chiếc tất tuỳ ý với 3 màu đỏ, vàng, xanh.
- Hãy viết chương trình đếm xem trong túi có bao nhiêu đôi tất cùng màu
- vd: 9 chiếc tất trong túi(4 đỏ, 2 vàng, 3 xanh) 
        => 2 đôi tất đỏ
        => 1 đôi tất vàng
        => 1 đôi tất xanh
 */

/*Quy định: + màu đỏ    <=> 0
            + màu vàng  <=> 1
            + màu xanh <=> 2
*/ 


#include <stdio.h>
#include <stdlib.h>
// #include <time.h>

typedef struct{
    int *ptr;
    int size;
}BoxArray;

typedef struct{
    int red;
    int yellow;
    int green;
}Sock_Color;

void Nhap(BoxArray *value){

    srand(time(NULL));
    value->size = 10 + rand() % (30 +1 - 10);
    int tat;
    printf("Kich thuoc cua chiec tui la: %d\n", value->size);

    value->ptr = (int *)malloc(value->size * sizeof(int));
    int i;
    for( i = 0; i < value->size; i++){
        tat = rand()%3;
        value->ptr[i] = tat;
    }
    
}

void Count_Sock(BoxArray _box, Sock_Color *_sock){
    _sock->red = 0;
    _sock->yellow = 0;
    _sock->green = 0;
    int i;
    for ( i = 0; i < _box.size; i++)
    {
        if (_box.ptr[i] == 0)
        {
            _sock->red++;
        }else if (_box.ptr[i] == 1)
        {
            _sock->yellow++;
        }else{
            _sock->green++;
        }   
    }   
}

int main(int argc, char const *argv[])
{
    // system("cls");
    BoxArray _box;
    Sock_Color _sock;
    int i;

    Nhap(&_box);

    for ( i = 0; i < _box.size; i++)
    {
        printf("arr[%d] = %d\n", i, _box.ptr[i]);
    }
    
    Count_Sock(_box, &_sock);

    printf("So doi tat mau do la: %d\n", _sock.red/2);
    printf("So doi tat mau vang la: %d\n", _sock.yellow/2);
    printf("So doi tat mau xanh la: %d\n", _sock.green/2);


    return 0;
}
