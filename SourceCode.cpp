#include <iostream>

/*

    Referensi:
    https://www.belajarcpp.com/tutorial/cpp/inisialisasi/

*/

int main() {
	//int x;      // Inisialisasi variabel x tanpa nilai awal
	int a = 10; // Inisialisasi variabel a dengan nilai awal 10
	int b(5);   // Inisialisasi variabel b dengan nilai awal 5
	int c{ 3 }; // Inisialisasi variabel c dengan nilai awal 3
	int hasil;  // Inisialisasi variabel hasil tanpa nilai awal

    //jika kita tidak menginisialisasi salah satu variabel maka akan menghasilkan nilai yang tidak diharapkan seperti dibawah ini
    //std::cout << "Hasil variabel tidak mempunyai nilai awal : " << x + a << std::endl;

    //Operasi dengan variabel yang mempunyai nilai awal (hasil sesuai dengan harapan kita)
    a = a + b;
    hasil = a - c;
    std::cout << "Hasil variabel yang mempunyai nilai awal : " << hasil;

    //Inisialisasi sangat penting dalam deklarasi untuk memastikan tidak adanya nilai asing dalam program,
    //yang kemungkinan dapat mengacaukan operasi matematika dalam program kita.
    return 0;
}