# Selamat Datang \ O_o /

Pada **Mentoring ED** ini klean akan membuat project untuk belajar tentang pointer dan memory.

Total terdapat 1 buah Soal. Soal udh di file c:

- Soal 1, Kerjakan di `parkir.c`

Kalian bisa ambil referensi dari <https://github.com/EdgrantHS/citsit-progdas-c>

## Cerita Singkat

Ada sebuah **parkiran**, setiap tempat parkir **dikasih nomor**, contohnya kalau di real life :

```txt
A1 -> A2 -> A3 -> ... -> A10 -> B1 -> ...
```

Tetapi, ada **banyak tipe kendaraan**, jadi ada yang mengambil 1 tempat parkir (contohnya motor), ada yang 2 (contohnya mobil), dan seterusnya (truk, pesawat, dll).

Kalian membuat program untuk merepresentasikan parkiran ini, dan jika ada **input kendaraan baru**, bisa kasih tau **parkiran yang masih kosong** yang memenuhi kebutuhan **ukuran tempat parkir** kendaraan tersebut.

## Apa yang kalian akan buat

Inti dari program adalah sebuah linked list. Linked list ini berisi 3 data, yaitu :

- Apakah tempat parkir ini kosong atau tidak
- Jumlah tempat parkir yang kosong/isi
- Alamat memory node selanjutnya

Mungkin agak membingungkan kenapa isinya 3 data tersebut, terutapa jumlah tempat parkir yang kosong/isi. Jadi saya akan kasih contoh

```txt
[Kosong, 5, next_alamat] -> [Isi, 2, next_alamat] -> [Kosong, 3, NULL]
```

Jadi, di linked list ini, ada 3 tempat parkir kosong, diikuti 2 tempat parkir yang sudah terisi, dan diikuti 3 tempat parkir yang kosong. Jika masih bingung coba tanya aslabnya aja atau coba kerjain soalnya dulu.

## Cara Mengerjakan

Soal dan detil detil sudah di soalnya, jadi kalian bisa langsung mengerjakan, **Kerjakan sesuai urutan nomor** `A1 -> A2 -> B1 -> B2 -> ...`.

Diharapkan jawab pertanyaan-pertanyaannya secara singkat saja

## Bacaan tambahan

Tempat parkir ini sistemnya sama seperti memory management pada komputer kalian. Jadi di komputer kalian ada linked list untuk memanage memory dan menentukan apakah memory tertentu dipakai atau tidak.
Nanti kalian akan belajar lebih lanjut di mata kuliah Sistem Operasi.

Untuk memory management dan masalah parkiran ini, ada juga solusi lain selain pakai linked list, yaitu pakai bitmap. Jadi ada sebuah variabel yang berisi angka biner 0 dan 1, 0 berarti kosong, 1 berarti terisi. Dan setiap tempat parkirnya direpresentasi 1 bit. Kekurangannya adalah variabel ini biasa lebih besar dari linked list.

<br />
<br />

# ⊂(◉‿◉)つ Good Luck (◉‿◉)
