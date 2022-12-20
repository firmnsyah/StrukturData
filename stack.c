//program implementasi stack
#include <stdio.h>
#include <conio.h>
#define max 5
typedef struct {
 int top; //untuk mencacah indeks dari stack
 int data[max+1];
}stack;
stack tumpukan;
void createEmpty();
int IsEmpty();
int IsFull();
void push(int x);
void pop();
void main(){
 int lagi;
 int input;
 int pilih;
 createEmpty();
 pilih = 0;
 while (pilih != 5){
 //Menu utama
 system("cls");
 puts("=====================================");
 puts(" MENU UTAMA");
 puts("=====================================");
 puts("1. Cek kondisi Stack");
 puts("2. Tambah data");
 puts("3. Keluarkan isi stack");
 puts("4. Kosongkan stack");
 puts("5. Keluar");
 printf("Pilihan: ");
 scanf("%d",&pilih);
 switch(pilih){
 case 1: if (IsEmpty() == 1)
 puts("Stack masih kosong");
 else if ((IsEmpty() == 0) && (IsFull() == 0))
 puts("Stack sudah terisi, tapi belum penuh");
 else
 puts("Stack sudah penuh");
 getch();
break;
 case 2: if (IsFull() == 1)
 puts("Stack sudah penuh.");
 else
{
 printf("Masukkan data: ");
scanf("%d",&input);
push(input);
printf("%d",tumpukan.top);
printf("%d",IsFull());
printf("%d",IsEmpty());
 }
 break; 
6
case 3: while (IsEmpty() == 0)
 {
 printf("%d \n",tumpukan.data[tumpukan.top]);
 pop();
 }
 getch();
 break;
case 4: createEmpty();
 puts("Stack sudah kosong. Top = 0");
 getch();
 break;
case 5: puts(“Byeee………”);
 getch();
 break;
}
 }
}
//DEKLARASI OPERASI-OPERASI DASAR STACK
void createEmpty(){
 tumpukan.top = 0;
}
int IsEmpty(){
 if (tumpukan.top == 0)
 return 1;
 else
 return 0;
}
int IsFull(){
 if (tumpukan.top == max)
 return 1;
 else
 return 0;
}
void push(int x){
 tumpukan.top = tumpukan.top + 1;
 tumpukan.data[tumpukan.top] = x;
}
void pop(){
 tumpukan.top = tumpukan.top - 1;