#include <stdio.h>

int main() {
    char ID[ 11 ] ;          // รับรหัสพนักงานสูงสุด 10 ตัวอักษร + null terminator
    int workingHours ;
    float salaryPerHour ;
    float totalSalary ;
    

    // รับข้อมูลจากผู้ใช้
    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%10s" , ID ) ;

    printf( "Input the working hrs: " ) ;
    scanf( "%d" , &workingHours ) ;

    printf( "Salary amount/hr: " ) ;
    scanf( "%f" , &salaryPerHour ) ;

    // คำนวณเงินเดือนรวม
    totalSalary = workingHours * salaryPerHour ;

    // แสดงผลลัพธ์
    printf( "----\n" ) ;
    printf( "Expected Output: \n" ) ;
    printf( "Employees ID = %s\n" , ID ) ;
    printf( "Salary = U$ %'.2f\n" , totalSalary ) ;  // รูปแบบแสดงจุดทศนิยม

    return 0 ;
}
