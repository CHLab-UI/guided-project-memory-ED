# 🚀🚀[Teori C]🚀🚀

Perhatikan pada `struct node *next;`
Kenapa menggunakan pointer? (ada *nya tuh)

Karena kita ingin menyimpan alamat dari node berikutnya.
Ingat kembali apa itu pointer? Pointer adalah variabel yang menyimpan suatu alamat memori.

int *next, berarti kita menyimpan alamat dari sebuah tipe data int didalam memori.
`Struct node *next`, berarti kita menyimpan alamat dari sebuah tipe data struct node didalam memori.

Bagaimana jika kita ingin menunjuk ke lebih dari 1 struct node??
bikin banyak pointernya :/
gimana cara bikin banyak pointernya?
bikin jadi array

Alasan menggunkaan struct pointer untuk menyimpan node di luar struct adalah
agar operasi di luar struct dan di dalam struct lebih konsisten.
Dalam bahasa c juga sudah ada fitur untuk mengakses field dari struct pointer, yaitu arrow operator (->)

Gambar visualisasi array of sturct pointer:

![gambar](https://media.discordapp.net/attachments/918673704978903041/1234131100297728082/image.png?ex=662f9da7&is=662e4c27&hm=a009dd6afdc3fe8470a67afd9651faa4a94a917bcf17f87f0a53cde89e699c7e&=&format=webp&quality=lossless&width=518&height=437)
