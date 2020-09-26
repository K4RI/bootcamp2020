public class Cercle extends FigureCentree {
    private double rayon;

    public Cercle(Point c, double r){
        this.centre = c;
        this.rayon = r;
    }
    public void translater(int dx, int dy){
        this.centre.translater(dx, dy);
    }
    public String toString() {
        return "Je suis un Cercle de centre :" + this.centre + "et de rayon :" + this.rayon;
    }
}