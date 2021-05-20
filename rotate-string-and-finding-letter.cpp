//question//

Karan got a task to left rotate a string by one place. You need to help him by designing an algorithm that gives the second letter of rotated string

Input Format

Enter the string of size ‘n’.

Constraints

1<= n <= 20

Output Format

Print the letter.

Sample Input 0

aryan
Sample Output 0

y



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char str[20];
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        str[i] = str[i+1];
    }
    cout<<str[1];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
