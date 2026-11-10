import java.util.*;
class Solution {
    public long solution(int n, int[] times) {
        long answer = 0;
        long l=0;
        Arrays.sort(times);
        long r=(long)times[times.length-1]*n;
      
        while(l<=r){
           long sum = 0;
           long mid=(l+r)/2;
            for(int i=0;i<times.length;i++){
                sum+=mid/times[i];
            }
            if(sum<n){
               
                l=1+mid;
            }else if(sum>=n){
                r=mid-1;
                answer=mid;
            }
        }
        return answer;
    }
}