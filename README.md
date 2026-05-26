```text
██╗  ██╗███████╗██╗      ██████╗ ███╗   ███╗██████╗  ██████╗ ██╗  ██╗
██║ ██╔╝██╔════╝██║     ██╔═══██╗████╗ ████║██╔══██╗██╔═══██╗██║ ██╔╝
█████╔╝ █████╗  ██║     ██║   ██║██╔████╔██║██████╔╝██║   ██║█████╔╝
██╔═██╗ ██╔══╝  ██║     ██║   ██║██║╚██╔╝██║██╔═══╝ ██║   ██║██╔═██╗
██║  ██╗███████╗███████╗╚██████╔╝██║ ╚═╝ ██║██║     ╚██████╔╝██║  ██╗
╚═╝  ╚═╝╚══════╝╚══════╝ ╚═════╝ ╚═╝     ╚═╝╚═╝      ╚═════╝ ╚═╝  ╚═╝

                    N I N E
```

# 🚀 Sorting Algorithm Analyzer in C
# 🚀 Sorting Algorithm Analyzer in C

Program CLI (Command Line Interface) berbasis bahasa C untuk memvisualisasikan dan menganalisis performa berbagai algoritma sorting. Dibuat untuk memenuhi Tugas Praktikum Struktur Data dan Algoritma.

## 👥 Anggota Kelompok 9
1. **abrarmuda59-droid** as ABRAR MUDA - [250810701100080] - [Fokus Pengerjaan, misal: Infrastruktur & Advance Sort]
2. **yuenothingelse** as MIRZA NUR AKHYAR - [250810701100087] - [Fokus Pengerjaan, misal: Fungsi Utils & Logika File]
3. **Hafidhfrr** as M. HAFIDH FARRAS - [250810701100098] - [Fungsi Utils, Fitur Shuffle & File Handling]

## ✨ Fitur Utama
Program ini menguji dua kategori algoritma dengan tipe data dan kompleksitas yang berbeda:

* **Sorting Dasar (Integer Array)**
    * Bubble Sort
    * Insertion Sort
    * Selection Sort

* **Advance Sorting (String Array)**
    * Merge Sort
    * Quick Sort
    * Shell Sort

* **Fitur Tambahan:**
    * Penghitung waktu eksekusi otomatis menggunakan `clock()`.
    * Pengacakan data (*shuffle*) dengan algoritma Fisher-Yates sebelum proses disortir.

## 📁 Struktur Repositori
* `main.c` - File utama yang memuat menu navigasi CLI.
* `basic_sort.c` & `.h` - Modul implementasi algoritma dasar.
* `advanced_sort.c` & `.h` - Modul implementasi algoritma tingkat lanjut.
* `utils.c` & `.h` - Kumpulan fungsi bantuan (rng, shuffle, pembacaan file text).

## ⚙️ Prasyarat
Sebelum menjalankan program, pastikan kamu telah mengunduh dataset kata bahasa Inggris dari [Kaggle Words-en](https://www.kaggle.com/datasets/jiprud/words-en), ubah nama file dataset tersebut menjadi **`words.txt`**, dan letakkan di dalam direktori yang sama dengan *source code*.

## 🚀 Cara Kompilasi dan Menjalankan Program
Karena program dipecah menjadi beberapa *file* modular, kompilasi harus dilakukan secara bersamaan. Buka terminal dan jalankan perintah berikut:

**1. Kompilasi:**
```bash
gcc main.c basic_sort.c advanced_sort.c utils.c -o sorting_program