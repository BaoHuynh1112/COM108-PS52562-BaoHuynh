/* mssv,hoten ,diemtoan,diemly,diemhoa,diemtb
diemtb =(diemtoan*2+diemly+diemhoa)/4
*/
#include <stdio.h>
int main (){
    char mssv[]="PS52562";
    char hoten[]="Huynh Nguyen Gia Bao";
    float diemToan= 9.0;
    float diemLy=8.5;
    float diemHoa=9.5;

    float diemTB=(diemToan*2+diemLy+diemHoa)/4;

    printf("Ma So Sinh Vien: %s\n",mssv);
    printf("Ho va Ten: %s\n",hoten);
    printf ("Diem TB: %2.f\n",diemTB);
    return 0;
}