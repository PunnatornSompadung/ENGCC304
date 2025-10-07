#include <stdio.h>

int main() {
    int position ;          // ตำแหน่งงาน (1=Junior, 2=Mid-Level, 3=Senior)
    int years ;             // จำนวนปีที่ทำงาน
    int projects ;          // จำนวนโปรเจคที่สำเร็จฝ
    /////////////////////////////////////
    float baseSalary ;      // เงินเดือนพื้นฐาน
    float bonus = 0 ;       // โบนัสตามอายุงาน
    float exbonus = 0 ;  // โบนัสพิเศษ
    float totalSalary ;     // เงินเดือนสุทธิ

    printf( "Enter Position : " ) ; //ตำแหน่ง
    scanf( "%d" , &position ) ;

    printf( "Enter years : " ) ; //จ.นปี
    scanf( "%d" , &years ) ;

    printf( "Enter Projects Completed this Year : " ) ; //โปรเจ็คที่สำเร็จ
    scanf( "%d" , &projects ) ;

///////////////////////////////////////////////////

    if (position == 1 ) {
        baseSalary = 20000 ;
    }
    else if (position == 2 ) {
        baseSalary = 35000 ;
    }
    else if (position == 3 ) {
        baseSalary = 50000 ;
    }
    else {
        printf("Error Invaild") ;
        return 0 ;
    }

////////////////////////////////////////////////////

    if (years < 1) {
       bonus = 0 ;
    }
    else if ( years >= 1 && years <= 3 ) {
        bonus = baseSalary * 0.10 ;
    }
    else if (years >= 4 && years <= 5) {
        bonus = baseSalary * 0.15 ;
    }
    else if ( years > 5 ) {
        exbonus = baseSalary * 0.20 ;
    }

////////////////////////////////////////////////////

totalSalary = baseSalary + bonus + exbonus ;

////////////////////////////////////////////////////

    printf( "Base Salary     : %.2f Baht\n" , baseSalary ) ;
    printf( "Experience Bonus: %.2f Baht\n" , bonus ) ;
    printf( "Special Bonus   : %.2f Baht\n" , exbonus ) ;
    printf( "Net Salary   : %.2f Baht\n" , totalSalary ) ;

    return 0 ;
}