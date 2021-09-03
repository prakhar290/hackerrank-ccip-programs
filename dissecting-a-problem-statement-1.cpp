//question//


Usually, problems require some critical thinking about how to tackle it or how to implement the idea. For example, you might need to tackle the problem from behind, or use some efficient data structures.

Problem statements also usually contain stories or background information. You need to be able to extract the question and the required algorithm from the problem statement.

The next few challenges in this section are taken from past programming contests. So, you may need to spend some time to think about how to solve them, instead of jumping into coding. They will give you an idea of what real problem statements look like, how to formulate the correct ideas, and implement them using code. Remember, if you need help, you can always send me a private message here through Hackerrank or through Facebook.

In this problem, you should help a fictional character called Gabriel.

Gabriel is a programmer, but more than that, he loves food. During dismissal, he usually goes out of school to the nearby Ersao, which is a restaurant that serves some Chinese food.

He noticed that the store sells N items of food. The prices of the items on the menu are listed, as C1,C2,C3,...,CN. This means that Ci represents the price of the i(th) item.

He thinks that the more expensive the food is, the higher class it is. Since he wants to be classy, he will buy the most expensive food item. If there are multiple most expensive food items, he will only buy one of them.

Please tell him, how much money does he need to buy the most expensive food item?

Input Format

image

Constraints

N<1000000

Output Format

Output a single integer, the amount of money Gabriel should bring, so that he can buy the most expensive item on the menu.

Sample Input 0

5
10 20 200 30 15
Sample Output 0

200



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
    int a;
    vector<int> cost;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cost.push_back(a);
    }
    sort(cost.begin(),cost.end());
    cout<<cost[n-1];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
