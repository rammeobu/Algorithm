import java.util.PriorityQueue;
class Solution {
    public int solution(int[] scoville, int K) {
        PriorityQueue<Integer> pq=new PriorityQueue<>();
        int ans=0;
        for(int x:scoville){
            pq.add(x);
        }
        while (pq.peek()<K){
            if(pq.size()<2) return -1;
            int a=pq.poll();
            int b=pq.poll();
            pq.add(a+(b*2));
            ans++;
        }
        return ans;
    }
}