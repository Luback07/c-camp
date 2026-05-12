//과제 1,2 필수 3은 선택    +3.3 프로세스 이미지 조사하기
//담주 수요일 자정까지

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    printf("swap 전: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("swap 후: x = %d, y = %d\n", x, y);

    return 0;
}
