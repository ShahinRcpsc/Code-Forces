      /*
      Author: MSHS
      problen link: https://codeforces.com/problemset/problem/71/A
      
      */
#include <stdio.h>
#include <string.h>
int main() {
    int n, len, i;
    // n means how many line contain 
    // len  for counting string length 
    // i to run for loop 

    char str[100];
    scanf("%d", &n); 
    for (i = 0; i < n; i++) {
         scanf("%s", str);
         len = strlen(str);
         if(len > 10) {
		 printf("%c%d%c\n", str[0], len - 2, str[len - 1]);
           }
         else{
           printf("%s\n", str);
          }
        }
 	return 0;
}
