#include <stdio.h>      
#include <string.h>     

#define MAX_BOOKS 100   // กำหนดจำนวนหนังสือสูงสุดในห้องสมุด

// ---------------- ประกาศ Structure สำหรับเก็บข้อมูลหนังสือ ----------------
typedef struct {
    int id ;              // รหัสหนังสือ (Book ID)
    char title[100] ;     // ชื่อหนังสือ (Title)
    char author[100] ;    // ชื่อผู้แต่ง (Author)
    int year ;            // ปีที่พิมพ์ (Year)
} Book ;

// ---------------- ฟังก์ชันเพิ่มหนังสือใหม่ ----------------
void addBook ( Book books[] , int *count ) {
    // ตรวจสอบว่าห้องสมุดเต็มหรือไม่
    if ( *count >= MAX_BOOKS ) {
        printf ( "Library is full. Cannot add more books.\n" ) ;
        return ;
    }

    printf ( "Enter Book ID: " ) ;
    scanf ( "%d" , &books[ *count ].id ) ;      // รับ Book ID
    getchar ( ) ;                                // ลบ newline ค้างใน buffer

    printf ( "Enter Title: " ) ;
    fgets ( books[ *count ].title , sizeof(books[ *count ].title) , stdin ) ; // รับชื่อหนังสือ
    books[ *count ].title[ strcspn(books[ *count ].title , "\n") ] = '\0' ;   // ตัด \n ท้ายสตริง

    printf ( "Enter Author: " ) ;
    fgets ( books[ *count ].author , sizeof(books[ *count ].author) , stdin ) ; // รับชื่อผู้แต่ง
    books[ *count ].author[ strcspn(books[ *count ].author , "\n") ] = '\0' ;   // ตัด \n ท้ายสตริง

    printf ( "Enter Year: " ) ;
    scanf ( "%d" , &books[ *count ].year ) ;   // รับปีที่พิมพ์
    getchar ( ) ;                               // ลบ newline ค้างใน buffer

    ( *count )++ ;                              // เพิ่มจำนวนหนังสือในระบบ
    printf ( "Book added successfully!\n" ) ;
}

// ---------------- ฟังก์ชันค้นหาหนังสือตามชื่อ ----------------
void searchBook ( Book books[] , int count , char title[] ) {
    int found = 0 ;                              // ตัวแปรเช็คว่าพบหนังสือหรือไม่

    for ( int i = 0 ; i < count ; i++ ) {       // วนลูปตรวจสอบทุกหนังสือ
        if ( strcmp( books[ i ].title , title ) == 0 ) { // ถ้าชื่อหนังสือตรง
            printf ( "Book ID: %d\n" , books[ i ].id ) ;
            printf ( "Title: %s\n" , books[ i ].title ) ;
            printf ( "Author: %s\n" , books[ i ].author ) ;
            printf ( "Year: %d\n" , books[ i ].year ) ;
            found = 1 ;                         // พบหนังสือแล้ว
            break ;                              // ออกจากลูป
        }
    }

    if ( !found ) {                              // ถ้าไม่พบหนังสือ
        printf ( "Book not found.\n" ) ;
    }
}

// ---------------- ฟังก์ชันแสดงหนังสือทั้งหมด ----------------
void displayBooks ( Book books[] , int count ) {
    if ( count == 0 ) {                          // ถ้าไม่มีหนังสือ
        printf ( "No books in library.\n" ) ;
        return ;
    }

    for ( int i = 0 ; i < count ; i++ ) {        // วนลูปแสดงข้อมูลหนังสือทั้งหมด
        printf ( "Book ID: %d\n" , books[ i ].id ) ;
        printf ( "Title: %s\n" , books[ i ].title ) ;
        printf ( "Author: %s\n" , books[ i ].author ) ;
        printf ( "Year: %d\n" , books[ i ].year ) ;
        printf ( "\n" ) ;                        // เว้นบรรทัดหลังหนังสือแต่ละเล่ม
    }
}

// ---------------- ฟังก์ชันหลัก ----------------
int main ( ) {
    Book books[ MAX_BOOKS ] ;    // อาเรย์เก็บข้อมูลหนังสือ
    int count = 0 ;              // จำนวนหนังสือปัจจุบัน
    int choice ;                 // ตัวแปรเก็บเมนูที่เลือก
    char searchTitle[100] ;      // ตัวแปรเก็บชื่อหนังสือสำหรับค้นหา

    while ( 1 ) {                // ลูปเมนูหลัก
        printf ( "Choose an option:\n" ) ;
        printf ( "1. Add Book\n" ) ;
        printf ( "2. Search Book by Title\n" ) ;
        printf ( "3. Display All Books\n" ) ;
        printf ( "4. Exit\n" ) ;
        printf ( "Enter your choice: " ) ;
        scanf ( "%d" , &choice ) ;
        getchar ( ) ;            // ลบ newline ค้างใน buffer

        switch ( choice ) {
            case 1 :
                addBook ( books , &count ) ;               // เพิ่มหนังสือใหม่
                break ;
            case 2 :
                printf ( "Enter Title to Search: " ) ;
                fgets ( searchTitle , sizeof(searchTitle) , stdin ) ;   // รับชื่อหนังสือ
                searchTitle[ strcspn( searchTitle , "\n" ) ] = '\0' ;   // ตัด \n
                searchBook ( books , count , searchTitle ) ;             // ค้นหาหนังสือ
                break ;
            case 3 :
                displayBooks ( books , count ) ;        // แสดงหนังสือทั้งหมด
                break ;
            case 4 :
                printf ( "Exiting program.\n" ) ;
                return 0 ;                               // ออกจากโปรแกรม
            default :
                printf ( "Invalid choice. Try again.\n" ) ;
        }

        printf ( "\n" ) ;    // เว้นบรรทัดหลังแต่ละรอบเมนู
    }

    return 0 ;
}