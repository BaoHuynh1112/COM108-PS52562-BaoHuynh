#include <stdio.h>

void tinhTBtong (){
    int min ,max;

    int tong =0 ;
    int bienDem=0;
    float trungBinh;

    printf ("BAN DANG DUNG CHUC NANG TINH TBC\n");

    printf("Nhap so Min:  ");
    scanf ("%d",&min);
    
    printf("Nhap so Max;  ");
    scanf ("%d",&max);

    if(min > max){
        printf ("Khong Co So Nao Chia Het Cho 2\n");
        return ;
    } 
    for (int  i = min ; i <= max; i++)
    {
        if (i%2 ==0 ){
            tong=tong+i;
            bienDem++;
        }
    }
    if (bienDem==0){
        printf ("Khong co so nao chia het cho 2 ");
    }else{
        trungBinh=(float)tong/bienDem;
    }
    
    printf ("Tong cac so chia het cho 2 la: %d \n",tong);
    printf ("So luong cac so chia het cho 2 la: %d \n",bienDem);
    printf ("Trung binh cong cua 2 so la: %.2f \n",trungBinh);

    
}

void KTsonuyento (){
    int x ;

    printf ("BAN DUNG CHUC NANG KIEM TRA SO NGUYEN TO\n");

    printf ("Hay So Bat Ky: ");
    scanf ("%d",&x);

    int n = x ;
    int soNguyento=1;
    if (n < 2 ){
        soNguyento=0;
    }else{
        for (int i = 2; i <n  ; i++)
        {
            if (n %i ==0){
                soNguyento==0;
                break;
            }
        }
        
    }
    if (soNguyento==1){
        printf ("%d la so nguyen to \n",n);
    }else{
        printf ("%d khong phai la so nguyen to \n",n);
    }

    

}

void KTsochinhphuong (){
    int n;
    int sochinhphuong =0 ;

    printf ("Hay Nhap 1 Con So: ");
    scanf("%d",&n);

    if (n<0)
    {
        sochinhphuong=0;

    }else{
        for (int  i = 0; i <= n; i++)
        {
            if (i*i == n)
            {
                sochinhphuong=1;
                break;
            }
            
        }
        
    }
    
    if (sochinhphuong==1){
        printf ("%d la so chinh phuong \n",n);

    }else{
        printf("%d khong phai la so chinh phuong \n",n);
    }

}

int main (){
    int luaChon;

    do
    {
        printf ("\n======= MENU CHUONG TRINH 4 ========\n");        
        printf ("1. Tinh trung binh tong cac so chia het cho 2 \n");        
        printf ("2. Kiem tra So nguyen to   \n");        
        printf ("3. Kiem tra So chinh phuong   \n");        
        printf ("4. Thoat chuong trinh      \n");        
        printf (">> Xin moi chon chuc nang (1-4): ");       
        scanf ("%d",&luaChon);
        
    switch (luaChon)
    {
    case 1:
        tinhTBtong();
        break;
    
    case 2:
        KTsonuyento();
        break;
    case 3:
        KTsochinhphuong();
        break;

    case 4:
        printf (" Cam On Ban Da Su Dung ");
        break;

    
    default:
        printf ("Ban Da Nhap Sai. Vui Long Nhap Tu (1>4)\n");
        break;
    }

    } while (luaChon !=4);
    

    return 0;
}