class Solution {
   public int[] solution(int brown, int yellow) {
        int[] answer = {};
        int totla=brown+yellow;
        for(int i =1;i<=totla;i++){
            for(int j=1;j<=i;j++){
                if(i*j==totla&&(i-2)*(j-2)==yellow){
                    return new int[]{i,j};
                }
            }
        }
        return new int[]{};
    }
}