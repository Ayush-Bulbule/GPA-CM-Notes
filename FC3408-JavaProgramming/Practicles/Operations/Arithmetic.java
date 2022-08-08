package Operations;

public class Arithmetic {
    
    int num1,num2;

    public Arithmetic(int num1,int num2) {
        this.num1 = num1;
        this.num2 = num2;
    }

    public int add(){
        return num1 + num2;
    }
    public int sub(){
        return num1 - num2;
    }
    public int mult(){
        return num1 * num2;
    }
    public int div(){
        return num1 / num2;
    }

    public void printNums(){
        System.out.println("Num1: "+num1);
        System.out.println("Num2: "+num2);
    }
}
