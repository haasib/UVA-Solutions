import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int k=in.nextInt();
        for(int p=0;p<k;p++){
            BigInteger t=in.nextBigInteger();
            BigInteger s=in.nextBigInteger();
            BigInteger d=in.nextBigInteger();
            BigInteger m=s.multiply(t).multiply(new BigInteger("86400"));
            BigInteger n=d.multiply(new BigInteger("1000000"));
            BigInteger r=((s.multiply(m.add(n))).divide(m));
            BigInteger rr=r.subtract(s);
            if(rr.compareTo(BigInteger.ZERO)<=0){
                if(rr.compareTo(BigInteger.ZERO)!=0)
                    rr=rr.abs().subtract(BigInteger.ONE);
                System.out.println("Add "+rr+" tons");
            }
            else{         
                System.out.println("Remove "+rr+" tons");
            }
        }
    }
}
