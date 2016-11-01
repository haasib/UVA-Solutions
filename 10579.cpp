import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String [] args){
        Scanner in=new Scanner(System.in);
        while(in.hasNext()){
            int n=in.nextInt();
            System.out.println(ch(n));
        }
    }
    public static BigInteger ch(int n){
        BigInteger a=BigInteger.ZERO;
        BigInteger b=BigInteger.ONE;
        BigInteger s=BigInteger.ZERO;
        for(int i=2;i<=n;i++){
            s=a.add(b);
            a=b;
            b=s;
        }
        return s;
    }
}
