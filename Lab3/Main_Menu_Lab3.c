// // Điểm ≥ 9.0: Xuất sắc.
// Từ 8.0 đến dưới 9.0: Giỏi.
// Từ 6.5 đến dưới 8.0: Khá.
// Từ 5.0 đến dưới 6.5: Trung bình.
// Từ 3.5 đến dưới 5.0: Yếu.
// // Dưới 3.5: Kém.


// Trường hợp 1: a = 0 (phương trình trở thành bx + c = 0):
// b = 0 và c = 0: vô số nghiệm.
// b = 0 và c ≠ 0: vô nghiệm.
// b ≠ 0: nghiệm duy nhất x = -c / b.
// Trường hợp 2: a ≠ 0, tính Delta = b*b - 4*a*c:
// Delta < 0: vô nghiệm.
// Delta = 0: nghiệm kép x = -b / (2*a).
// Delta > 0: hai nghiệm phân biệt x1 = (-b + sqrt(Delta)) / (2*a), x2 = (-b - sqrt(Delta)) / (2*a).

// 1	0 – 50	1.678
// 2	51 – 100	1.734
// 3	101 – 200	2.014
// 4	201 – 300	2.536
// 5	301 – 400	2.834
// 6	Từ 401 trở lên	2.927

#include <stdio.h>
#include <math.h>

void chucNang1(){
    float diem;
    do
    {
        printf ("Ban Dang Dung Chuc Nang Tinh Hoc Luc Sinh Vien \n");
        printf ("Nhap Diem Cua Ban:");
        scanf ("%f",&diem);


        if(diem<0||diem>10){
            printf ("Diem Nhap Ban Khong Hop Le\n");
            continue;
        }
        if (diem>=9)
        {
            printf ("Hoc Sinh Xep Loai Xuat Sac\n");

        }else if (diem >=8)
        {
            printf ("Hoc Sinh Xep Loai Gioi\n");

        }else if (diem>=6.5)
        {
            printf ("Hoc Sinh Xep Loai Kha\n");

        }else if (diem>=5)
        {
            printf ("Hoc Sinh Xep Loai Trung Binh\n");

        }else if (diem>=3.5)
        {
            printf ("Hoc Sinh Xep Loai Yeu\n");

        }else{
            printf ("Hoc Sinh Xep Loai Kem\n");
        }
        
        
        
        
        


    } while (diem <0 || diem >10);
    
    


}

void chucNang2(){
    float a,b,c;
    float x,x1,x2,Delta;

    printf("Nhap a b c: ");
    scanf ("%f %f %f", &a,&b,&c);

    if (a == 0 )
    {
        if(b==0){
            if (c==0){
                printf("Phuong trinh vo so nghiem\n");
            }else{
                printf ("Phuong trinh vo nghiem\n");
            }
        }else{
            x = -c / b;
            printf ("Phuong Trinh Co Nghiem X:%.1f ",x);
        }
    }else{
        Delta = b*b - 4*a*c;
        if (Delta <0)
        {
            printf("Phuong Trinh vo nghiem\n");
        }else if (Delta == 0 )
        {
            x = -b / (2*a);
            printf ("Phuong trinh co nghiem x:%.1f ",x);
        }else{
            x1 = (-b + sqrt(Delta)) / (2*a);
            x2 = (-b - sqrt(Delta)) / (2*a);

            printf("Puong trinh co 2 nghiem x1= %f  x2= %f",x1, x2);
        }
        
        
    }
    
}

void chucNang3(){
    float soKW;
    float thanhTien;

    float b1=1678;
    float b2=1734;
    float b3=2014;
    float b4=2546;
    float b5=2834;
    float b6=2927;

    do
    {
        printf ("Ban Dang Dung Chuc Nang Tinh Tien Dien\n");

        printf ("Nhap So Sokw");
        scanf ("%f",&soKW);

        if (soKW<=0)
        {
            printf ("So KW cua ban nhap khong hop le \n");
        }
        

        if (soKW<=50)
        {
            thanhTien=soKW*b1;

        }else if (soKW<=100)
        {
            thanhTien=50*b1+(soKW-50)*b2;

        }else if (soKW<=200)
        {
            thanhTien=50*b1+50*b2+(soKW-100)*b3;

        }else if (soKW<=300)
        {
            thanhTien=50*b1+50*b2+100*b3+(soKW-200)*b4;

        }else if (soKW<=400)
        {
            thanhTien=50*b1+50*b2+100*b3+100*b4+(soKW-300)*b5;

        }else{
            thanhTien=50*b1+50*b2+100*b3+100*b4+100*b5+(soKW-400)*b6;
        }
        
        printf ("Vay Thanh Tien Cho So %.1f KW Da Dung La %.1f VND",soKW,thanhTien);
        
        
        
        
    } while (soKW<=0);
    
}
int main (){
    int luaChon;


    do
    {
        printf ("\n=====MENU CHUONG TRINH =====\n");
        printf ("0.De Thoat Chuong Trinh\n");
        printf ("1.Dung Chuc Nang Tinh Hoc Luc Sinh Vien\n");
        printf ("2.Dung Chuc Nang Giai PT Bac Hai\n");
        printf ("3.Dung Chuc Nang Tinh Tien Dien\n");

        printf("Hay Nhap Chuc Nang Ban Muon: ");
        scanf("%d",&luaChon);

        switch (luaChon)
        {
        case 0:
            printf ("Cam On Ban Da Su Dung \n");
            break;
        
        case 1:
            chucNang1();
            break;
        
        case 2:
            chucNang2();
            break;
        
        case 3:
            chucNang3();
            break;
        

        default:
            printf ("Chuc Nang Nay Hien Tai Chua Co . Vui Long Chon Lai\n");
            break;
        }

    } while (luaChon !=0 );
    
    return 0;
}
