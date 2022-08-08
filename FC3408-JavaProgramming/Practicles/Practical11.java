//19CM007 Ayush Shashikant Bulbule

//Practical No 11: Write programs to practice the use of single Dimensional array.

public class Practical11 {

    public static void main(String[] args) {
        int[] arr = {2,9,3,45,2,34,56,3,4,76,43,10,32,29,39,44};

        int sum = 0;
        
        for(int n:arr){
            System.out.print(n+"\t");
        }

        for(int n:arr){
            sum += n; 
        }

        double average = ((double) sum)/(double)arr.length;

        System.out.println("\nSum is: "+sum);
        System.out.println("Average is: "+average);
    }
}
