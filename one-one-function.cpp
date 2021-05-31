//question//

Given two different sets ‘A’ & ‘B’ of Integers with ‘n’ & ‘m’ elements respectively. Find the number of one-one functions possible.

Input Format

Enter the value of ‘n’ & ‘m’ separated by space.

Constraints

1 <= n,m <=10

Output Format

Print the output.

Sample Input 0

5 4
Sample Output 0

120
Sample Input 1

5 3
Sample Output 1

60



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int num)
{
    int fact = 1;
    while(num>0)
    {
        fact  = fact*num;
        num--;
    }
    return fact;
}
int main() {
    int n,m,total;
    cin>>n>>m;
    total = factorial(n)/factorial(n-m);
    cout<<total;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
