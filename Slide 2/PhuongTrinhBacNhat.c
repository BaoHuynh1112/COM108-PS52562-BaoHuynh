#include <stdio.h>
#include <math.h>

void tinhHocLuc(){
    float diem;
    printf ("Ban Dang Dung Chuc Nang Tinh Hoc Luc\n");
    printf ("Hay nhap diem: ");

    while (scanf ("%f",&diem) !=1 || diem <0|| diem >10){
        printf ("Diem So cua ban khong hop le . Vui Long Nhap Lai\n");
        while (getchar()!= '\n');

    }

    if (diem >= 9){
        printf ("Hoc Sinh Xep Loai Xuat Sac\n");
    }
    else if (diem >= 8 )
    {
        printf ("Hoc Sinh Xep Loai Gioi\n");

    }
    else if (diem >= 6.5 )
    {
        printf ("Hoc Sinh Xep Loai Kha\n");

    }
    else if (diem >= 5)
    {
        printf("Hoc Sinh Xep Loai Trung Binh\n");
        
    }
    else if (diem < 5)
    {
        printf ("Hoc Sinh Xep Loai Yeu\n");

    }
}
    
    
    
    


void giaiPTBacHai(){
    printf ("Ban Dang Dung Chuc Nang giai PT Bac Hai\n");

    float a,b,c,x,x1,x2,Delta;
    printf ("Nhap a,b,c,");
    scanf ("%f%f%f",&a,&b,&c);

    if (a==0){
        if (b==0){
            if (c==0){
                printf ("Phuong Trinh Vo So Nghiem \n");
            }else {
                printf ("Phuong Trinh Vo Nghiem\n");
            }
        }else {
            x=-c/b;
            printf ("Phuong Trinh Co Nghiem X %f",x);
        }
    }else{
        Delta = b*b - 4*a*c;
        if(Delta <0){
            printf ("Phuong Trinh Vo Nghiem\n");
        }else if (Delta == 0){
            x = -b / (2*a);
            printf ("Phuong Trinh Nghiem X %.2f",x);
            
        }else if (Delta >0)
        {
            x1 = (-b + sqrt(Delta)) / (2*a);
            x2 = (-b - sqrt(Delta)) / (2*a);
            printf ("Phuong Trinh co 2 Nghiem Phan Biet x1=%.2f x2=%.2f",x1,x2);
        }
    }
}

void tinhTienDien(){
// 1	0 – 50	1.678
// 2	51 – 100	1.734
// 3	101 – 200	2.014
// 4	201 – 300	2.536
// 5	301 – 400	2.834
// 6	Từ 401 trở lên	2.927
    float soKw;
    float Thanhtien;
    float b1=1678;
    float b2=1734;
    float b3=2014;
    float b4=2536;
    float b5=2834;
    float b6=2927;
    
    printf ("Ban Dang Dung Chuc Nang Tinh tien dien\n");
    printf ("Hay Nhap So Kw tieu thu : ");
    while (scanf ("%f",&soKw) !=1 || soKw <0 ){
        printf (" Ban Da Nhap Sai So Kw . Vui Long Nhap Lai (soKw >= 0)\n");
        while (getchar()!='\n');

    }
    
    if(soKw <=50){
        Thanhtien= soKw*b1;

    }else if (soKw <=100)
    {
        Thanhtien=50*b1+(soKw-50)*b2;

    }else if (soKw <=200)
    {
        Thanhtien=50*b1+50*b2+(soKw-100)*b3;

    }else if (soKw <=300)
    {
        Thanhtien=50*b1+50*b2+100*b3+(soKw-200)*b4;

    }else if (soKw <=400)
    {
        Thanhtien=50*b1+50*b2+100*b3+100*b4+(soKw-300)*b5;

    }else 
    {
        Thanhtien=50*b1+50*b2+100*b3+100*b4+100*b5+(soKw-400)*b6;
    }
    
    printf (" Vay So Tien Phai Tra Cho %.1f Kwh La %.2f VND",soKw,Thanhtien);
    
    
    
    


}

int main (){
    int luaChon;
    do{
        printf ("\n======= MENU CHUONG TRINH ========\n");
        printf ("1. Chuc nang tinh hoc luc \n");
        printf ("2. Chuc nang giai PT bac hai \n");
        printf ("3. Chuc nang tinh tien dien\n ");
        printf ("0. De thoat chuong trinh \n");
        printf ("Hay Chon Chuong trinh: ");

        if (scanf("%d",&luaChon) !=1)
        {
            printf ("Du Lieu Ban Nhap Chua Hop Le.Vui long nhap lai\n");
            while (getchar() != '\n');
            continue;
        }
        

        switch (luaChon)
        {
        case 0 :
            printf ("Cam On Ban Da Su Dung");
            break;

        case 1 :
            tinhHocLuc();
            break;
            
        case 2 :
            giaiPTBacHai();
            break;
        case 3 :
            tinhTienDien();
            break;
        default:
            printf ("Chuc Nang Nay Chua Co. Vui Long Chon Lai\n");
            break;
        }
        

    }while (luaChon !=0);
    

    return 0;
}