#include <stdio.h>

typedef struct node{
    int statusEmpty;
    int panjang;
   //  struct node* next; // Pada penerapan Array of struct tidak ada next
} Node;

typedef Node* NodePtr;


int main(){
   /**
    * 🙂🙂[Instruksi Overview]🙂🙂
    * C. Pada bagian C, kalian akan membuat Array of Struct Pointer
    */

   /** 🚀🚀[Teori]🚀🚀
    * Alasan penerapan linked list biasanya menggunakan menggunakan Sturct Pointer dibanding Struct biasa adalah
    * pada node linked list, kita memerlukan pointer ke node berikutnya, hal ini disimpan pada variabel struct pointer.
    * Jika menggunakan struct biasa, kita tidak bisa menyimpan pointer ke node berikutnya
    * 
    * Alasan menggunkaan struct pointer untuk menyimpan node di luar struct adalah
    * agar operasi di luar struct dan di dalam struct lebih konsisten.
    * Dalam bahasa c juga sudah ada fitur untuk mengakses field dari struct pointer, yaitu arrow operator (->)
    */

   /** 🚩🚩[Pertanyaan]🚩🚩
    * C1. Apa perbedaan antara struct node dan struct node*?
    *
    * Jawaban anda:
    */

   /** 🚩🚩[Pertanyaan]🚩🚩
    * C2. Apa perbedaan arrow operator (->) dengan dot operator (.) pada struct 
    * dan bagaimana membuat keduanya melakukan hal yang sama?
    *
    * Jawaban anda:
    */

   /** 🙂🙂[Instruksi]🙂🙂
    * C3. Buatlah array of struct pointer berukuran 3. 
    * Jawabannya adalah:
    * Node* namaArray[3];
    * 
    * Tapi sebelumnya sudah pernah melakukan typedef Node* NodePtr, gunakan itu;
    */

   /** 🙂🙂[Instruksi]🙂🙂
    * C4. Copy soal B4 tapi gunakan array of struct pointer yang telah kalian buat pada C3
    * 
    * Hint: gunakan arrow operator (->) untuk mengakses field dari struct pointer
    */

   /** 🙂🙂[Instruksi]🙂🙂
    * C5. Copy soal B5 tapi gunakan array of struct pointer yang telah kalian buat pada C3
    */
   return 0;
}