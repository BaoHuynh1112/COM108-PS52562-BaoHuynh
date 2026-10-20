// Chức năng 1 - Tính trung bình cộng các số chia hết cho 2
// Lọc các số chia hết cho 2 (i % 2 == 0).
// Tính tổng và đếm số lượng các số thỏa mãn.
// Tính trung bình cộng: trungBinh = tong / bienDem.

// Chức năng 2 - Kiểm tra số nguyên tố
// Nếu x < 2: không phải số nguyên tố.
// Nếu x >= 2: dùng vòng lặp for duyệt i từ 2 đến x - 1 (hoặc đến sqrt(x)). Nếu có x % i == 0 thì x không phải số nguyên tố;
// nếu duyệt hết mà không chia hết cho số nào thì x là số nguyên tố.

// Chức năng 3 - Kiểm tra số chính phương
// Dùng vòng lặp for chạy i từ 1 đến x.
// Nếu phát hiện i * i == x thì kết luận x là số chính phương và dùng break để thoát vòng lặp sớm.
// // Nếu vòng lặp kết thúc mà không thỏa điều kiện thì x không phải số chính phương.

#include <stdio.h>

void chucNang1()
{
    int min;
    int max;
    int tong = 0;
    int bienDiem = 0;
    float trungBinh;

    printf("Ban Dang Dung Chuc Nang Tinh TBC Cac So Chia Het Cho 2\n");

    do
    {
        printf("Nhap so min:");
        scanf("%d", &min);

        printf("Nhap so max:");
        scanf("%d", &max);

        if (min > max)
        {
            printf("Vui long nhap lai Min khong the lon hon Max\n");
        }
    }while (min > max);
        
    
    for (int i = min ; i < max; i++)
    {
        if (i %2 ==0 )
        {
            tong=tong+i;
            bienDiem++;
        }
        
    }
    


    if (bienDiem == 0)
    {
        printf("Khong co so nao chia het cho 2 \n");
    }

    trungBinh = (float)tong / bienDiem;

    printf("Tong cac so chia het duoc cho 2 la : %d \n", tong);
    printf("So luong cac so chia het duoc cho 2 la : %d \n", bienDiem);
    printf("Trung binh cong cac so chia het cho 2 la : %.2f \n",trungBinh);
}

void chucNang2(){
    int x ;
    int n;
    int soNguyento=1;

    printf("Ban Dang Dung Chuc Nang Kiem Tra So Chinh Phuong\n");

    do
    {
        printf ("Nhap so vao day:");
        scanf ("%d",&x);


        if (n<2)
        {
            printf ("%d khong phai la so nguyen to \n");
        }
        
    } while (n<2);

    n=x;

    for (int i = 2; i < n; i++)
    {
        if(n % i ==0){
            soNguyento=0;
            break;
        }
    }
    
    if (soNguyento==0)
    {
        printf("%d khong phai la so nguyen to\n",n);

    }
    
    if (soNguyento==1)
    {
        printf ("%d la so nguyen to \n",n);

    }
    
    
}

void chucNang3(){
    int n;
    int soChinhphuong=0;
    printf("Ban Dang Dung Chuc Nang Kiem Tra So Chinh Phuong\n");


    do
    {
        printf ("Hay Nhap So De Kiem Tra:");
        scanf ("%d",&n);

        if (n<0)
        {
            printf ("So Nhap Khong Hop Le .Vui long nhap lai\n");
        }
        
    } while (n<0);
    
    for (int  i = 0; i < n; i++)
    {
        if (i*i==n)
        {
            soChinhphuong=1;
            break;
        }
        
    }
    
    if (soChinhphuong==1)
    {
        printf ("%d la so chinh phuong \n",n);

    }else 
    {
        printf ("%d khong phai la so chinh phuong \n",n);
    }
    
    
}





int main()
{
    int luaChon;

    do
    {
        printf("\n ==== MENU CHUC NANG ====\n");
        printf("1.Tinh Trung Cong Cac So Chia Het Cho 2 \n");
        printf("2.Kiem Tra So Nguyen To\n");
        printf("3.Kiem Tra So Chinh Phuong\n");
        printf("4.Thoat Chuong Trinh\n");

        printf("Hay nhap lua chon :");
        scanf("%d", &luaChon);

        switch (luaChon)
        {
        case 1:
            chucNang1();
            break;

        case 2:
            chucNang2();
            break;

        case 3:
            chucNang3();
            break;

        case 4:
            printf("Cam On Ban Da Su Dung Chuong Trinh");
            break;

        default:
            printf("Chuc Nang Nay Hien Tai Chua Co .Vui Long Chon Lai\n");
            break;
        }

    } while (luaChon != 4);

    return 0;
}