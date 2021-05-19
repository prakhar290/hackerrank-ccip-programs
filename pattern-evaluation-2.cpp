//question//

Print the Pattern as given in sample cases.

Input Format

Enter the value ‘n’.

Constraints

1<= n <= 10

Output Format

Print respective pattern.

Sample Input 0

3
Sample Output 0

A
AB
ABC



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        char ch = 'A';
        for(j=0;j<=i;j++)
        {
            cout<<ch;
            ch = ch + 1;
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
