//question//

Kanishak got a task to find the two consecutive capital letters inside the string. If they exist return true else return false.

Input Format

Enter the string of size ‘n’.

Constraints

1<= n <= 20

Output Format

Print ‘Yes’ or ‘No’

Sample Input 0

arYAn
Sample Output 0

Yes
Sample Input 1

suDAma
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
    string str;
    bool flag = false;
    cin>>str;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            if(str[i+1]>='A' && str[i+1]<='Z')
                flag = true;
        }
        else 
            continue;
    }
    if(flag)
        cout<<"Yes";
    else 
        cout<<"No";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
