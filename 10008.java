import java.util.Scanner;
public class Main {
    public static void main(String[]args){
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        String s="";
        in.nextLine();
        for(int i=0;i<n;i++){
            String m=in.nextLine();
            s+=m;
        }
        int []a=new int[26];
        char []ch=new char[26];
        int e=-1;
        s=s.toUpperCase();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='A' && s.charAt(i)<='Z'){
                int c=0;
                for(int j=0;j<s.length();j++){
                    if(j<i && s.charAt(i)==s.charAt(j))
                        break;
                    if(s.charAt(i)==s.charAt(j))
                        c++;
                    if(j==s.length()-1){
                        int t=++e;
                        a[t]=c;
                        ch[t]=s.charAt(i);
                    }
                }
            }
        }
        for(int i=0;i<=e;i++){
            for(int j=i+1;j<=e;j++){
                if(a[i]<a[j]){
                    int t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    char tt=ch[i];
                    ch[i]=ch[j];
                    ch[j]=tt;
                }
                else if(a[i]==a[j]){
                    if(ch[i]>ch[j]){
                        char tt =ch[i];
                        ch[i]=ch[j];
                        ch[j]=tt;
                    }
                }
            }
        }
        for(int i=0;i<=e;i++)
            System.out.println(ch[i]+" "+a[i]);
    }
}
