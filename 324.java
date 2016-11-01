import java.math.BigInteger;
import java.util.Scanner;

public class Main {
    public static void main(String []args){
        Scanner in =new Scanner(System.in);
        while(in.hasNext()){
            int n=in.nextInt();
            if(n==0)
                break;
            BigInteger a=BigInteger.ONE;
            for(int i=2;i<=n;i++)
                a=a.multiply(BigInteger.valueOf(i));
            ch(a,n);
        }
    }
    public static void ch(BigInteger p,int n){
        String s=String.valueOf(p);
        int []a=new int [10];
        for(int i=0;i<s.length();i++){
            int t=(int)s.charAt(i)-'0';
            a[t]++;
        }
        System.out.println(n+"! --");
        System.out.println("    (0)    "+a[0]+"    (1)    "+a[1]+"    (2)    "+a[2]+"    (3)    "+a[3]+"    (4)    "+a[4]);
        System.out.println("    (5)    "+a[5]+"    (6)    "+a[6]+"    (7)    "+a[7]+"    (8)    "+a[8]+"    (9)    "+a[9]);
    }
}
