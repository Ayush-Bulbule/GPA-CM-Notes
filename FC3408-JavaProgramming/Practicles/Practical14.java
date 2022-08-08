
//19CM007 Ayush Shashikant Bulbule
//Write programs to practice-using String class and 
//its methods.-using String Buffer class and its methods.

public class Practical14 {
    
    public static void main(String[] args) {
        String name = "Ayush";
        String sname = new String("Bulbule");

        int len = name.length();
        System.out.println("Length of string name is :"+len);

        String fullname = name.concat(sname);

        System.out.println("Full name is :"+fullname);

        System.out.println("Char At 5 in string name:"+ name.charAt(3));

        System.out.println("Comparing String name and sname: "+name.equals(sname));

        System.out.println("Ayush ends with h?"+ name.endsWith("h"));

        System.out.println(fullname.toLowerCase());
        System.out.println(fullname.toUpperCase());


        String sub = fullname.substring(0, 5);

        System.out.println("Sub string : "+sub);
    }
}
