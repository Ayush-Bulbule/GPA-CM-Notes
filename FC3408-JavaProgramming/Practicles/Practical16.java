
//19CM007
//Practical 16: Develop a program to implement Wrapper classes and their method.
public class Practical16 {

    public static void main(String[] args) {
        Double d = 23.5;
        Integer i = 25;
        Character c = 'A';

        String  num = "12345";

        System.out.println("Double d = " + d);
        System.out.println("Integer i = " + i);
        System.out.println("Character c = " + c);

        Double d1 = Double.parseDouble(num);

        Integer i1 = Integer.parseInt(num);

        System.out.println("Interger Methods:");
        System.out.println("Double value: "+i1.doubleValue());
        System.out.println("hashcodeS"+i1.hashCode());
        System.out.println(i1.equals(1234));


        System.out.println("Byte Value of Double"+d.byteValue());
        System.out.println("Int value of Double"+d.intValue());

    }

}
