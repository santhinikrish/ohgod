// Define the class Rectangle below
public class Rectangle{
    private int len,bre;
    public int getArea(){
        return len*bre;
    }
    public int getLength(){
        return len;
    }
    public void setLength(int len){
        this.len=len;
    }
    public int getBreadth(){
        return bre;
    }
    public void setBreadth(int bre){
        this.bre=bre;
    }
}
import java.util.Scanner;
 public class Hello { 
public static void main(String[] args) { 
Scanner sc = new Scanner(System.in); 
Rectangle r = new Rectangle(); 
r.setLength(sc.nextInt()); 
r.setBreadth(sc.nextInt()); 
System.out.print(r.getArea()); 
} 
}