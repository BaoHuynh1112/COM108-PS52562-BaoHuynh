#include <stdio.h>
int main (){
    char masosinhvien[]= "PS52562";
    char hovaten[]= "Huynh Nguyen Gia Bao";
    float diemtoan =9.0;
    float diemly= 8.5;
    float diemhoa=9.5;
    float diemTB=(diemtoan*2+diemly+diemhoa)/4;
    printf ("MaSoSinhVien: %s\n",masosinhvien);
    printf("HoVaTen: %s \n",hovaten);
    printf ("DiemTB: %.f",diemTB);
    return 0;

}