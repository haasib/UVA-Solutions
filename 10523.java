import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String [] args){
        Scanner in=new Scanner(System.in);
        while(in.hasNext()){
            int n=in.nextInt();
            BigInteger a=in.nextBigInteger();
            BigInteger s=BigInteger.ZERO;
            for(int i=1;i<=n;i++){
                s=s.add(a.pow(i).multiply(BigInteger.valueOf(i)));
            }
            System.out.println(s);
        }
    }
}
