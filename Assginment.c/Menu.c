#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct SinhVien
{
    char ten[50];
    float diem;
};


void chucNang1(){
    double x;

    printf ("Ban Dang Dung Chuc Nang Kiem Tra So\n");
    printf ("Hay Nhap 1 Con So : ");
    scanf ("%lf",&x);

    if (x==(int)x){
        printf ("So %.2lf la so nguyen \n",x);

    }else{
        printf ("So %.2lf khong phai la so nguyen \n",x);
    }

    int n = (int )x; //songuyento chi chia cho dc moi 1 va chinh no
    int soNguyento = 1;
    if ( n < 2 ){
        soNguyento = 0;
    }else {
        for (int i = 2 ; i*i <= n; i++){
            if (n % i == 0 ){
            soNguyento = 0;
            break;
        }
        
    }
    }
    if (soNguyento == 1){
        printf ("%d la so nguyen to \n",n);

    }else{
        printf ("%d khong phai la so nguyen to \n",n);
    }

    if (n >=0){
        int sq = (int)sqrt(n);
        
        if (sq * sq == n){
            printf ("%d la so chinh phuong \n",n);

        }else{
            printf ("%d khong phai la so chinh phuong \n",n);
        }
    }
}

void chucNang2(){
    int x,y;
    
    printf ("Ban Dang Dung Chuc Nang Tim UCLN va BCNN\n");
    printf ("Nhap so x va y : ");
    scanf ("%d %d",&x,&y);

    int a = abs (x);
    int b = abs (y);
    
    while (b != 0){
        int sodu = a%b ;
        a=b;
        b=sodu;
    }

    // tim ra UCLN


    int ucln = a;

    int bcnn;

    // neu 1 trong 2 co ket qua = 0 thi bcnn -> 0 
    if (x==0 || y==0){
        bcnn=0;

    }else{
        bcnn = abs(x*y)/ucln;

    }
    printf ("UCLN cua %d va %d la : %d \n",x,y,ucln);
    printf ("BCNN cua %d va %d la : %d \n",x,y,bcnn);

}

void chucNang3(){
    int gioBatdau;
    int gioNghi;
    
    printf ("Nhap Gio Bat Dau Hat: ");
    scanf ("%d",&gioBatdau);
    
    printf ("Nhap Gio Ket Thuc: ");
    scanf ("%d",&gioNghi);
    
    int gioHat= gioNghi-gioBatdau;
    if (gioBatdau < 12 || gioNghi > 23|| gioNghi <= gioBatdau){
        printf ("Nhap Thoi Gian Khong Hop Le (Chi Tu >= 12H , <= 23H )\n");
        return ;
    }
    float giaGiohat = 150000;
    
    float GiaTien= giaGiohat*gioHat;
    // if (gioBatdau >= gioNghi ){
    //     printf ("Nhap Thoi Gian Khong Hop Le Vi Gio Hat < Gio Nghi\n");
    //     return ;
    // }

    if (gioHat <= 3){
        GiaTien= (gioHat*giaGiohat);
    }else{
        GiaTien= (3*giaGiohat+(gioHat-3)*giaGiohat*0.7); 
    }

    if(gioBatdau >=14 && gioBatdau <=17){
        GiaTien= GiaTien*0.9;

    }
    printf ("So Gio Hat : %d ",gioHat);
    printf ("So Tien Can Thanh Toan : %.2f ",GiaTien);
}

void chucNang4(){
    int soKW;
    float b1=1678;
    float b2=1734;
    float b3=2014;
    float b4=2536;
    float b5=2834;
    float b6=2927;

    float thanhTien;

    printf ("Nhap so Kw da dung: ");
    scanf("%d",&soKW);

    if (soKW <= 50 ){
        thanhTien= 50*b1 ;

    }else if (soKW <= 100)
    {
        thanhTien= 50*b1+(soKW-50)*b2;

    }else if (soKW <= 200)
    {
        thanhTien=50*b1+50*b2+(soKW-100)*b3;

    }else if (soKW <= 300)
    {
        thanhTien=50*b1+50*b2+100*b3+(soKW-200)*b4;

    }else if (soKW <= 400)
    {
        thanhTien= 50*b1+50*b2+100*b3+100*b4+(soKW-300)*b5;
        
    }else {
        thanhTien=50*b1+50*b2+100*b3+100*b4+100*b5+(soKW-400)*b6;
    }
    
    printf ("Tong Tien Thanh Toan Cho %d Kw la %.2f VND",soKW,thanhTien );
    
    
    

}

void chucNang5(){
    int soTien;
    int to500;
    int to200;
    int to100;
    int to50;
    int to20;
    int to10;
    int to5;
    int to2;
    int to1;

    printf ("Nhap so tien ban dang co:");
    scanf ("%d",&soTien);

    if(soTien <=0){
        printf ("Menh Gia Tien Khong Hop Le\n");
        return ;
    }

    to500=soTien/500;
    soTien=soTien%500;
    
    to200=soTien/200;
    soTien=soTien%200;

    to100=soTien/100;
    soTien=soTien%100;

    to50=soTien/50;
    soTien=soTien%50;

    to20=soTien/20;
    soTien=soTien%20;

    to10=soTien/10;
    soTien=soTien%10;

    to5=soTien/5;
    soTien=soTien%5;
    
    to2=soTien/2;
    soTien=soTien%2;

    to1=soTien;

    printf("So to 500: %d\n", to500);
    printf("So to 200: %d\n", to200);
    printf("So to 100: %d\n", to100);
    printf("So to 50 : %d\n", to50);
    printf("So to 20 : %d\n", to20);
    printf("So to 10 : %d\n", to10);
    printf("So to 5  : %d\n", to5);
    printf("So to 2  : %d\n", to2);
    printf("So to 1  : %d\n", to1);


}

void chucNang6(){
    float tienVay;
    float tienGocmoithang;
    float tienLai;
    float tienPhaitra;
    float duNo;

    printf ("BAN DANG DUNG CHUC NANG TINH SO TIEN VAY\n");

    printf ("Nhap so tien ban muon vay: ");
    scanf ("%f",&tienVay);

    if (tienVay <=0){
        printf("So Tien Nhap Vay Khong Hop Le\n");
        return ;

    }

    tienGocmoithang=tienVay/12;
    
    duNo=tienVay;

    printf("\n%-10s %-15s %-15s %-18s %-15s\n",
            "Thang" , 
            "Tien Lai" , 
            "Tien Goc " , 
            "Tien Phai Tra" , 
            "Du No Phai Tra");


    for (int thang = 1 ; thang <= 12 ; thang++)
    {
        tienLai=duNo*0.05;
        tienPhaitra = tienGocmoithang+tienLai;
        duNo=duNo-tienGocmoithang;
        // printf("\n%-10s %-15s %-15s %-18s %-15s\n",
        //     "Thang" , 
        //     "Tien Lai" , 
        //     "Tien Goc Moi Thang" , 
        //     "Tien Phai Tra" , 
        //     "Du No Phai Tra");

        printf ("%-10d %-15.0f %-15.0f %-18.0f %-15.0f \n",
            thang,
            tienLai,
            tienGocmoithang,
            tienPhaitra,
            duNo);
        

    }
    
}

void chucNang7(){
    float giaXe;

    float tienTratrc;
    
    float tienVay;

    float tyLetratrc=0.2;

    float tyLeVay=0.8;

    float laiSuatnam=0.072;

    float laiSuatthang=laiSuatnam/12;

    float soTiengocmoithang;  // la so tien goc moi thang tra dan theo thang 
    
    float tienLai; // la so tien lai moi thang phai tra + so tien goc moi thang 

    float tienPhaitra; // la so tien phai tra bao gom Tien Goc + Tien Lai -> Tien phai tra moi thang

    float duNo;

    int soNam;

    int soThang;


    printf ("BAN DANG DUNG CHUC NANG VAY TIEN MUA XE\n ");
    
    
    
    printf ("Nhap So Tien Xe Ban Muon Mua: ");
    scanf ("%f",&giaXe);

    if (giaXe <= 0 ){
        printf ("So Tien Ban Nhap Khong Hop Le \n");
        return ;
    }
    
    printf ("Nhap Thoi Han Vay Mua Xe : ");
    scanf ("%d",&soNam);

    soThang=soNam*12;

    tienTratrc=giaXe*tyLetratrc;

    tienVay=giaXe*tyLeVay;

    soTiengocmoithang=tienVay/soThang;

    duNo= tienVay;

    
    printf ("\n===== THONG TIN KHOAN VAY ===== \n");

    printf ("Gia Xe : %.0f\n",giaXe);

    printf ("So Tien Ban Da Tra Truoc (20%%): %.0f VND\n",tienTratrc);

    printf ("So Tien Vay Ngan Hang (80%%): %.0f VND \n",tienVay);

    printf ("Lai Suat Vay 1 Nam: %.1f%% \n",laiSuatnam*100);

    printf ("Thoi Han Vay: %d Nam = %d Thang \n",soNam, soThang);

    printf ("\n%-10s %-15s %-22s %-18s  %-15s \n","Thang ", "Tien Lai" , "Tien Goc Moi Thang", "Tien Phai Tra", "Du No Con Lai");

    for (int Thang = 1; Thang <= soThang; Thang++)

    {
        tienLai=laiSuatthang*duNo;

        tienPhaitra=soTiengocmoithang+tienLai;

        duNo=duNo-soTiengocmoithang;

        printf ("%-10d %-15.0f %-22.0f %-18.0f %-15.0f \n",Thang,tienLai,soTiengocmoithang,tienPhaitra,duNo);
    }
    

}

void chucNang8(){


    printf ("BAN DANG DUNG CHUC NANG SAP XEP SINH VIEN \n");

    struct SinhVien ds[100];
    int soSinhVien;

    printf("Nhap So Luong Sinh Vien: ");
    scanf ("%d",&soSinhVien);
    getchar();

    for (int i = 0; i < soSinhVien; i++)
    {
        printf ("So Thu Tu Sinh Vien %d  \n",i+1);
        printf("Nhap Ho Ten Sinh Vien:");
        fgets(ds[i].ten,sizeof(ds[i].ten),stdin);

        ds[i].ten[strcspn(ds[i].ten,"\n")]='\0';

        printf ("Nhap Diem Sinh Vien: ");
        scanf("%f",&ds[i].diem);

        getchar();

    }

    printf ("\n=====DANH SACH SINH VIEN=====\n");
    for (int i = 0; i < soSinhVien; i++)
    {
        printf ("%s - %.2f\n",ds[i].ten,ds[i].diem );
    }
    

    
        
    
    
    
}

void chucNang9(){
    int soPlayer1;
    int soPlayer2;

    int soMay1;
    int soMay2;

    int soTrung=0;

    printf("BAN DANG DUNG CHUC NANG SO XO MAY MAN\n");

    printf ("Hay Chon So Tu 1 -> 15\n");

    printf("Nhap so thu nhat: ");
    scanf("%d",&soPlayer1);

    printf("Nhap so thu hai: ");
    scanf("%d",&soPlayer2);

    if (soPlayer1 < 1 || soPlayer1 > 15 || soPlayer2 < 1 || soPlayer2 > 15)
    {
        printf ("So Ban Chon Khong Hop Le. Vui Long Chon Lai\n");
        return ;

    }
    
    if (soPlayer1 == soPlayer2)
    {
        printf ("So Chon Cua 2 Nguoi Choi Phai Khac Nhau. VUI LONG CHON LAI\n");
    }

    srand(time(NULL));

    soMay1=rand()%15 +1;

    soMay2=rand()%15 +1;
    
    while (soMay1 == soMay2)
    {
        soMay2 = rand()%15 +1 ;
    }
    printf  ("Hai So Trung Thuong La: %d va %d ", soMay1,soMay2);
    if (soPlayer1==soMay1||soPlayer1==soMay2){
        soTrung++;
    }
    if (soPlayer2==soMay1||soPlayer2==soMay2){
        soTrung++;
    }
    if (soTrung==0){
        printf ("Chuc Ban May Man Lan Sau !!! \n");
    }else if (soTrung == 1)
    {
        printf ("Chuc Mung Ban Da Trung 1 So \n");
    }else
    {
        printf ("Chuc Mung Ban Da Trung 2 So \n");
    }
    
}

void chucNang10(){
    int tu1;
    int mau1;

    int tu2;
    int mau2;

    int tuTong,mauTong;

    int tuHieu,mauHieu;

    int tuTich,mauTich;

    int tuThuong,mauThuong;


    printf ("Nhap tu so cua phan so thu nhat:");
    scanf ("%d",&tu1);

    printf ("Nhap mau so cua phan so thu nhat: ");
    scanf ("%d", &mau1);


    printf ("Nhap tu so cua phan so thu hai:");
    scanf ("%d",&tu2);

    printf ("Nhap mau so cua phan so thu hai: ");
    scanf ("%d", &mau2);

    if (mau1 == 0 || mau2 == 0 ){
        printf ("Mau So Khong Duoc = 0 \n");
        return ;
    }

    //Tinh Tong
    tuTong=(tu1*mau2)+(tu2*mau1);
    mauTong=mau1*mau2;
    
    //Tinh Hieu
    tuHieu=(tu1*mau2)-(tu2*mau1);
    mauHieu=mau1*mau2;
    
    //Tinh Tich
    tuTich=tu1*tu2;
    mauTich=mau1*mau2;
    
    printf ("Tong cua 2 phan so la : %d/%d \n",tuTong,mauTong);
    printf ("Hieu cua 2 phan so la : %d/%d \n",tuHieu,mauHieu);
    printf ("Tich cua 2 phan so la : %d/%d \n",tuTich,mauTich);

    // Kiem tra phep tinh thuong

    if (tu2==0){
        printf ("Phep Chia Phan So Khong Hop Le\n");
    }else{
        tuThuong=tu1*mau2;
        mauThuong=mau1*tu2;
    }

    printf ("Thuong cua 2 phan so la : %d/%d",tuThuong,mauThuong);







}


int main(){
    int luaChon;

    do
    {
        printf ("\n===== MENU CHUC NANG =====\n");
        printf("Vui Long Chon Chuc Nang: \n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim UCLN va BCNN cua 2 so\n");
        printf("3. Tinh tien quan Karaoke\n");
        printf("4. Tinh tien dien\n");
        printf("5. Doi tien\n");
        printf("6. Tinh lai suat vay ngan hang tra gop\n");
        printf("7. Tinh vay tien mua xe\n");
        printf("8. Sap xep thong tin sinh vien\n");
        printf("9. Game FPoly-Lott (2/15)\n");
        printf("10. Tinh toan phan so\n");
        printf("0. Thoat chuong trinh\n");

        printf("Vui Long Chon Chuc Nang: ");
        scanf ("%d",&luaChon);


        switch (luaChon)
        {
        case 0:
            printf ("Cam On Ban Da Su Dung ");
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
        
        case 4:
            chucNang4();
            break;
        
        case 5:
            chucNang5();
            break;
        
        case 6:
            chucNang6();
            break;
        
        case 7:
            chucNang7();
            break;
        
        case 8:
            chucNang8();
            break;
        
        case 9:
            chucNang9();
            break;
        
        case 10:
            chucNang10();
            break;
        
        default:
            printf ("Chuc Nang Nay Hien Tai Chua Co. Vui Long Chon Tu 0 -> 10");
            break;
        }
    } while (luaChon != 0 );
    
    return 0;

}