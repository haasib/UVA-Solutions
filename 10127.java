import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String [] args){
        Scanner in=new Scanner(System.in);
        while(in.hasNext()){
            BigInteger n=in.nextBigInteger();
            BigInteger a=BigInteger.ONE;
            int c=1;
            while(a.mod(n).compareTo(BigInteger.ZERO)!=0){
                a=a.multiply(BigInteger.TEN);
                a=a.add(BigInteger.ONE);
                c++;
            }
            System.out.println(c);
        }
    }
}
