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
    * Baca teori pada file 'C_teori.md'
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
    *
    * [
    * [0x0008]  [0x0010]
    * [0x0018]  [0x0020]
    * [0x0018]  [0x0020]
    * ]
    *
    *
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
    * Hint: gunakan arrow operator (->) untuk mengakses field dari struct pointer.
    * Hint2: Program akan crash tanpa error. 
    *          Hal ini disebabkan  tidak menggunakan malloc, nanti akan belajar di soal D
    * 
    */

   /** 🙂🙂[Instruksi]🙂🙂
    * C5. Copy soal B5 tapi gunakan array of struct pointer yang telah kalian buat pada C3
    */
   return 0;
}