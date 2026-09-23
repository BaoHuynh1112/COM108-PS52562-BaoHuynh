/* tinh chu vi va dien tich cua HCN va Hinh tron
#define PI 3.14159*/
#include <stdio.h>
#define PI 3.14159
int main (){
    float CDhcn,CRhcn;
    float bankinh;

    printf("\n Nhap Chieu Dai HCN:");
    scanf("%f",&CDhcn);

    printf("\n Nhap Chieu Rong HCN:");
    scanf ("%f",&CRhcn);

    printf ("\nChu vi cua HCN:%.2f",(CDhcn+CRhcn)*2);
    printf("\nDien tich cua HCN:%.2f",CDhcn*CRhcn);

    printf ("\n Nhap Ban Kinh Hinh Tron:");
    scanf("%f",&bankinh);

    printf ("\nChu vi cua hinh tron :%.2f",(bankinh+bankinh)*PI);
    printf ("\nDien tich cua hinh tron :%.2f",bankinh*bankinh*PI);
    return 0;
}