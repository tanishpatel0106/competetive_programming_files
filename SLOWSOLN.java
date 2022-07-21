import java.util.*;

public class SLOWSOLN{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int test = in.nextInt();
		for(int i=1; i<=test; i++){
		    int mxtst = in.nextInt();
		    int mx_n = in.nextInt();
		    int mxsum = in.nextInt();
		    int dupl = mx_n;
		    int sm = ((int)Math.pow(dupl,2));
		    int c = 1;
		    while(mx_n<=mxsum && c<mxtst){
                if (mxsum-mx_n < dupl){
                    int mn = mxsum - mx_n;
                    sm = sm + ((int)Math.pow(mn, 2));
                    mx_n = mx_n + mn;
                    c++;
                }
                else{
                    mx_n = mx_n + dupl;
                    sm = sm + ((int)Math.pow(dupl, 2));
                    c++;
                }
            }
            System.out.println(sm);
		}
        in.close();
	}
}