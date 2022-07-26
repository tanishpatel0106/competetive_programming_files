import java.util.*;

class DIVAB{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        try {
            int t = scan.nextInt();
            while(t>0){
                int x;
                int a = scan.nextInt();
                int b = scan.nextInt();
                int n = scan.nextInt();
                if(a%b == 0){
                    System.out.println(-1);
                    continue;
                }
                x = n;
                if(x%a == 0){
                    x = n + a - (x%a);
                }
                while(!(x%a==0 && x%b!=0)){
                    x+=a;
                }
                System.out.println(x);
                t--;
            }
        } catch (Exception e) {
        }
        scan.close();
    }
}