import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String []args){
        Scanner in =new Scanner(System.in);
        while(in.hasNext()){
            int n=in.nextInt();
            BigInteger a=BigInteger.ONE;
            for(int i=2;i<=n;i++)
                a=a.multiply(BigInteger.valueOf(i));
            ch(a,n);
        }
    }
    public static void ch(BigInteger p,int n){
        String s=String.valueOf(p); 
        int a=0;
        for(int i=s.length()-1;i>=0;i--){
            int t=(int)s.charAt(i)-'0';
            if(t!=0){
                a=t;
                break;
            }
        }
        if(n<10)
             System.out.println("    "+n+" -> "+a);
            else if(n<100)
             System.out.println("   "+n+" -> "+a);
            else if(n<1000)
             System.out.println("  "+n+" -> "+a);
            else if(n<10000)
             System.out.println(" "+n+" -> "+a);
            else
             System.out.println(n+" -> "+a);
    }
}
