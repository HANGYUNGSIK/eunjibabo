// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    printf("%d\n", 52 & 38);
    printf("%d\n", 52 | 38);
    printf("%d\n", 52 ^ 38);
    printf("%d\n", 25 << 3);
    printf("%d\n", 25 >> 3);
    //52   00110100
    //38   00100110
    //18   00010010


    int nData = 123456789;

    printf("%d\n", nData & 0x0000000ff);//21이 나오는데 16진수의 15가 10진수의 21이다
    printf("%d\n",(nData&0xff000000) >> 24);
    //bit연산할땐 무조건 ()쳐라!!
}

