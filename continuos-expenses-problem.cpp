//question//

Sudhakar is spending money from his collection each day he spend 20 rupees on fast food. After n no of days how much total money has he in his collection?Initially he has 37000 rs.

Input Format

one integer input which will denote total number of days

Constraints

Constraint maximum this fast food eating will done for 30 days

Output Format

output will have two lines, first line will display list of his money remaining on daily basis. second line will display total sum of money in his collection.

Sample Input 0

4
Sample Output 0

36980 36960 36940 36920
36920


//solution//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,total=37000;
    cin>>n;
    for(i=0;i<n;i++)
    {
        total = total - 20;
        cout<<total<<" ";
    }
    cout<<endl<<total;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
