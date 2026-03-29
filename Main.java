// need to practice java programming have lost touch help me code in java programming from beginner to intermediate level
// java programming
//start woth code 
// Java program to demonstrate the use of a class and an object
// public class Main{
//     public static void main(String[] args) {
//         Car car = new Car();
//         // Create a new object called "car" of type "Car"
//         // Set the properties of the car object
//         car.make("Toyata");
// }

class Car {
   
    private String make;

    public void setMake(String make) {
        this.make = make;
    }

    public void displayMake()
    {
        System.out.println("Car make: " + make);
    }
}
public class Main{
    public static void main(String[] args) {
        Car car = new Car();
        // Create a new object called "car" of type "Car"
        // Set the properties of the car object
        car.setMake("Toyota");
        // Display the make of the car
        car.displayMake();

        System.out.println("Hello, World!");
    }
}
//Demonstration 2:
// class Car1{
//     public String make;

//     public void setMake(String make)
//     {
//         this.make = make;
//     }

//     public 

// }
