#include <stdio.h>

typedef struct node{
    int statusEmpty;
    int panjang;
   //  struct node* next; // Pada penerapan Array of struct tidak ada next
} Node;

typedef Node* NodePtr;


int main(){
   /**
    * 🙂🙂[Instruksi]🙂🙂
    * B1. Sebelum kita menerapkan linked list, perlu pemahamannya dalam array of struct terlebih dahulu
    * Buatlah array of struct berukuran 3. Gunakan tipe data Node (bukan NodePtr)
    */

   /* 🚩🚩[Pertanyaan]🚩🚩
    * B2
    * Cara mengakses array adalah array[index]
    * Cara mengakses field (data) dari struct adalah struct.field
    * Bagaimana cara mengakses field dari struct yang berada di dalam array?
    *
    * Jawaban anda:
    */

   /* 🚩🚩[Pertanyaan]🚩🚩
    * B3
    * Apa perbedaan sturct[1].field dengan struct.field[1]?
    *
    * Jawaban anda:
    */

   /**
    * 🙂🙂[Instruksi]🙂🙂
    * B4. Mengisi array of struct yang telah kalian buat pada B1
    * kasih setiap field valuenya terserah kalian (tidak perlu input dari user)
    * contoh: namaArray[0].statusEmpty = 1;
    * contoh: namaArray[0].panjang = 20;
    */

   /**
    * 🙂🙂[Instruksi]🙂🙂
    * B5. Print seluruh field dari array of struct yang telah kalian buat pada B4
    * Print statusEmpty dan panjang dari setiap elemen array
    */
   return 0;
}