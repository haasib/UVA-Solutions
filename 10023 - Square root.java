import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        while(tc!=0){
            tc--;
            BigInteger n=in.nextBigInteger();
            if(n.compareTo(BigInteger.ONE)==0)System.out.println(1);
            else System.out.println(F(n));
            if(tc!=0)System.out.println("");
        }
    }
    public static BigInteger F(BigInteger n){
        BigInteger B=BigInteger.ZERO,E=n.subtract(BigInteger.ONE),M=BigInteger.ZERO;
        while(E.subtract(B).compareTo(BigInteger.ZERO)>0){
            M=B.add(E).divide(new BigInteger("2"));
            if(M.multiply(M).compareTo(n)==0)break;
            if(M.multiply(M).compareTo(n)>0)E=M;
            else B=M.add(BigInteger.ONE);
            //System.out.println(M+" "+M.multiply(M));
        }
        return M;
    }
}
