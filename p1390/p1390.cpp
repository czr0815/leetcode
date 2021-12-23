//
// Created by 13903 on 2021/12/14.
//

#include "memory.h"
#include "stdio.h"
#include <vector>
using namespace std;

#define maxLen 100000
bool isPrime[maxLen];
int prime[maxLen], len;

void getPrimes(){
    memset(isPrime, false, maxLen);
    isPrime[0] = isPrime[1] = true;
    for(int i=2; i<=maxLen; i++){
        for(int j=2; i*j<=maxLen; j++){
            if(i*j<maxLen){
                isPrime[i*j]=true;
            }
        }
    }
    len = 0;
    for(int i=2; i<maxLen; i++){
        if(!isPrime[i]){
            prime[len++]=i;
        }
    }
}

int sumFourDivisors(vector<int>& nums){
    int ans = 0;
    getPrimes();
    vector<int>::iterator it = nums.begin();
    while (it!=nums.end()){
        int num = *it;
        for(int i=0; i<len; i++){
            if(num%prime[i]==0){
               if(!isPrime[num/prime[i]]&&prime[i]!=num/prime[i]){
                   ans += 1 + num + prime[i] + num/prime[i];
                   //printf("%d %d %d\n", num, prime[i], num/prime[i]);
               }
               break;
            }
        }
        it++;
    }
    return ans;
}

int main(){
    vector<int> tmp = {21, 4, 7};
    printf("%d\n", sumFourDivisors(tmp));
}