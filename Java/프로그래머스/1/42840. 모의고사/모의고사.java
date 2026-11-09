import java.awt.*;
import java.util.ArrayList;
import java.util.Arrays;
class Solution {
public int[] solution(int[] answers) {
        int[] answer = {};
        ArrayList<Integer> list=new ArrayList<>();
        int [] p1={1,2,3,4,5};
        int [] p2={2,1,2,3,2,4,2,5};
        int [] p3={3,3,1,1,2,2,4,4,5,5};
        int []s=new int[3];
        int max=0;
        for(int i=0;i<answers.length;i++){
            if (answers[i]==p1[i% p1.length]) s[0]++;
            if (answers[i]==p2[i% p2.length]) s[1]++;
            if (answers[i]==p3[i% p3.length]) s[2]++;
        }
        for(int x:s){
            if(x>max) max=x;
        }
        if(max==s[0])list.add(1);
        if(max==s[1])list.add(2);
        if(max==s[2])list.add(3);
        return list.stream().mapToInt(i->i).toArray();

    }
}