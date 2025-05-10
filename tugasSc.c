#include <stdio.h>

int main(){
    int airMineral, roti, miInstan;
    double totalBayar;
    char transaksi;

    do{
        printf("==================================\n");
        printf("SELAMAT DATANG DI WARUNG BYTEFORCE\n");
        printf("==================================\n");
        printf("Menu Hari Ini:\n");
        printf("[A] Air Mineral   - Rp 3.000\n");
        printf("[B] Roti          - Rp 5.000\n");
        printf("[C] Mi Instan     - Rp 2.500\n");
        printf("----------------------------------\n");
        printf("Masukkan jumlah pembelian:\n");

        printf("Air Mineral: "); 
        scanf("%d", &airMineral);
        printf("Roti: ");
        scanf("%d", &roti);
        printf("Mi Instan: ");
        scanf("%d", &miInstan);

        totalBayar = (airMineral * 3000) + (roti * 5000) + (miInstan * 2500);

        printf("==================================\n");
        printf("         STRUK BELANJA            \n");
        printf("==================================\n");
        printf("Air Mineral x %d = Rp %d\n", airMineral, airMineral*3000);
        printf("Roti        x %d = Rp %d\n", roti, roti*5000);
        printf("Mi Instan   x %d = Rp %d\n", miInstan, miInstan*2500);
        printf("----------------------------------\n");
        printf("Total Bayar = Rp %.2lf\n", totalBayar);
        printf("==================================\n");

        printf("Ingin bertransaksi lagi? y/n\n");
        scanf(" %c", &transaksi);

    }while(transaksi == 'y' || transaksi == 'Y');

    printf("Terima kasih telah berbelanja di Warung Byteforce!\n");

    return 0;
}