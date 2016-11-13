import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        while(in.hasNext()){
            String s=in.next();
            if(s.charAt(0)=='0' && s.charAt(1)=='x'){
                s=s.substring(2, s.length());
                System.out.println(hex2decimal(s));
            }
            else{
                int a=Integer.parseInt(s);
                if(a<0)
                    break;
                System.out.println("0x"+Integer.toString(a, 16).toUpperCase());
            }
        }
    }
    public static int hex2decimal(String s) {
        String digits = "0123456789ABCDEF";
        s = s.toUpperCase();
        int val = 0;
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            int d = digits.indexOf(c);
            val = 16*val + d;
        }
        return val;
    }
}
