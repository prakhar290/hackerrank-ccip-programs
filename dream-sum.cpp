//question//

Kartik got some numbers as input & a task to verify that the provided numbers can help him to get the dream sum is not.

Dream Sum: If number of elements are even and sum of all elements is -1 then -1 is the dream sum.

Input Format

Input the size of array ‘n’ and elements in two separate lines

Constraints

1 <= n < =20

Output Format

Print ‘Yes’ else ‘No’ accordingly.

Sample Input 0

5
-1 1 2 -2 -1
Sample Output 0

No
Sample Input 1

4
8 -11 5 -3
Sample Output 1

Yes



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    if(n%2==0 && sum==-1)
        cout<<"Yes";
    else
        cout<<"No";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
