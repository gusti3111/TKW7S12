#include <stdio.h>

struct pembelian
{
    float total_pembelian;
    float discount_precentage;
    int  jumlah_coupon;
    float total_pembayaran;

};

int pembayaran(){
        struct pembelian total;
        if(total.total_pembayaran >= 100000.00){
            // jumlah coupon if total_pembayaran  lebih dari 100000
            total.jumlah_coupon = 1;


            total.discount_precentage = total.total_pembelian * 0.05;

            int discount = total.discount_precentage * total.jumlah_coupon;
            total.total_pembayaran = total.total_pembelian - discount;
            return total.total_pembayaran;
             






        }else{
                    hasil.jumlah_kupon = 0;
        hasil.diskon = 0;
        hasil.total_bayar = total_pembelian;


            
        }


}


int main(){
    struct pembelian total;

    printf("total_pembelian:\n");
    scanf("%f", &total.total_pembelian);
    printf("total_pembelian %.2f", total.total_pembelian);
    
    

}