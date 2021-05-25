//question//

You need to find the sum of digits of a number ‘n’ using recursion.

Note: Solve this question using recursion only.

Input Format

Enter the number ‘n’.

Constraints

1<= n <= 5000

Output Format

Print the sum

Sample Input 0

499
Sample Output 0

22



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int n)
{
    int add = 0,rem = 0;
    while(n>0)
    {
        rem  = n%10;
        add = add + rem;
        n = n/10;
    }
    return add;
}
int main() {
    int num;
    cin>>num;
    cout<<sum(num);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
