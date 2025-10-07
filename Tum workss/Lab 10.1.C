#include <stdio.h>
#include <string.h> // ใช้สำหรับ strlen

int main() {
    char word[100] ; //รับค่าไม่เกิน 100 คำ
    int palindrome = 1 ;

    printf( "Enter word : \n" ) ;
    scanf( "%s", word ) ; //String

///////////////////////////////////////////

    int len = strlen(word) ; // ใช้ฟังก์ชัน strlen() เพื่อหาความยาวของ string word

//////////////////////////////////////////

    for (int i = 0; i < len / 2; i++) {
        if (word[i] != word[len - i - 1]) {
            palindrome = 0 ;
            break ;
        }
    }

/////////////////////////////////////////

    if (palindrome)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}