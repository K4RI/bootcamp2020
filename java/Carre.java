public class Carre extends FigureCentree{
    private double demilongueur;
  
    public Carre(Point c, double demilongueur){
        this.centre = c;
        this.demilongueur = demilongueur;
    }

    public double aire() { //moi qui l'ai fait xd
        return (this.demilongueur)*(this.demilongueur);
    }


    public void translater(int dx, int dy){
        this.centre.translater(dx,dy);
    }
    public String toString() {
        return "Je suis un Carre de centre :" + this.centre + " et de demie longueur :" + this.demilongueur;
    }
 }
 