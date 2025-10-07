#include <stdio.h>
#include <string.h>
#include <ctype.h>

// ฟังก์ชันเพื่อตรวจสอบว่าอักขระนี้เป็นตัวแบ่งคำหรือไม่
int isSeparator(char c) {
    return isspace(c) || ispunct(c) ;  // เว้นวรรคหรือวรรคตอน
}

// ฟังก์ชันนับจำนวนคำในไฟล์
int countWordsInFile(char filename[]) {
    FILE *file = fopen(filename, "r") ;   // เปิดไฟล์สำหรับอ่าน
    if (file == NULL) {                  // ถ้าเปิดไฟล์ไม่ได้
        printf("ไม่พบไฟล์ %s\n", filename);
        return -1 ;
    }

    int count = 0 ;     // ตัวนับคำ
    char ch ;
    int inWord = 0 ;    // flag เช็คว่าตอนนี้อยู่ในคำหรือไม่

    while ((ch = fgetc(file)) != EOF) {   // อ่านตัวอักษรจากไฟล์ทีละตัว
        if (isSeparator(ch)) {
            inWord = 0 ;                   // ถ้าเจอเว้นวรรค/วรรคตอน = ออกจากคำ
        } else {
            if (inWord == 0) {            // ถ้าเพิ่งเริ่มเข้าคำใหม่
                count++ ;
                inWord = 1 ;
            }
        }
    }

    fclose(file) ;   // ปิดไฟล์
    return count ;   // ส่งค่าจำนวนคำออกไป
}

int main() {
    // --- สร้างไฟล์ตัวอย่างอัตโนมัติ ---
    FILE *f1 = fopen("a.txt", "w") ;
    fprintf(f1, "Hi, This is my first time in RMUTL.") ;
    fclose(f1) ;

    FILE *f2 = fopen("b.txt", "w") ;
    fprintf(f2, "Encourage your students to test their program with different input files to ensure its correctness") ;
    fclose(f2) ;
    // -----------------------------------

    char filename[50] ;
    printf("Enter file name:\n") ;
    scanf("%s", filename) ;

    int total = countWordsInFile(filename) ;
    if (total >= 0) {
        printf("Total number of words in '%s' : %d words\n", filename, total) ;
    }

    return 0 ;
}