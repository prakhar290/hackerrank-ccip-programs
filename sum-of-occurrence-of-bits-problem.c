//question//

Ravi & Reema got a task to find number of 1’s & 0’s respectively as 'n1’ & ‘n2’ in the binary representation of a number. Both perform their tasks independently and at the end to show their team work they share their outputs and find the sum of both the outputs.

Input Format

Accept a number ‘n’

Constraints

1 <= n <= 3000

Output Format

Print the sum of ‘n1’ & ‘n2’

Sample Input 0

6
Sample Output 0

3


//solution//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num,n,countone=0,countzero=0,rem;
scanf("%d",&num);
n = num;
while(n>0)
{
rem = n%2;
if(rem==0)
++countzero;
else
++countone;
n=n/2;
}
int total = countone+countzero;
printf("%d",total);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}