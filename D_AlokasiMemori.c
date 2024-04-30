#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int statusEmpty;
    int panjang;
    struct node* next;
} Node;

typedef Node* NodePtr;


int main(){
    printf("Hello, World!\n");

   /** 🚀🚀[Teori]🚀🚀
    * Yang dibawah ini sama saja seperti 
    *   int var;
    *   var = 3;
    *   printf ("%d\n", var);
    * 
    * Hanya saja ini menggunakan struct
    */

    NodePtr labelNode;

    labelNode->statusEmpty = 2;
    labelNode->panjang = 10;
    labelNode->next = NULL;

    printf("-----------Variabel Initialization-----------\n");
    printf("statusEmpty: %d\n", labelNode->statusEmpty);
    printf("panjang: %d\n", labelNode->panjang);
    printf("---------------------------------------------\n");

   /** 🚀🚀[Teori]🚀🚀
    * Masalahnya, kita harus memiliki label variabel, tanpa label ini, kita gak bisa akses struct
    * Tapi, kita mau bisa akses penggunakan next pointer
    * 
    * Caranya gimana?
    * Kita harus mengugnakan alokasi memori
    * Paling gampang itu menggunakan fungsi malloc
    * 
    * malloc akan kembaliin pointer ke memori, ini merupakan alasan kita menggunakan sturct pointer (NodePtr) bukan struct biasa (Node).
    * 
    * Biasa kan kalian pakai malloc untuk alokasi array, tapi itu sebenarnya bukan fungsi utama malloc.
    * Malloc hanya akan alokasi memori sebanyak yang kita minta
    *   malloc(10) -> alokasi memori sebanyak 10 byte
    *   malloc(10 * sizeof(int)) -> alokasi memori sebanyak 10 integer
    *   malloc(1 * sizeof(Node)) -> alokasi memori sebanyak 1 Node
    * ingat bahwa ukuran Node dan NodePtr berbeda, jadi jangan lupa sizeof(Node) dan sizeof(NodePtr) berbeda
    * 
    *   NodePtr nodePointerLabel = malloc(sizeof(Node));
    * Hal ini sama sepert NodePtr nodePointerLabel;
    * Tetapi, jika kita menggubah isinya lalu baru rumah labelnya, contohnya:
    *   nodePointerLabel->statusEmpty = 2;
    *   nodePointerLabel->panjang = 10;
    *   nodePointerLabel->next = NULL;
    * 
    *   nodePointerLabel = NULL;
    * 
    * Kita masih bisa akses field dari structnya, asalkan ada lokasi memori yang dialokasikan
    * Kita dapat dari mana? Kalau di linked list itu dari node sebelumnya.
    */

    // Sekarang di memori ada 1 Node worth of memory yang diclaim
    NodePtr nodePointerLabel = malloc(sizeof(Node));

    // Kita isi field dari structnya
    nodePointerLabel->statusEmpty = 2;
    nodePointerLabel->panjang = 10;
    nodePointerLabel->next = NULL;

    // Kita simpan alamat memory yang diclaim tadi ke label2
    NodePtr nodePointerLabel2 = nodePointerLabel;

    // Kita mengubah isi field dari label 1
    // Ingat bahwa alamat label 2 dan label 1 sama. Jadi kita mengubah yang beneran di memory lewat alamatnya. 
    nodePointerLabel->statusEmpty = 4;
    nodePointerLabel->panjang = 20;

    // Delete alamat dari label 1
    nodePointerLabel = NULL;

    // Kita coba akses field dari label 2
    printf("--------------Memory Allocation--------------\n");
    printf("statusEmpty: %d\n", nodePointerLabel2->statusEmpty);
    printf("panjang: %d\n", nodePointerLabel2->panjang);
    printf("---------------------------------------------\n");
    
   /** 🚩🚩[Pertanyaan]🚩🚩
    * D1. Coba analisis output dari memory allocation, mengapa outputnya gitu
    *
    * Jawaban anda:
    * 
    * 
    * 
    * 
    * 
    */

    /** ❗❗[Disclaimer]❗❗
     * Ini adalah materi yang paling susah dan paling penting
     * Kalau kalian udah ngerti Alokasi memori D ini, kedepannya lumayan gampang
     * 
     * Jadi, tolong pelajari sampai ngerti, kalau gak ngerti tanya aja di grup
     */

    return 0;
}