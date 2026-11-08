import java.awt.*;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
class Solution {
   int bfs(int[][]maps){
        int n=maps.length;
        int m=maps[0].length;
        Queue<int[]>q=new LinkedList<>();
        int[][] dist=new int[n][m];
        q.add(new int[]{0,0});
        dist[0][0]=1;
        int []dx={1,-1,0,0};
        int []dy={0,0,1,-1};
        while (!q.isEmpty()){
            int[] cur=q.poll();
            for(int d=0;d<4;d++){
                int nx=cur[0]+dx[d],ny=cur[1]+dy[d];
                if(nx<0||ny<0||nx>=n||ny>=m) continue;
                if(dist[nx][ny]!=0||maps[nx][ny]==0) continue;
                dist[nx][ny]=dist[cur[0]][cur[1]]+1;
                q.add(new int[]{nx,ny});
            }
        }
        if (dist[n-1][m-1]!=0){
            return dist[n-1][m-1];
        }else return -1;
       
    }
    public int solution(int[][] maps) {
        int answer = 0;
        answer=bfs(maps);
        return answer;
    }
}