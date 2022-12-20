// program implementasi queue
#include <stdio.h>
#define max 5
typedef struct
{
    int HEAD, TAIL; // untuk mencacah indeks dari stack
    int data[max + 1];
} Queue;
Queue antrian;
void createEmpty();
int IsEmpty();
int IsFull();
void Enqueue(int x);
void Dequeue();
void main()
{
    int lagi;
    int input;
    createEmpty();
    // mengisi queue
    lagi = 1;
    while (lagi == 1)
    {
        if ((IsEmpty() == 1) || (IsFull() == 0))
        {
            system("cls");
            printf("Antrian masih tersedia.\n");
            printf("Masukkan nilai: ");
            scanf("%d", &input);
            Enqueue(input);
            printf("Tambah data (1/0)?");
            scanf("%d", &lagi);
        }
        else if (IsFull() == 1)
        {
            printf("Antrian sudah penuh.\n");
            lagi = 0;
        }
    }
    // menampilkan isi stack
    while (IsEmpty() == 0)
    {
        printf("%d ", antrian.data[antrian.HEAD]);
        Dequeue();
    }
    return 0;
}
14 void createEmpty()
{
    antrian.HEAD = 0;
    antrian.TAIL = 0;
}
int IsEmpty()
{
    if ((antrian.HEAD > antrian.TAIL) || (antrian.HEAD == 0) && (antrian.TAIL ==
                                                                 0))
        return 1;
    else
        return 0;
}
int IsFull()
{
    if (antrian.TAIL == max)
        return 1;
    else
        return 0;
}
void Enqueue(int x)
{
    if ((antrian.HEAD == 0) && (antrian.TAIL == 0))
    {
        antrian.HEAD = 1;
        antrian.TAIL = 1;
    }
    else
    {
        antrian.TAIL = antrian.TAIL + 1;
    }
    antrian.data[antrian.TAIL] = x;
}
void Dequeue()
{
    if (antrian.HEAD > antrian.TAIL)
    {
        antrian.HEAD = 0;
        antrian.TAIL = 0;
    }
    antrian.HEAD = antrian.HEAD + 1;
}