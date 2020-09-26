public class FigureCentree {
    protected Point centre;
    public FigureCentree() {
        this.centre = new Point(0,0);
    }
    public String toString(){
        return "Je suis une FigureCentree du centre : " + this.centre;
    }
}