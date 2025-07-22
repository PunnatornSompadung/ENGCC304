#include <stdio.h>

int main() {
    char numberid [ 10 ] ;  
    int working_hrs ;
    float salary_amount ; //ใช้ float เพราะเป๋นค่าตัวเลข
    float salary ; //ใช้ float เพราะเป๋นค่าตัวเลข

        printf ("Employees ID (Max 10): " ) ;
        scanf ( "%10s", numberid ) ; //เป็น string

        printf ( "Working hours: " ) ;
        scanf( "%d", &working_hrs ) ; //ไม่เป็น string (&)

        printf ( "Salary amount per hour: " );
        scanf( "%f", &salary_amount ); //ไม่เป็น string (&)

    salary = working_hrs * salary_amount ;

    printf( "Employees ID = %s \n ", numberid ) ; //%s เป็น string จาก numberid
    printf( "Salary = U$ %.2f \n ", salary ) ; //%.2f เป็น float จาก salary เพราะรับค่าเป็น การคูณ และ .2 เป็นทศนิยม 2 ตำแหน่ง

    return 0; //End_of_fuction
}
