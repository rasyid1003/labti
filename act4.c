#include <stdio.h>

int main() {
  int pil;
  char nama[50], kelas[20], npm[15];
  int a, b, c;

menu:
  printf("\n===============MENU==============");
  printf("\n1. Biodata");
  printf("\n2. Ganjil Genap");
  printf("\n3. EXIT");
  printf("\nPILIHAN : ");

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
    default:
      printf("Maaf Menu pilihan tidak tersedia, silahkan di coba kembali\n");
      goto menu;
  }

  return 0;
}
