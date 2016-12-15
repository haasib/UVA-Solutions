import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        for(int p=1;p<=tc;p++){
            BigInteger a=in.nextBigInteger();
            char c=in.next().charAt(0);
            BigInteger b=in.nextBigInteger();
            BigInteger d=a.gcd(b);
            System.out.println(a.divide(d)+" / "+b.divide(d));
        }
    }
}
