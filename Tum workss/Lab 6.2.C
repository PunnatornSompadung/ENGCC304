#include <stdio.h>

int main() {
    int N ;

    // รับค่าจากผู้ใช้
    printf( "Enter value: " ) ;
    scanf( "%d", &N)  ;

    printf( "Series: " ) ;

    // ตรวจสอบว่าเป็นเลขคี่หรือคู่
    if ( N % 2 == 1 ) {
        // แสดงเลขคี่จาก 1 ถึง N
        for ( int i = 1 ; i <= N ; i += 2 ) {
            printf( "%d " ,i ) ;
        }
    } else {
        // แสดงเลขคู่จาก N ลงถึง 0
        for ( int i = N ; i >= 0 ; i -= 2 ) {
            printf( "%d " ,i ) ;
        }
    }

    return 0 ;
}
