import java.util.Scanner;
public class Main {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int tc=in.nextInt();
        in.nextLine();
        for(int p=1;p<=tc;p++){
            String s=in.nextLine();
            String []m=s.split(" ");
            int []a=new int [m.length];
            int c=0;
            for(int i=0;i<m.length;i++){
                a[i]=Integer.parseInt(m[i]);
            }
            for(int i=0;i<a.length-1;i++){
                for(int j=i+1;j<a.length;j++){
                    int t=gcd(a[i],a[j]);
                    if(c<t)
                        c=t;
                }
            }
            System.out.println(c);
        }
    }
    public static int gcd(int a,int b){
        if(b==0)return a;
        return gcd(b,a%b);
    }
}
