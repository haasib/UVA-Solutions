import java.util.Arrays;
import java.util.Scanner;
public class Main {
    public static void main(String []args){
        Scanner in=new Scanner(System.in);
        int k=in.nextInt();
        in.nextLine();
        for(int p=1;p<=k;p++){
            String s=in.nextLine();
            s=s.toLowerCase();
            String m="";
            int d=0;
            for(int i=0;i<s.length();i++){
                int c=0;
                if(s.charAt(i)!=' '){
                for(int j=0;j<s.length();j++){
                    if(j<i && s.charAt(i)==s.charAt(j))
                        break;
                    if(s.charAt(j)==s.charAt(i))
                        c++;
                    if(j==s.length()-1){
                        if(d==c){
                            m+=s.charAt(i);
                        }
                        else if(d<c){
                            d=c;
                            m=""+s.charAt(i);
                        }
                    }
                    
                }
                }
            }
            char []c=m.toCharArray();
            Arrays.sort(c);
            System.out.println(String.valueOf(c));
        }
    }
}
