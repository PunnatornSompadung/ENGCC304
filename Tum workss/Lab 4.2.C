#include <stdio.h>

int main() {
    char employeeID[ 11 ] ; // สำหรับเก็บรหัสพนักงาน 0-10
    int workingHours ;
    float salaryPerHour ;
    float totalSalary ;

    // รับข้อมูลจากผู้ใช้
    printf( "Input the Employees ID(Max. 10 chars):\n" ) ;
    scanf( "%10s" , employeeID) ; // อ่านไม่เกิน 10 ตัวอักษร

    printf( "Input the working hrs:\n" ) ;
    scanf( "%d" , &workingHours ) ;

    printf( "Salary amount/hr:\n" ) ;
    scanf( "%f", &salaryPerHour ) ;

    //รายได้รวม
    totalSalary = workingHours * salaryPerHour ;

    //ผลลัพธ์
    printf( "Expected Output: \n" ) ;
    printf( "Employees ID = %s\n" , employeeID ) ;
    printf( "Salary = U$ %.2f\n" , totalSalary ) ; //.2f แสดงทศนิยม 2 ตำแหน่ง

    return 0 ;
}
