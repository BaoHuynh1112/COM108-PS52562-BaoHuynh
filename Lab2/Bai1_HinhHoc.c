/* nhap xuat thong so chu vi dien tich hcn
nhap xuat thong so chu vi dien tich ht #define PI 3.14159*/
#include <stdio.h>
#define PI 3.14159

int main (){
    float CDhcn,CRhcn;
    float bankinh;

    printf ("\n Nhap Chieu Dai HCN: ");
    scanf ("%f",&CDhcn);

    printf ("\n Nhap Chieu Rong HCN: ");
    scanf("%f",&CRhcn);

    printf ("\nChu Vi cua HCN la :%.2f",(CDhcn+CRhcn)*2);
    printf ("\n Dien Tich cua HCN :%.2f",CDhcn*CRhcn);

    printf ("\n Nhap Ban Kinh :");
    scanf("%f",&bankinh);

    printf ("\nChu Vi cua Hinh Tron: %.2f",(bankinh+bankinh)*PI);
    printf ("\nDien Tich cua Hinh Tron: %.2f",bankinh*2*PI);

    return 0;
}