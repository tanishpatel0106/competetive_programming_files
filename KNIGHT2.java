import java.util.*;

public class KNIGHT2 {
    public static int metchk(int sr, int sc, int er, int ec) {
        boolean[][] vis = new boolean[8][8];
        LinkedList<Integer> que = new LinkedList<>();
        int [][] dir = {{-2,1}, {-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
        que.add(sr*8+sc);
        int lvl = 1;
        while(!que.isEmpty()){
            int sz = que.size();
            while(sz-- > 0){
                int ridx = que.removeFirst();
                int rr = ridx/8, rc = ridx%8;
                for(int d=0; d<dir.length; d++){
                    int r = rr + dir[d][0];
                    int c = rc + dir[d][1];
                    if(r>=0 && c>=0 && r<8 && c<8 && !vis[r][c]){
                        vis[r][c] = true;
                        if(r==er && c==ec) return lvl;
                        que.addLast(r*8 + c);
                    }
                }
            }
            lvl++;
        }
        return -1;
    }
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int sr = in.nextInt();
            int sc = in.nextInt();
            int er = in.nextInt();
            int ec = in.nextInt();
            int tmp = metchk(sr, sc, er, ec);
            if(tmp%2 == 0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
        in.close();
    }
}
