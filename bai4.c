/*Yêu cầu: Viết chương trìnhh đổi kí tự đầu tiên của mỗi phần tử thành chữ in hoa.
- Ví dụ: tran thanh truc => Tran Thanh Truc*/


#include <stdio.h>

char c[] = "this liquid fertilizer is very good. it will help make your rose leaves green again. then the plant should produce roses quite soon. the fertilizer costs about ten dollars.";

int LENGTH(){
    int i = 0;
    while (c[i] != '\0')
    {
        ++i;
    }
    return i;   
}
void DoiKyTu()
{
    int i,n,j;
    n = LENGTH(c);
    
    // for(i=0; i<n; i++)
    //     if(c[i]!=' ' && c[i]>='A' && c[i]<='Z') 
    //         c[i]+=32;

    for(j=0; j<n-1; j++)
        if(c[j]==' ' ) //&& c[j+1]!=' ' 
            c[j+1]-=32;
    // if(c[0]>='a' && c[0]<='z') 
        c[0]=c[0]-32;  
}
    
int main()
{
    DoiKyTu();
    printf("%s", c);
    return 0;
}



// Chương trình test
/* #include <stdio.h>

char Athuong = 'a';

char Ahoa = 'A';

char Ethuong = 'e';

char Ehoa = 'E';

int main(int argc, char const *argv[])
{
    printf("%c\n", Athuong - 32);
    printf("%c", Ehoa + 32);
    return 0;
}*/