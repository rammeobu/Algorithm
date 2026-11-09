import java.util.Arrays;
class Solution {
    public int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;
        int []cloth=new int[n+2];
        Arrays.fill(cloth,1);
        for(int x:lost)cloth[x]--;
        for(int x:reserve)cloth[x]++;
        for (int i=1;i<=n;i++){
            if(cloth[i]==0){
                if(cloth[i-1]==2){
                    cloth[i-1]--;cloth[i]++;
                }else if(cloth[i+1]==2) {cloth[i+1]--;cloth[i]++;};
            }
        }
        for(int x:cloth){
            if(x>=1) answer++;
        }
        return answer-2;
    }
}