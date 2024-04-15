abstract class Figure3D {

    protected double volume;
    protected double surfaceArea;

    protected abstract void calculateVolume();

    protected abstract void calculateSurfaceArea();

    public double getVolume() {
        return volume;
    }

    public double getSurfaceArea() {
        return surfaceArea;
    }
}

class Cylinder extends Figure3D {

    private double radius;
    private double height;

    public Cylinder(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    @Override
    protected void calculateVolume() {
        volume = Math.PI * Math.pow(radius, 2) * height;
    }

    @Override
    protected void calculateSurfaceArea() {
        surfaceArea = 2 * Math.PI * radius * (radius + height);
    }
}

class Cone extends Figure3D {

    private double radius;
    private double height;

    public Cone(double radius, double height) {
        this.radius = radius;
        this.height = height;
    }

    @Override
    protected void calculateVolume() {
        volume = (1.0 / 3.0) * Math.PI * Math.pow(radius, 2) * height;
    }

    @Override
    protected void calculateSurfaceArea() {
        double slantHeight = Math.sqrt(Math.pow(radius, 2) + Math.pow(height, 2));
        surfaceArea = Math.PI * Math.pow(radius, 2) + Math.PI * radius * slantHeight;
    }
}

class Sphere extends Figure3D {

    private double radius;

    public Sphere(double radius) {
        this.radius = radius;
    }

    @Override
    protected void calculateVolume() {
        volume = (4.0 / 3.0) * Math.PI * Math.pow(radius, 3);
    }

    @Override
    protected void calculateSurfaceArea() {
        surfaceArea = 4.0 * Math.PI * Math.pow(radius, 2);
    }
}

class demo15{

    public static void main(String[] args) {
        Figure3D[] figures = new Figure3D[3];
        figures[0] = new Cylinder(5, 10);
        figures[1] = new Cone(4, 8);
        figures[2] = new Sphere(6);

        for (Figure3D figure : figures) {
            figure.calculateVolume();
            figure.calculateSurfaceArea();

            System.out.println("Figure type: " + figure.getClass().getSimpleName());
            System.out.println("Volume: " + figure.getVolume());
            System.out.println("Surface area: " + figure.getSurfaceArea());
            System.out.println();
        }
    }
}
