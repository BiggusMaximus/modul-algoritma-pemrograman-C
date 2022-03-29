#include <stdio.h>
/*masukin #*/
int main()
{
    int pilih;
    do
    {
        printf("DAFTAR MENU MAKANAN \n");
        printf("------------------------------\n");
        printf("1.\tPaket Ayam Goreng\n");
        printf("2.\tPaket Ayam Bakar\n");
        printf("3.\tPaket Ayam Geprek\n");
        printf("4.\tPaket Ayam Penyet\n");
        printf("\nMasukkan pilihan Anda (0=selesai): ");
        scanf("%d", &pilih);
        switch (pilih)
        {
        case 1:
            printf("Harga Paket Ayam Goreng Rp20.000\n");
            break;
        case 2:
            printf("Harga Paket Ayam Bakar Rp20.000\n");
            break;
        case 3:
            printf("Harga Paket Ayam Bakar Rp20.000\n");
            break;
        case 4:
            printf("Harga Paket Ayam Bakar Rp20.000\n");
            break;
        case 0:
            printf("Selesai\n");
            break;
        default:
            printf("Pilihan hanya 1 - 4, pilih 0 jika ingin selesai");
            break;
        }
    } while (pilih != 0);
    return 0;
}