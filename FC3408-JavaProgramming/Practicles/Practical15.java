import java.util.Vector;

//19CM007 Ayush Shashikant Bulbule
//Practical 15: Develop a program to implement Vector class and its metho
public class Practical15 {
    
    public static void main(String[] args) {
        
        Vector<Integer> v = new Vector(2,4);
        int sum = 0;

        System.out.println("Vector size: "+v.size());

        System.out.println("Vector capacity: "+v.capacity());

        for(int i= 1;i<=10;i++){
            v.add(i);
        }

        System.out.println("Vector v = "+v);
        System.out.println("Vector size: "+v.size());
        System.out.println("Vector capacity: "+v.capacity());


        v.remove(4);
        v.remove(6);
        v.remove(5);

        System.out.println("Vector v = "+v);

        for(Integer i:v){
            sum = sum+i;
        }

        System.out.println("Sum of all elements is: "+sum);
    }
}
