#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char mssv[50];
    char hoTen[100];
    char nganhHoc[50];
    float diemTB;
};

struct SinhVien ds[50];
int soSinhVien = 0;

void xoaBodem()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}




void nhapXuatDSSV()
{

    do
    {
        printf("Nhap so luong sinh vien cho danh sach: ");
        scanf("%d", &soSinhVien);

        if (soSinhVien < 0 || soSinhVien > 50)
        {
            printf("So luong sinh vien khong hop le \n");
        }

        xoaBodem();

    } while (soSinhVien < 0 || soSinhVien > 50);

    for (int i = 0; i < soSinhVien; i++)
    {

        printf("Sinh vien so thu tu %d\n ", i + 1);

        printf("Nhap Ma So Sinh Vien:");
        fgets(ds[i].mssv, 50, stdin);
        ds[i].mssv[strcspn(ds[i].mssv, "\n")] = '\0';

        printf("Nhap Ho Ten Sinh Vien:");
        fgets(ds[i].hoTen, 100, stdin);
        ds[i].hoTen[strcspn(ds[i].hoTen, "\n")] = '\0';

        printf("Nhap Nganh Hoc :");
        fgets(ds[i].nganhHoc, 50, stdin);
        ds[i].nganhHoc[strcspn(ds[i].nganhHoc, "\n")] = '\0';

        do
        {
            printf("Nhap Diem Trung Binh Cua Sinh Vien:");
            scanf("%f", &ds[i].diemTB);
            xoaBodem();

            if (ds[i].diemTB < 0 || ds[i].diemTB > 10)
            {
                printf("Diem nhap cua sinh vien khong hop le . Vui long nhap lai\n");
            }

        } while (ds[i].diemTB < 0 || ds[i].diemTB > 10);
    }

    printf("\n==== DANH SACH SINH VIEN ====\n");

    for (int i = 0; i < soSinhVien; i++)
    {
        printf("Sinh vien so thu tu %d\n ", i + 1);
        printf("Ma So Sinh Vien %s\n", ds[i].mssv);
        printf("Ho Va Ten Sinh Vien %s\n", ds[i].hoTen);
        printf("Nganh Hoc: %s \n", ds[i].nganhHoc);
        printf("Diem Trung Binh %.2f\n", ds[i].diemTB);
    }
}

void sapXepSV()
{
    if (soSinhVien == 0)
    {
        printf("Danh Sach Sinh Vien Hien Tai Chua Co\n ");
        printf("Vui long dien vao danh sach sinh vien\n");

        nhapXuatDSSV();
    }

    struct SinhVien svTemp;

    for (int i = 0; i < soSinhVien - 1; i++)
    {
        for (int j = i + 1; j < soSinhVien; j++)
        {
            if (ds[i].diemTB > ds[j].diemTB)
            {
                svTemp = ds[i];
                ds[i] = ds[j];
                ds[j] = svTemp;
            }
        }
    }
    printf("Danh Sach Sinh Vien Sau Khi Sap Xep \n");

    for (int i = 0; i < soSinhVien; i++)
    {
        printf("So thu tu sinh vien: %d\n", i + 1);
        printf("Ma So Sinh Vien %s\n", ds[i].mssv);
        printf("Ho va Ten sinh vien: %s\n", ds[i].hoTen);
        printf("Nganh Hoc:  %s\n", ds[i].nganhHoc);
        printf("Diem Trung Binh: %.2f\n", ds[i].diemTB);
    }
}

void timKiemMSSV()
{
    if (soSinhVien == 0)
    {
        printf("Danh Sach Sinh Vien Hien Tai Chua Co\n ");
        printf("Vui long dien vao danh sach sinh vien\n");

        nhapXuatDSSV();
    }

    char findMSSV[50];
    int foundMSSV = 0;

    do
    {
        printf("Nhap Ma So Sinh Vien Ban Can Tim: ");
        fgets(findMSSV, 50, stdin);
        findMSSV[strcspn(findMSSV, "\n")] = '\0';

        for (int i = 0; i < soSinhVien; i++)
        {
            if (strcmp(findMSSV, ds[i].mssv) == 0)
            {
                printf("\n Tim Thay Sinh Vien \n ");
                printf("MSSV      : %s \n", ds[i].mssv);
                printf("Ho Va Ten : %s \n", ds[i].hoTen);
                printf("Nganh Hoc : %s \n", ds[i].nganhHoc);
                printf("Diem      : %.2f \n", ds[i].diemTB);

                foundMSSV = 1;
                return;
            }
        }

        if (foundMSSV==0)
        {
            printf("Khong Tim Thay Sinh Vien Co Ma :%s\n", findMSSV);
            printf("Vui Long Nhap Lai \n");
        }
    } while (foundMSSV == 0);
}



void xetHocBong()
{
    // Kiem tra danh sach sinh vien
    if (soSinhVien == 0)
    {
        printf("Danh sach sinh vien hien tai chua co!\n");
        printf("Vui long nhap danh sach sinh vien.\n");

        nhapXuatDSSV();
    }

    int coHocBong = 0;

    
    for (int i = 0; i < soSinhVien; i++)
    {
        
        if (ds[i].diemTB >= 8.0) // xet tu sv1  ma vong dau i va j = 0 nen vong j tam thoi chua chay  // vong j se chay tu vong i = 1 
        {
            int dsIn = 0; // danh sach in hoc bong

            // Kiem tra nganh da duoc in chua
            for (int j = 0; j < i; j++) 
            {
                if (ds[j].diemTB >= 8.0 &&
                    strcmp(ds[i].nganhHoc, ds[j].nganhHoc) == 0)
                {
                    dsIn = 1;
                    break;
                }
            }

            // Neu nganh chua duoc in
            if (dsIn == 0)
            {
                printf("\nNganh: %s\n", ds[i].nganhHoc);
                coHocBong = 1;

                // Tim tat ca sinh vien dat hoc bong cua nganh
                for (int k = 0; k < soSinhVien; k++)
                {
                    if (ds[k].diemTB >= 8.0 &&
                        strcmp(ds[i].nganhHoc, ds[k].nganhHoc) == 0)
                    {
                        printf("- %s - %s - Diem TB: %.2f\n",ds[k].mssv,ds[k].hoTen,ds[k].diemTB);
                        
                    }
                }
            }
        }
    }

    // Neu khong ai dat du diem thi hoc bong =0
    if (coHocBong == 0)
    {
        printf("Khong co sinh vien nao dat hoc bong.\n");
    }
}



int main()
{
    int luaChon;

    do
    {
        printf("\n==== MENU CHUONG TRINH ====\n");
        printf(" 1. Nhap va xuat danh sach sinh vien\n");
        printf(" 2. Sap xep sinh vien theo diem tang dan\n");
        printf(" 3. Tim kiem sinh vien theo MSSV\n");
        printf(" 4. Xuat sinh vien nhan hoc bong theo nganh\n");
        printf(" 5. Thoat chuong trinh  \n");

        printf(">> Nhap Chuc Nang Ban Muon: ");
        scanf(" %d", &luaChon);

        if (luaChon < 0)
        {
            printf("Lua chon khong hop le. Vui long nhap lai \n");
            continue;
        }

        switch (luaChon)
        {
        case 1:
            printf("<< 1. Nhap va xuat danh sach sinh vien >>\n ");
            nhapXuatDSSV();
            break;

        case 2:
            printf("<< 2. Sap xep sinh vien theo diem tang dan  >>\n");
            sapXepSV();
            break;

        case 3:
            printf("<< 3. Tim kiem sinh vien theo MSSV >>\n");
            timKiemMSSV();
            break;

        case 4:
            printf("<< 4. Xuat sinh vien nhan hoc bong theo nganh >>\n");
            xetHocBong();
            break;

        case 5:
            printf("<< Cam On Ban Da Su Dung >>\n");
            break;

        default:
            printf("Chuc nang nay hien tai chua co . Vui long chon lai\n");
            break;
        }

    } while (luaChon != 5);

    return 0;
}
