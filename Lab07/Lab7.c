#include <stdio.h>
#include <stdlib.h> //การป้อนตัวแปรการสุ่มตัวเลข (rand)
#include <time.h> //จำนวนครั้ง

int main() {
    int play ;

    srand(time(NULL)) ;  // สุ่มตัวเลขโดยใช้เวลาเป็น seed //rand = ตัวแปรสุ่ม // Null = ตัวสุ่มไม่ซ้ำ // Time คือ ครั้ง จ.น 

    while (1) { // While (1) = วนเรื่อยๆ ลูปไม่มีที่สิ้นสุด
        printf ("\nDo you want to play game (1=play,-1=exit) :\n") ;
        scanf ("%d", &play) ;

        if (play == -1) {
            printf ("\nSee you again.\n") ;
            break ;
        } else if (play != 1) { // !=1 = ไม่เท่ากับ 1
            printf ("Invalid input. Please enter 1 or -1.\n") ;
            continue ;
        }

        // กำหนดตัวแปร
        int answer = rand () % 100 + 1 ; // 0-9 = %100 // %100 +1 = 0-10 เพราะบวก 1
        int score = 100 ;
        int guess ;
        int min = 1, max = 100 ;

        printf ("\n(Score=100)\n") ;

        while (1) {
            printf ("\nGuess the winning number (%d-%d) :\n",min, max) ;
            scanf ("%d", &guess) ;

            if (guess == answer) {
                printf ("\nScore this game: %d\n ", score) ;
                printf ("\nThat is correct! The winning number is %d.\n ",answer) ;
                break ;
            } else {
                score -= 10 ;

                if (score <= 0) {
                    printf ("\nYou lost! The correct number was %d.\n",answer) ;
                    printf ("\nScore this game: 0\n") ;
                    break ;
                }

                if (guess < answer) {
                    printf ("\nSorry, the winning number is HIGHER than %d. (Score=%d)\n",guess, score) ;
                    if (guess >= min) min = guess + 1 ;  // ปรับ min ถ้า guess ไม่ต่ำเกินไป
                } else {
                    printf ("\nSorry, the winning number is LOWER than %d. (Score=%d)\n",guess, score) ;
                    if (guess <= max) max = guess - 1 ;  // ปรับ max ถ้า guess ไม่สูงเกินไป
                }
            }
        }
    }

    return 0 ;
}
