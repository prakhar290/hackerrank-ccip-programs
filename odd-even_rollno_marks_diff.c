//question//

In a class there can be ’n’ students, whose roll numbers starts from zero ’0’. Two practicals assigned to all the students such that all the students with even roll number will do practical 1 and with odd roll numbers do practical 2.

Marks alloted to each student and store in the form of array. We need to find the absolute difference between the average marks of students with even roll number & odd roll numbers.

Input Format

Accept marks of ‘n’ students.

Constraints

1 <= n <= 50 1 <= marks <= 100

Output Format

Print the absolute value of difference of averages

Sample Input 0

5
25 36 48 29 95
Sample Output 0

23.5



//solution//

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,sumodd=0,sumeven=0,diff=0,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if(i%2==0)
{sumeven=sumeven+a[i];}
else
{sumodd=sumodd+a[i];}
}
if(sumodd<sumeven)
{diff=sumeven-sumodd;}
else
{diff=sumodd-sumeven;}
printf("%d",diff);
    return 0;
}