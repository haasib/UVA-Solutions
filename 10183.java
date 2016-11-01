import java.util.Scanner;
import java.math.BigInteger;
public class Main {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        BigInteger []f=new BigInteger[500];
        f[1]=BigInteger.ONE;
        f[2]=f[1].add(BigInteger.ONE);
        for(int i=3;i<500;i++)
            f[i]=f[i-1].add(f[i-2]);
        while(in.hasNext()){
            BigInteger a=in.nextBigInteger();
            BigInteger b=in.nextBigInteger();
            if(a.compareTo(BigInteger.ZERO)==0 && b.compareTo(BigInteger.ZERO)==0)
                break;
            else{
                int c=0;
                for(int i=1;i<500;i++){
                    if(f[i].compareTo(a)>=0 && f[i].compareTo(b)<=0)
                        c++;
                    if(f[i].compareTo(b)>0)break;
                }
                System.out.println(c);
            }
        }
    }
}
