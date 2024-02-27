#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B

    int countBitsFlip(int a, int b){
        
       int maskXor=a^b;//set all change bit
       int count=0;
       while(maskXor){
           maskXor=maskXor&(maskXor-1);
           count++;
       }
       return count;
    }
        
    
};
int main(){
    int num0,num1;
    cin>>num0>>num1;
    Solution obj;
    int ans=obj.countBitsFlip(num0,num1);
    cout<<ans<<endl;
    return 0;
}