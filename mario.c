#include <stdio.h>

int main(void) {

    int n;
    printf("Size:  ");
    scanf("%d", &n);

     for (int b1 = 0; b1 < n; b1++) {
         for (int s1 = 0; s1 < n - b1 - 1; s1++) {
               printf(" ");
            }
         for (int c1 = n; c1 >= n - b1; c1--) {
               printf("#");
        }
        
         for (int s1 = 0; s1 < 1; s1++) {
             printf(" ");
         }
         
         for (int c2 = n; c2 >= n - b1; c2--) {
               printf("#");
        }
        printf("\n");
     }
     


}
