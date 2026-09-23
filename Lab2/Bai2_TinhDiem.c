#include <stdio.h>
int main (){
    float diemToan,diemLy,diemHoa;

    printf("\nNhap diem toan");
    scanf("%f",&diemToan);
    printf("\n Nhap diem Ly");
    scanf("%f",&diemLy);
    printf ("\n Nhap diem Hoa");
    scanf("%f",&diemHoa);

    printf ("\nDiem TB :%.2f ",(diemToan*3+diemLy*2+diemHoa)/6);
    return 0;
}