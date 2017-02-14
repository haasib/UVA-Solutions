import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        BigInteger []dp=new BigInteger [1005];
        dp[0]=BigInteger.valueOf(1);
        dp[1]=BigInteger.valueOf(2);
        dp[2]=BigInteger.valueOf(5);
        dp[3]=BigInteger.valueOf(13);
        for(int i=4;i<=1000;i++)dp[i]=dp[i-1].add(dp[i-2].add(dp[i-3]).add(dp[i-1]));
        while(in.hasNext()){
            int n=in.nextInt();
            System.out.println(dp[n]);
        }
    }
}
