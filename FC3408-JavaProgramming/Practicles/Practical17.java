//19Cm007 Ayush Shashikant Bulbule
//Practical17 : Write programs to implementing interfaces and extending interface

interface Vehical {
    void changeGear(int a);

    void increaseSpeed(int a);

    void applyBrakes(int a);
}

class Bicycle implements Vehical {
    int speed;
    int gear;

    @Override
    public void changeGear(int newG) {
        gear = newG;
    }

    @Override
    public void increaseSpeed(int i) {
        speed = speed + i;
    }

    @Override
    public void applyBrakes(int d) {
        speed = speed - d;
    }

    public void printBicycle() {
        System.out.println("Speed: " + speed);
        System.out.println("Gear: " + gear);
    }
}

class Car implements Vehical {
    int speed;
    int gear;
    int wheels;

    @Override
    public void changeGear(int newG) {
        gear = newG;
    }

    @Override
    public void increaseSpeed(int i) {
        speed = speed + i;
    }

    @Override
    public void applyBrakes(int d) {
        speed = speed - d;
    }

    public void setWheels(int n) {
        wheels = n;
    }

    public void printCar() {
        System.out.println("Speed: " + speed);
        System.out.println("Gear: " + gear);
        System.out.println("Wheels: " + wheels);
    }
}

public class Practical17 {

    public static void main(String[] args) {

        Bicycle bicycle = new Bicycle();

        bicycle.changeGear(2);
        bicycle.increaseSpeed(3);
        bicycle.applyBrakes(2);

        System.out.println("Bicycle state :");
        bicycle.printBicycle();


        Car car = new Car();

        car.changeGear(4);
        car.setWheels(4);

        car.increaseSpeed(3);
        car.applyBrakes(2);

        System.out.println("Car state: ");
        car.printCar();
    }

}
