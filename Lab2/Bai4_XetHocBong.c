#include <stdio.h>
int main (){
    float diemtb;
    float diemhk;
    printf("\nNhap diem TB: ");
    scanf("%f",&diemtb);

    printf ("\nNhap diem hanh kiem: ");
    scanf ("%f",&diemhk);

    int dkdtb=diemtb>=8;
    int dkhk=diemhk>=5;
    int ketqua=dkdtb&&dkhk;

    printf("\nDieu kien Diem TB de dat hoc bong >=8 %.1f",diemtb);
    printf ("\nDIeu kien Diem HK de dat hoc bong >=5 %.1f",diemhk);
    printf ("\nKet qua hoc bong cua ban la: %s",ketqua?"Dat":"Khong Dat");
    return 0;
}