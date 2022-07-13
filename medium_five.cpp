/*
// Too many Floors

Chef and Chefina are residing in a hotel.

There are 1010 floors in the hotel and each floor consists of 1010 rooms.

Floor 11 consists of room numbers 11 to 1010.
Floor 22 consists of room numbers 1111 to 2020.
\ldots…
Floor ii consists of room numbers 10 \cdot (i-1) + 110⋅(i−1)+1 to 10 \cdot i10⋅i.
You know that Chef's room number is XX while Chefina's Room number is YY.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X, YX,Y, the room numbers of Chef and Chefina respectively.
Output Format
For each test case, output the number of floors Chef needs to travel to reach Chefina's room.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq X, Y \leq 1001≤X,Y≤100
X \neq YX=Y
*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    while(n--){
        int m,f,mf,ff;
        cin>>m>>f;
        
        for(int i=1;i<=10;i++){
            if(m>= ((10*(i-1))+1) && m<=(10*i)){
                mf=i;
            }
            if(f>= ((10*(i-1))+1) && f<=(10*i)){
                ff=i;
            }
        }
        if(mf==ff){
            cout<<0<<endl;
        }
        if(ff>mf){
            cout<<ff-mf<<endl;
        }
        if(mf>ff){
            cout<<mf-ff<<endl;
        }
    }
    

    return 0;
}
