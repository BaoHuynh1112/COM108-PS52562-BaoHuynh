#include <stdio.h>
#define PI 3.14159
int main (){
    const float PII =3.14159;
    float r=5.5,cv1,cv2,dt;
    printf("Nhap Ban Kinh :"); // thông báo rằng nhập bán kính
    scanf("%f",&r) ;// có 2 phần phần đầu định kiểu , phần 2 : địa chỉ 
    cv1=r*2*PI;
    cv2=r*2*PII;

    printf ("Chuvi1: %.2f\n Chuvi2 :%.2f\n",cv1,cv2);
    return 0;
}