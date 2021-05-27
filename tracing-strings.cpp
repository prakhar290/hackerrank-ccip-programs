//question//

Abhinav got the task to print the elements present at odd positions inside the string separated by a comma. Assume indexing starts from 0.

Input Format

Input a string of length n.

Constraints

Nothing

Output Format

Print space separated characters.

Sample Input 0

aryan
Sample Output 0

r a
Sample Input 1

ara
Sample Output 1

r



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    char a[100];
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
            continue;
        else
            cout<<a[i]<<" ";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
