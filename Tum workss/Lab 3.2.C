#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
int isPrime( int num ) {
    if ( num < 2 ) 
        return 0 ;

    for ( int i = 2 ; i <= sqrt( num ) ; i++) {
        if ( num % i == 0 )
            return 0 ;
    }
    return 1 ;
}

int main() {
    int n ;

    // รับจำนวนสมาชิกของอาร์เรย์
    printf( "Enter N : " ) ;
    scanf( "%d" , &n ) ;

    int arr[ n ] ;

    // รับค่าของอาร์เรย์ทีละตัว
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "Enter value[ %d ] : " ,i ) ;
        scanf( "%d" ,&arr[ i ] ) ;
    }

    // แสดงตำแหน่งของอาร์เรย์
    printf( "Index:  " ) ;
    for (int i = 0 ; i < n ; i++) {
        printf( "%2d" ,i ) ;
    }
    printf( "\n" ) ;

    // แสดงค่าที่เป็นจำนวนเฉพาะ หรือ '#' แทนค่าที่ไม่ใช่จำนวนเฉพาะ
    printf( "Array:  " ) ;
    for  (int i = 0 ; i < n ; i++ ) {
        if (isPrime( arr[ i ] ))
            printf( "%2d" ,arr[ i ] ) ;
        else
            printf( "%2s" ,"#" ) ;
    }

    printf( "\n" ) ;
    return 0 ;
}
