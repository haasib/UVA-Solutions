import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String [] args){
        Scanner in=new Scanner(System.in);
        while(in.hasNext()){
            int b=in.nextInt();
            if(b==0)
                break;
            String a=in.next();
            String c=in.next();
            BigInteger m=new BigInteger(a,b);
            BigInteger n=new BigInteger(c,b);
            System.out.println(m.mod(n).toString(b));
        }
    }
}
