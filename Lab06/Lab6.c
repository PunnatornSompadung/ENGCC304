#include <stdio.h>

int main() {
    int A ; //กำหนดตัวแปร
    printf ("Enter value: \n") ; //ย้ายการป้อนตัวเเปร 1 บรรทัด
    scanf ( "%d", &A ) ; //เก็บตัวแปร

        if ( A % 2 == 1 ) {
            printf ( "Series: %d\n", A ) ; //ย้ายการป้อนตัวเเปร 1 บรรทัด
            for ( int X = 1; X <= A; X += 2 ) {
            printf ( "%d ", X ) ; 
            }//จบ for
        } else {//จบ if เริ่ม else
            printf ( "Series: %d\n", A ) ; //ย้ายการป้อนตัวเเปร 1 บรรทัด
            for ( int X = A; X >= 0; X -= 2 ) {
            printf ( "%d ", X ) ;
            } //จบ for
        }//จบ if ,else
        return 0;
}//จบฟังชั่น
