#include <stdio.h>

int main() {
int H ;
int W ;
float Area ;

printf("H : ") ;
scanf("%d", &H) ;         

printf("W : ");
scanf("%d", &W) ;

Area = H * W /2.0 ;
printf("Area = %.1f\n", Area) ;

return 0 ;

}
