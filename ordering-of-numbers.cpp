//question//

Rishabh got a task to order the numbers in such a way that all got arrange in non-decreasing order. Write the necessart code to help him.

Input Format

Enter the size ‘n’ and array in two different lines.

Constraints

1<= n <= 20

Output Format

Print sorted array.

Sample Input 0

5
7 5 2 9 6
Sample Output 0

2 5 6 7 9




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
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        int current = a[i];
        j = i-1;
        while(a[j]>current && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

