import java.util.Scanner;
import java.math.BigDecimal;
public class Main {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int k=0;
        while(in.hasNext()){
            k++;
            BigDecimal a=in.nextBigDecimal();
            BigDecimal b=in.nextBigDecimal();
            System.out.print("Case "+k+": ");
            if(a.compareTo(b)>0)
                System.out.println("Bigger");
            else if(a.compareTo(b)==0)
                System.out.println("Same");
            else
                System.out.println("Smaller");
        }
    }
}
