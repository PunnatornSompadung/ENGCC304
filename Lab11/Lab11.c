#include <stdio.h>

int power( int base , int exp ) {
    int result = 1 ;
    for ( int i = 0 ; i < exp ; i++ ) {
        result *= base ;
    }
    return result ;
}

int isArmstrong( int num ) { // คือ n
    int temp , digits = 0 , sum = 0 , last ;

    temp = num ;
    while ( temp != 0 ) {
        temp /= 10 ;
        digits++ ;
    }

    temp = num ;
    while ( temp != 0 ) {
        last = temp % 10 ;
        sum += power( last , digits ) ;
        temp /= 10 ;
    }

    if ( sum == num )
        return 1 ; // ไป  print pass
    else
        return 0 ; // ไป  print not pass
}

int main( void ) {
    int n ;
    printf( "Enter Number:\n" ) ;
    scanf( "%d" , &n ) ;

    if ( isArmstrong( n ) )
        printf( "Pass.\n" ) ;
    else
        printf( "Not Pass.\n" ) ;

    return 0 ;
}