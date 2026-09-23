/*tinh diem tb cua 3 mon toan ly hoa
diemtb=toan*3+ly*2+hoa/6*/
#include <stdio.h>
int main (){
    float diemToan,diemLy,diemHoa;

    printf ("\n Nhap Diem Toan:");
    scanf ("%f",&diemToan);
    printf ("\n Nhap Diem Ly:");
    scanf ("%f",&diemLy);
    printf("\n Nhap Diem Hoa:");
    scanf ("%f",&diemHoa);

    printf ("\n Diem Trung Binh: %.2f",(diemToan*3+diemLy*2+diemHoa)/6);
    return 0;
}