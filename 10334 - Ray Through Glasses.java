import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        BigInteger s[]=F();
        while(in.hasNext()){
            int a=in.nextInt();
            System.out.println(s[a]);
        }
    }
    public static BigInteger [] F(){
        BigInteger a[]=new BigInteger[1001];
        a[0]=BigInteger.ONE;
        a[1]=a[0].add(a[0]);
        for(int i=2;i<1001;i++)a[i]=a[i-2].add(a[i-1]);
        return a;
    }
}
