#include <stdio.h>

int main() {
    float score ; //รับค่าแบบ (.)
    int point ; //กำหนดตัวแปร

        printf( "enter score: " ) ; //ใส่คะแนน
        point = scanf ( "%f", &score ) ; // ใช้ %f เพราะ float และ & ไม่เป็น string (&)

            if ( point != 1 ) {  //ถ้าอ่านค่าไม่ได้ หรือไม่ใช้ float จะ พิมว่า printf ( "please enter number only.\n" ) ;

                printf ( "please enter number only.\n" ) ;
                
            } else {
                if ( score < 50 ) {
                printf (" Your Grade: F\n" ) ;
            } else if ( score < 55 ) {
                printf ( "Your Grade: D\n" ) ;
            } else if ( score < 60 ) {
                printf ( " Your Grade: D+\n" ) ;
            } else if ( score < 65 ) {
                printf ( "Your Grade: C\n" ) ;
            } else if ( score < 70 ) {
                printf ( "Your Grade: C+\n" ) ;
            } else if ( score < 75 ) {
                printf ( "Your Grade: B\n" ) ;
            } else if ( score < 80 ) {
                printf ( "Your Grade: B+\n" ) ;
            } else {
                printf ( "Your Grade: A\n" ) ;
            }
        }

    return 0;
}
