#include <stdio.h>
#include <string.h>

struct { //ตัวแปร 1 ค่า ทั้งหมด
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
    char GradeSub1[3] ;
    char GradeSub2[3] ;
    char GradeSub3[3] ;
    char GradeSub4[3] ;
    char GradeSub5[3] ;
    char GradeAvg[3] ;
} typedef S ; //กำหนดชื่อตัวแปร struct เป็น S

// ฟังก์ชันกำหนดเกรด
void setGrade(float score, char gradeStr[3]) {
    if(score >= 80) strcpy(gradeStr, "A") ;
    else if(score >= 75) strcpy(gradeStr, "B+") ;
    else if(score >= 70) strcpy(gradeStr, "B") ;
    else if(score >= 65) strcpy(gradeStr, "C+") ;
    else if(score >= 60) strcpy(gradeStr, "C") ;
    else if(score >= 55) strcpy(gradeStr, "D+") ;
    else if(score >= 50) strcpy(gradeStr, "D") ;
    else strcpy(gradeStr, "F") ;
}

int main() {
    S student[3] ; // ตัวแปร array เก็บข้อมูลนักเรียน 3 คน ตามโจทย์

    for(int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1) ;
        printf("Name: ") ;
        scanf("%s", student[i].Name) ;
        printf("ID: \n") ;
        scanf("%s", student[i].ID) ;
        printf("Scores in Subject 1: \n") ;
        scanf("%f", &student[i].ScoreSub1) ;
        printf("Scores in Subject 2: \n") ;
        scanf("%f", &student[i].ScoreSub2) ;
        printf("Scores in Subject 3: \n") ;
        scanf("%f", &student[i].ScoreSub3) ;
        printf("Scores in Subject 4: \n") ;
        scanf("%f", &student[i].ScoreSub4) ;
        printf("Scores in Subject 5: \n") ;
        scanf("%f", &student[i].ScoreSub5) ;

        // กำหนดเกรดให้แต่ละวิชา
        setGrade(student[i].ScoreSub1, student[i].GradeSub1) ;
        setGrade(student[i].ScoreSub2, student[i].GradeSub2) ;
        setGrade(student[i].ScoreSub3, student[i].GradeSub3) ;
        setGrade(student[i].ScoreSub4, student[i].GradeSub4) ;
        setGrade(student[i].ScoreSub5, student[i].GradeSub5) ;

        
    }

    // แสดงผล
    for(int i = 0; i < 3; i++) {
        float avg = (student[i].ScoreSub1 + student[i].ScoreSub2 + student[i].ScoreSub3 +
                     student[i].ScoreSub4 + student[i].ScoreSub5) / 5.0 ;

        printf("\n--- Student %d ---\n", i + 1) ;
        printf("Name : %s\n", student[i].Name) ;
        printf("ID   : %s\n", student[i].ID) ;
        printf("Scores : %.2f %.2f %.2f %.2f %.2f\n",
            student[i].ScoreSub1, student[i].ScoreSub2,
            student[i].ScoreSub3, student[i].ScoreSub4,
            student[i].ScoreSub5) ;
        printf("Grades : %s %s %s %s %s\n",
            student[i].GradeSub1, student[i].GradeSub2,
            student[i].GradeSub3, student[i].GradeSub4,
            student[i].GradeSub5) ;
        printf("Average Score : %.2f\n", avg) ;
    }

    return 0 ;
}