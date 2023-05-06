#include <stdio.h>

int main() {
  int pil;
  char nama[50], kelas[20], npm[15];
  int a, b, c;

menu:
  printf("Masukkan pilihan (1 untuk biodata, 2 untuk ganjil/genap, 3 untuk mencari nilai terbesar): ");
  scanf("%d", &pil);

  switch (pil) {
    case 1:
      printf("\n ==================Biodata ==================\n");
      printf("Masukkan Nama :");
      scanf("%s", nama);
      printf("Masukkan Kelas :");
      scanf("%s", kelas);
      printf("Masukkan Npm :");
      scanf("%s", npm);
      printf("\nNama Anda %s, kelas anda %s, NPM Anda %s\n", nama, kelas, npm);
      break;
    case 2:
      printf("\n ==================Ganjil Genap ==================\n");
      printf("Masukkan Angka :");
      scanf("%d", &a);
      if (a % 2 == 0) {
        printf("\nBilangan %d adalah Genap\n", a);
      } else {
        printf("\nBilangan %d adalah Ganjil\n", a);
      }
      break;
    case 3:
      printf("\n ==================Mencari Nilai Terbesar ==================\n");
      printf("Masukkan nilai a :");
      scanf("%d", &a);
      printf("Masukkan nilai b :");
      scanf("%d", &b);
      printf("Masukkan nilai c :");
      scanf("%d", &c);
      if (a >= b && a >= c) {
        printf("\nNilai terbesar adalah %d\n", a);
      } else if (b >= a && b >= c) {
        printf("\nNilai terbesar adalah %d\n", b);
      } else {
        printf("\nNilai terbesar adalah %d\n", c);
      }
      break;
    default:
      printf("Maaf Menu pilihan tidak tersedia, silahkan di coba kembali\n");
      goto menu;
  }

  return 0;
}
