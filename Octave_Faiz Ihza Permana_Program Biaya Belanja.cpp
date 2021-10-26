//Faiz Ihza Permana - Menghitung biaya belanja dengan diskon yang diberikan

#include <iostream> 

using namespace std; 

int main () 
{
    string nama_barang;
    double harga, uang, diskon, total_harga, kembalian;
    
    cout<<"Masukkan nama barang yang ingin dibeli: "; 
    getline(cin, nama_barang);
    cout<<endl;
 
    cout<<"Masukkan harga barang yang ingin dibeli (rupiah): "; 
    cin>>harga;
    
    if ((harga <= 200000) && (harga > 100000)) 
    { 
        diskon = harga * 10/100; 
        cout<<"Diskon 10%, dipotong "<<diskon<<" rupiah"<<endl; 
    }
    
    else if ((harga <= 300000) && (harga > 200000)) 
    { 
        diskon = harga * 20/100; 
        cout<<"Diskon 20%, dipotong "<<diskon<<" rupiah"<<endl; 
    }
    
    else if ((harga <= 400000) && (harga > 300000)) 
    { 
        diskon = harga * 30/100; 
        cout<<"Diskon 30%, dipotong "<<diskon<<" rupiah"<<endl; 
    }
    
    else if (harga > 400000) 
    { 
        diskon = harga * 40/100; 
        cout<<"Diskon 40%, dipotong "<<diskon<<" rupiah"<<endl; 
    }
    
    else if (harga <= 100000) 
    { 
        diskon = harga * 0/100; 
        cout<<"Tidak terdapat diskon"<<endl; 
    }
    
    total_harga = harga - diskon;
    
    cout<<"Total harga: "<<total_harga<<" rupiah"<<endl;
    cout<<endl;
    
    cout<<"Jumlah uang yang anda miliki (rupiah): "; 
    cin>>uang;
    
    kembalian = uang - total_harga; 
    
    cout<<"Kembalian yang anda dapatkan: "<<kembalian<<" rupiah"<<endl;
    cout<<endl;
    
    cout<<"Anda membeli "<<nama_barang<<" dengan harga "<<total_harga<<" rupiah "
        <<endl<<"dan mendapatkan kembalian sebesar "
        <<kembalian<<" rupiah"<<endl;
 
    return 0; 
}

