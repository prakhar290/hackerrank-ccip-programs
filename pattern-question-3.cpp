//question//

Print the corresponding pattern for different values of ‘n’

Input Format

Enter the value of ‘n’.

Constraints

1<= n <= 10

Output Format

Print the required pattern

Sample Input 0

3
Sample Output 0

***
**
*




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
    for(i=n;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
