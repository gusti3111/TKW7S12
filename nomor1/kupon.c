#include <stdio.h>

// Struct untuk menyimpan informasi pembelian
struct Pembelian {
    float total_pembelian;
    int jumlah_kupon;
    float diskon;
    float total_bayar;
};

int main() {
    float total_pembelian;

    // Meminta pengguna untuk memasukkan total pembelian
    printf("Masukkan total pembelian: Rp. ");
    scanf("%f", &total_pembelian);

    // Inisialisasi struct Pembelian
    struct Pembelian hasil_pembelian;

    // Check apakah total pembelian mencapai minimal Rp. 100.000,00
    if (total_pembelian >= 100000) {
        // Menghitung jumlah kupon undian
        hasil_pembelian.jumlah_kupon = total_pembelian / 100000;

        // Menghitung diskon
        hasil_pembelian.diskon = 0.05 * total_pembelian;

        // Menghitung total yang harus dibayar setelah diskon
        hasil_pembelian.total_bayar = total_pembelian - hasil_pembelian.diskon;
    } else {
        // Jika total pembelian kurang dari Rp. 100.000,00
        hasil_pembelian.jumlah_kupon = 0;
        hasil_pembelian.diskon = 0;
        hasil_pembelian.total_bayar = total_pembelian;
    }

    // Menyimpan total_pembelian ke dalam struct
    hasil_pembelian.total_pembelian = total_pembelian;

    // Menampilkan informasi menggunakan struct
    printf("Total pembelian: Rp. %.2f\n", hasil_pembelian.total_pembelian);
    printf("Jumlah kupon undian: %d lembar\n", hasil_pembelian.jumlah_kupon);
    printf("Diskon: Rp. %.2f\n", hasil_pembelian.diskon);
    printf("Total yang harus dibayar: Rp. %.2f\n", hasil_pembelian.total_bayar);

    return 0;
}
