//question//


Rahul want to solve the mystery i.e First he have to Convert the matrix into Spiral Form and the do it clockwise rotation.

if n=3

Spiral =>

1 2 3

8 9 4

7 6 5

Then do it Clockwise =>

7 8 1

6 9 2

5 4 3

Input Format

n=> It is the number i.e. n*n matrix format.

Constraints

1<=n<=25

Output Format

Print the desired matrix in spiral clock format.

Sample Input 0

3
Sample Output 0

7  8  1
6  9  2
5  4  3



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
    
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j] = 0;
        }
    }
    int cols = 0,cole = n-1,rows = 0,rowe = n-1,index = 1;
    while(cols<=cole || rows<=rowe)
    {
        //rowstart
        for(int j=cols;j<=cole;j++)
        {
            arr[rows][j] = index;
            index++;
        }
        rows++;
        //colend
        for(int i=rows;i<=rowe;i++)
        {
            arr[i][cole] = index;
            index++;
        }
        cole--;
        //rowend
        for(int j=cole;j>=cols;j--)
        {
            arr[rowe][j] = index;
            index++;
        }
        rowe--;
        //colstart
        for(int i=rowe;i>=rows;i--)
        {
            arr[i][cols] = index;
            index++;
        }
        cols++;
    }
    
    int b[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            b[i][j] = arr[j][i];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            int num = b[i][j];
            b[i][j] = b[i][n-j-1];
            b[i][n-j-1] = num;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
