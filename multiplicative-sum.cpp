//question//

Rishabh got a task to find multiply two 1-D array in such a way that only relative element get multiplied.

Input Format

Enter the two arrays in two different lines of size ‘n’.

Constraints

1<= n <= 20

Output Format

Print the array obtained after multiplying both.

Sample Input 0

1 2 3 4
2 3 4 5
Sample Output 0

2 6 12 20
Sample Input 1

1 2 3 4
1 2 3 4
Sample Output 1

1 4 9 16




//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[4],b[4],c[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<4;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<4;i++)
    {
        c[i] = a[i]*b[i];
    }
    for(int i=0;i<4;i++)
        cout<<c[i]<<" ";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
