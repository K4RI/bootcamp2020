public class Point {
    private int x;            //(variables d’instances, champs)
    private int y;
    
    public Point(int a, int b) { // (constructeur, retourne un Point)
        this.x = a; // (this=self, implicite, objet en cours de création, pas besoin de return)
        this.y = b;
    }

    public void translater(int dx, int dy) { // (on peut l’écrire en fonctionnel mais mieux vaut pas)
        this.x = this.x + dx;
        this.y = this.y + dy;


    }

    public String toString() {
        // [5,7]
        return "[" + this.x + "," + this.y + "]";
    }
    
    public static int addition(int a, int b) {
        return a+b;
    }
    

    public static void main(String[] args) {
        Point p1 = new Point(3, 7); // (new + constructeur : construit un objet)
        Point q2 = new Point(1, 9);
        System.out.println("p1 = " + p1);
        System.out.println("q2 = " + q2);

        q2.translater(1,1);
        System.out.println("q2 = " + q2);

    }
}