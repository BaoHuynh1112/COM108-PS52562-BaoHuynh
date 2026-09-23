/* dieu kien diem tb >=8
dieu kien hanh kiem tot: 1 dat 0 khong dat */

#include <stdio.h>
int main (){
    float diemTB;
    int hanhkiem;

    printf ("\n Nhap Diem Trung Binh Cua Ban:");
    scanf ("%f",&diemTB);
    printf ("\n Nhap hieu so hanh kiem :");
    scanf ("%d",&hanhkiem);

    int dkdiem=diemTB>=8;
    int dkhk=hanhkiem==1;
    int ketqua=dkdiem&&dkhk;
    printf ("\n Diem Trung Binh :%.2f",diemTB);
    printf ("\n Hanh Kiem:%d",hanhkiem);
    printf ("\n Dieu kien Xet Hoc Bong Cua Ban:%s",ketqua?"Dat":"Khong Dat");
    return 0;

}