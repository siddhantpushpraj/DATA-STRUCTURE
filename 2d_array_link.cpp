#include<stdio.h>
#include<conio.h>� �
int main()
{
� int a[] = {1, 2, 3, 4, 5, 6};
� int *ptr = (int*)(&a+1);
� printf("%d ", *(ptr-1) );
� return 0;
}
