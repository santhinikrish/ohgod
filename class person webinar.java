// Define the Person class below
class Person{
    private int age;
    public boolean isSenior(){
        return age>=60;
    }
    public int getAge(){
        return age;
    }
    public void setAge(int age){
        this.age=age;
    }
}
import java.util.Scanner; 
public class Hello { 
public static void main(String[] args) { 
Scanner sc = new Scanner(System.in); 
Person p = new Person(); 
p.setAge(sc.nextInt()); 
System.out.println(p.isSenior() ? "Senior" : "Not Senior"); 
} 
}