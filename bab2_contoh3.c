#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char nama[15], ket[50], kode;
    printf("Masukkan nama mahasiswa: ");
    scanf("%s", &nama);
    printf("Pilih kode Program Studi[A / B / C / D]  : ");
    kode = getche();

    switch (kode)
    {
    case 'A':
        strcpy(ket, "Program Studi Teknik Perkapalan");
        break;
    case 'B':
        strcpy(ket, "Program Studi Teknik Industri");
        break;
    case 'C':
        strcpy(ket, "Program Studi Teknik Mesin");
        break;
    case 'D':
        strcpy(ket, "Program Studi Teknik Elektro");
        break;
    case 'a':
        strcpy(ket, "Program Studi Teknik Perkapalan");
        break;
    case 'b':
        strcpy(ket, "Program Studi Teknik Industri");
        break;
    case 'c':
        strcpy(ket, "Program Studi Teknik Mesin");
        break;
    case 'd':
        strcpy(ket, "Program Studi Teknik Elektro");
        break;
    default:
        strcpy(ket, "Program Studi Tidak Ditemukan");
        break;
    }
    printf("\n\nNama Mahasiswa: %s \n", nama);
    printf("Kode Program Studi: %c \n", kode);
    printf("Nama Program Studi: %s \n", ket);
    getch();
    return 0;
}
