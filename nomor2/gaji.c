#include <stdio.h>
#include <string.h>

struct Pegawai {
    // Nomor Induk Pegawai
    int NIP;
    char name[100];
    char address[100];
    int phoneNumber;
    char jabatan[100];
    char golongan[100];
};

int main() {
    // Mendeklarasikan variabel pegawai dari struct Pegawai
    struct Pegawai employee;

    // Input data pegawai
    printf("Input your Nomor Induk Pegawai: ");
    scanf("%d", &employee.NIP);

    printf("Input your Name: ");
    scanf("%s", employee.name);

     printf("Input your Address: ");
    getchar(); // Membersihkan newline character dari buffer sebelum membaca dengan fgets
    fgets(employee.address, sizeof(employee.address), stdin);
    employee.address[strcspn(employee.address, "\n")] = '\0';
    
    printf("Input your Phone Number: ");
    scanf("%d", &employee.phoneNumber);

    printf("Input your Jabatan: ");
    scanf("%s", employee.jabatan);

    printf("Input your Golongan: ");
    scanf("%s", employee.golongan);

    // Menampilkan data pegawai
    printf("\nEmployee Information:\n");
    printf("Nomor Induk Pegawai: %d\n", employee.NIP);
    printf("Name: %s\n", employee.name);
    printf("Address: %s\n", employee.address);
    printf("Phone Number: %d\n", employee.phoneNumber);
    printf("Jabatan: %s\n", employee.jabatan);
    printf("Golongan: %s\n", employee.golongan);

    return 0;
}
