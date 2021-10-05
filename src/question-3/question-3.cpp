#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int  square (int num )
{
num=num*num;

return num;
}
int main()

{

int (*op)(int );
 op = &square;
 auto nums=vector<int>{1,2,3,4};
transform(nums.begin(), nums.end(), nums.begin(), op);
cout<<nums.at(1);

    return 0;


}