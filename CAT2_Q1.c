// i .An array is an ordered collection of finite elements of the same data type and stored at adjacent memory location.

//ii
 /* int scores[4][2] = {
    {65, 92},
    {84, 72},
    {35, 70},
    {54, 67}
};
*/

/*ii*/ 
#include <stdio.h>

int main() {
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {54, 67}
    };for(int i = 0; i < 4; i++) {          
        for(int j = 0; j < 2; j++) {      
            printf("%d ", scores[i][j]);
        }
        printf("\n");                   
      }  

    return 0;
  }