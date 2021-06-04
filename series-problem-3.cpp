//question//

Solve the following series by observing the reuired patterns.

1 + 2 + 3 + 4 + 5 + 6 = 90

2 + 6 + 9 + 5 + 8 + 1 = 238

9 + 4 + 2 + 3 + 5 + 7 = ?

Input Format

Input contain of 6 numbers.

Constraints

No more constraints

Output Format

Print the desired output

Sample Input 0

1 2 3 4 5 6
Sample Output 0

90
Sample Input 1

2 6 9 5 8 1
Sample Output 1

238



//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[6];
    for(int i=0;i<6;i++)
    {
        cin>>a[i];
    }
    int sum1=0,sum2=0;
    for(int i=0;i<6;i++)
    {
        if(i<3)
        {
            sum1 = sum1+a[i];
        }
        else
            sum2 = sum2+a[i];
    }
    cout<<sum1*sum2;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
