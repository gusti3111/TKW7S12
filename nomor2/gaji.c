#include <stdio.h>
#include <string.h>

// Define struct Pegawai
struct Pegawai {
    int nip;
    char nama[50];
    char alamat[100];
    char no_hp[15];
    char jabatan[50];
    char golongan[3];
    int gaji_pokok;
    int gaji_lembur_perjam;
};

int main() {
    // Input data pegawai
    struct Pegawai pegawai;
    printf("Input 1:\n");
    printf("NIP: ");
    scanf("%d", &pegawai.nip);
    printf("Nama: ");
    scanf("%s", pegawai.nama);
    printf("Alamat: ");
    scanf("%s", pegawai.alamat);
    printf("No HP: ");
    scanf("%s", pegawai.no_hp);
    printf("Jabatan: ");
    scanf("%s", pegawai.jabatan);
    printf("Golongan (D1/D2/D3): ");
    scanf("%s", pegawai.golongan);

    // Set gaji pokok dan gaji lembur perjam berdasarkan golongan
    if (strcmp(pegawai.golongan, "D1") == 0) {
        pegawai.gaji_pokok = 2500000;
        pegawai.gaji_lembur_perjam = 10000;
    } else if (strcmp(pegawai.golongan, "D2") == 0) {
        pegawai.gaji_pokok = 2000000;
        pegawai.gaji_lembur_perjam = 5000;
    } else if (strcmp(pegawai.golongan, "D3") == 0) {
        pegawai.gaji_pokok = 1500000;
        pegawai.gaji_lembur_perjam = 2500;
    } else {
        printf("Golongan tidak valid.\n");
        return 1;
    }

    // Tampilkan data pegawai dan gaji pokok
    printf("\nTampilan Input 1:\n");
    printf("NIP = %d\n", pegawai.nip);
    printf("Nama = %s\n", pegawai.nama);
    printf("Alamat = %s\n", pegawai.alamat);
    printf("No HP = %s\n", pegawai.no_hp);
    printf("Jabatan = %s\n", pegawai.jabatan);
    printf("Golongan = %s\n", pegawai.golongan);
    printf("Gaji = %d\n", pegawai.gaji_pokok);

    // Input data lembur
    int jumlah_jam_lembur;
    printf("\nInput 2:\n");
    printf("NIP = %d\n", pegawai.nip);
    printf("Golongan = %s\n", pegawai.golongan);
    printf("Jumlah Jam Lembur = ");
    scanf("%d", &jumlah_jam_lembur);

    // Hitung dan tampilkan total gaji bulan ini
    int total_gaji = pegawai.gaji_pokok + (jumlah_jam_lembur * pegawai.gaji_lembur_perjam);
    printf("Total Gaji Bulan ini = %d\n", total_gaji);

    return 0;
}
