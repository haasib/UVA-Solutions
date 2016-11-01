import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int k=in.nextInt();
        for(int p=1;p<=k;p++){
            BigInteger a=in.nextBigInteger();
            BigInteger b=in.nextBigInteger();
            System.out.println(a.subtract(b));
        }
    }
}
