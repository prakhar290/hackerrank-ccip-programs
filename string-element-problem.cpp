//question//

Vishal got a task to verify that the given string contain “ra’ as substring or not.

Input Format

Input a string of length n.

Constraints

Nothing

Output Format

Print ‘Yes’ else ‘No’ accordingly.

Sample Input 0

aaryn
Sample Output 0

No
Sample Input 1

araa
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
    char a[100];
    bool flag = false;
    cin>>a;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='r' && a[i+1]=='a')
        {
            flag = true;
            break;
        }    
        else
            continue;
    }
    if(flag==true)
        cout<<"Yes";
    else
        cout<<"No";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
