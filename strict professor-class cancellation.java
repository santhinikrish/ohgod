/*input: 5 3
9:30
9:30 9:38 9:31 9:32 9:31
output:
yes
*/ 


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        String str=sc.next();
        String[] s=str.split(":");
        int a=Integer.parseInt(s[0]);
        int b=Integer.parseInt(s[1]);
        String c[]=new String[n];
        for(int i=0;i<n;i++){
            c[i]=sc.next();
        }
        int x,y,count=0;
        for(int i=0;i<n;i++){
            String[] p=c[i].split(":");
            x=Integer.parseInt(p[0]);
            y=Integer.parseInt(p[1]);
            if(a>x){
                count++;
            }else if(a==x){
                if(b>=y){
                    count++;
                }
            }
        }
        if(count>=k){
            System.out.print("No");
        }else{
            System.out.print("Yes");
        }
	}
}


import java.util.*;
public class Hello {

    public static void main(String[] args) {
		//Your Code Here
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        String str=sc.next();
        String[] s=str.split(":");
        int a=Integer.parseInt(s[0]);
        int b=Integer.parseInt(s[1]);
        String c[]=new String[n];
        for(int i=0;i<n;i++){
            c[i]=sc.next();
        }
        int x,y,count=0;
        for(int i=0;i<n;i++){
            String[] p=c[i].split(":");
            x=Integer.parseInt(p[0]);
            y=Integer.parseInt(p[1]);
            if(a>x){
                count++;
            }else if(a==x){
                if(b>=y){
                    count++;
                }
            }
        }
        if(count>=k){
            System.out.print("No");
        }else{
            System.out.print("Yes");
        }
    }
}