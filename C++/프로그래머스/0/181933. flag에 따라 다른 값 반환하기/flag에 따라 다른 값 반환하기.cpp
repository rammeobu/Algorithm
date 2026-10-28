#include <string>
#include <vector>
#include <iostream>
using namespace std;


int solution(int a, int b, bool flag) {
    int answer = 0;
    if(flag){
        answer=a+b;
    }else
        answer=a-b;
    return answer;
}
int main (void){
    int a,b;
    bool flag;
    cin >> a>>b>>flag;
    cout<<solution(a,b,flag)<<endl;
    return 0;

}