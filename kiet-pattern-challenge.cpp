//question//


Print the given pattern for the given values of ‘N’.

Example: For N = 5

A

AB

A1C

A12D

A123E

Input Format

Input contains value of N.

Constraints

1 <= N <= 15

Output Format

Print the required pattern.

Sample Input 0

5
Sample Output 0

A
AB
A1C
A12D
A123E
Sample Input 1

4
Sample Output 1

A
AB
A1C
A12D



//solution//


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int count = 1;
        char ch = 'A';
        for(int j=0;j<=i;j++)
        {
            if(i>1 && j>0 && j<i)
            {
                cout<<count;
                count++;
                ch++;
            }
            else
            {
                cout<<ch;
                ch++;
            }
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
