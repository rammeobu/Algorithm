import java.util.HashMap;

class Solution {
     public int solution(String[][] clothes) {
        HashMap<String,Integer> map=new HashMap<>();
        int answer = 1;
        for(String[]  c:clothes){
            String type=c[1];
            map.put(type,map.getOrDefault(type,0)+1);
        }
        for(int v:map.values()){
            answer*=(v+1);
        }
        return answer-1;
    }
}