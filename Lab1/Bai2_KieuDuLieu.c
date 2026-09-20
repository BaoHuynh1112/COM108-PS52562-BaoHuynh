//mssv,hoten,namsinh,tuoi,diemtb
#include <stdio.h>
int main (){
    char mssv[]="PS52562";
    char hoten[]="Huynh Nguyen Gia Bao";
    int namSinh=2000;
    int tuoi=2026-namSinh;
    float diemTB=9.5;

    printf("Ma So Sinh Vien:%s\n",mssv);
    printf (" Ho va Ten: %s\n",hoten);
    printf ("Nam Sinh: %d\n",namSinh);
    printf ("Tuoi :%d\n",tuoi);
    printf ("DIEMTB :%.2f\n",diemTB);
    return 0;
}