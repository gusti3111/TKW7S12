#include <stdio.h>

struct pembelian
{
    float total_pembelian;
    float discount_percentage;
    int jumlah_coupon;
    float total_pembayaran;
};

void hitung_pembayaran(struct pembelian *total)
{
    // Input all components of the pembelian structure
    printf("Total pembelian: \n");
    scanf("%f", &total[0].total_pembelian);
    printf("Jumlah coupon: \n");
    scanf("%d", &total[0].jumlah_coupon);

    if (total[0].total_pembelian >= 100000.00)
    {
        // Jumlah coupon if total_pembayaran lebih dari 100000
        total[0].jumlah_coupon = 1;

        total[0].discount_percentage = total[0].total_pembelian * 0.05 * total[0].jumlah_coupon;
        float discount = total[0].discount_percentage; 
        total[0].total_pembayaran = total[0].total_pembelian - discount;
    }
    else
    {
        total[0].jumlah_coupon = 0;
        total[0].discount_percentage = 0;
    }
}

int main()
{
    struct pembelian total;


    hitung_pembayaran(&total);

    printf("Total pembayaran setelah diskon: Rp. %.2f\n", total.total_pembayaran);

    return 0;
}
