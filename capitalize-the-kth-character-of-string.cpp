//question//

You need to capitalise the kth character of the input string.

Input Format

Input a string of length ânâ and an integer âkâ in two different lines.

Constraints

1 <= n <=20 1 <= k <=20

Output Format

Print the string after capitalize the character.

Sample Input 0

2
kiet
Sample Output 0

kIet


//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,k;
    char a[20];
    cin>>k;
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {
        if(i==k-1)
            a[i] = toupper(a[i]);
    }
    cout<<a;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
