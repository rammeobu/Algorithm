import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;
class Solution {
     public int[] solution(String[] id_list, String[] report, int k) {
        int[] answer = new int[id_list.length];
        HashSet<String> set=new HashSet<>();
        HashMap<String, Integer> count=new HashMap<>();
        HashMap<String,Integer>idx=new HashMap<>();
        for (String x:report){
            set.add(x);
        }
        for(String name:id_list){
            count.put(name,0);
        }//각 카운트 초기화
        int i=0;
        for(String r:id_list){
            idx.put(r,i);
            i++;
        }//각 사용자 인덱스 정의
        for(String r:set){
            String []s=r.split(" ");
            count.put(s[1],count.getOrDefault(s[1],0)+1);
        }

        System.out.println(count);
        for(String r:set){
            String []s=r.split(" ");
            if(count.get(s[1])>=k){
                answer[idx.get(s[0])]++;
            }
        }
        return answer;
     }
}