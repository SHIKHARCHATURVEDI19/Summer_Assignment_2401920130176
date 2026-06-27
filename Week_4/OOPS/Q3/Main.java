public class Main {

    public static void main(String[] args) {

        Point p1 = new Point();
        p1.display();

        Point p2 = new Point(10, 20);
        p2.display();

        p2.setX(30);
        p2.setY(40);
        p2.display();

        p2.setXY(50, 60);
        p2.display();

    }
}