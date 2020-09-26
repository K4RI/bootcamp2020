public class Main {
    public static void main(String[] args) {
        System.out.println("Hello");
        Point p = new Point(5,7);
        System.out.println("p = " + p);     //(mais maintenant que le “toString” est créé, plus de problème, pas besoin de l’écrire);     //(pb : il affiche l’adresse ! -> méthode toString dans Point)
        
        System.out.println(Point.addition(3,6));

        String s = "a";
        for(int i=0 ; i<100000 ; i++) {
            s = s + "x";
        }
        System.out.println("str");

        StringBuffer s1 = new StringBuffer("a");
        for(int i=0 ; i<100000 ; i++) {
            s1.append("x");
        }
        System.out.println("str_buff");

    }
}
