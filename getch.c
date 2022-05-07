#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
char a[10]="huree", b[10];
int num=0;
puts("Please enter a password: (5 words) ");
while (num != 5) {
b[num] = getch();
putchar('*');
num++;
}
if (strncmp(a, b, 5)==0)
puts("\nLogin successfully!");
else
puts("\nLogin failed!");
}
