  /* 
    Author : MSHS 
    Problem Link: https://codeforces.com/problemset/problem/4/A 
   */
   //duscussion about problem
   // w input a number. Which wil be even and greather than 2
    
   // in this  problem you have to inout a even number and 
   // the summation of this number will be even 
   // like this 8 = 6 + 2. 6 and 2 both are even 
   //if the summaton number are even then printf yes
   // otherwise no
   //We can not use 2 though 2 is even 
   //because the summation number of this are not even 2 = 1 + 1

#include <stdio.h>
int main() {
	int w;
	scanf("%d", &w);
	if(w % 2 == 0 && w > 2) {
	    printf("Yes\n");
	}
	else{
		printf("No\n");
	}
    return 0;
}
