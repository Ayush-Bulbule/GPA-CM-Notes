/* Creating thread, Extending thread class, Stopping and blocking thread, using
thread Method and Thread priority using java */
//19CM007 Ayush Shashikant Bulbule

class ThreadDemo extends Thread {

  public void run() {
    System.out.println("Inside run method");
  }
}

public class Practical19 extends Thread {

  public static void main(String[] args) {
    ThreadDemo t1 = new ThreadDemo();
    ThreadDemo t2 = new ThreadDemo();
    ThreadDemo t3 = new ThreadDemo();

    System.out.println("t1 thread priority : " + t1.getPriority());

    System.out.println("t2 thread priority : " + t2.getPriority());

    System.out.println("t3 thread priority : " + t3.getPriority());

    t1.setPriority(2);
    t2.setPriority(5);
    t3.setPriority(8);

    System.out.println("t1 thread priority : " + t1.getPriority());

    System.out.println("t2 thread priority : " + t2.getPriority());

    System.out.println("t3 thread priority : " + t3.getPriority());

    System.out.println(
      "Currently Executing Thread : " + Thread.currentThread().getName()
    );

    System.out.println(
      "Main thread priority : " + Thread.currentThread().getPriority()
    );

    Thread.currentThread().setPriority(10);
    System.out.println(
      "Main thread priority : " + Thread.currentThread().getPriority()
    );

    ThreadDemo threadDemo = new ThreadDemo();
    Thread thread = new Thread(threadDemo, "T1");
    thread.start();
    System.out.println(currentThread().getName() + " is stopping demo thread");
    threadDemo.stop();
    System.out.println(currentThread().getName() + " is finished now");
  }
}
