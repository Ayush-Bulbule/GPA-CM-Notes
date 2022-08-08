/* Write programs to show try and catch block for exception handling, Catching
 and multiple catch statement. */
//19CM007 Ayush Shashikant Bulbule

public class Practical20 {

  public static void main(String args[]) {
    int invalid = 0;
    int number, count = 0;
    for (int i = 0; i < args.length; i++) {
      try {
        number = Integer.parseInt(args[i]);
      } catch (NumberFormatException e) {
        invalid = invalid + 1;
        System.out.println("Invalider : " + args[i]);
        continue;
      } catch (Exception ex) {
        ex.printStackTrace();
      }
      count = count + 1;
    }
    System.out.println("Valid Arguments = " + count);
    System.out.println("Invalid Arguments = " + invalid);
  }
}
