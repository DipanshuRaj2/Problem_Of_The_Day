class demo{
    private demo(){
        System.out.println("private Constructor");
    }
    class demo1{
        public void show1(){
            System.out.println(demo());
        }
    }
    public void show(){
        System.out.println("Show Method");
    }
}
class hl{
    public static void main(String[] args){
        System.out.println("Hello World");
        demo d1 = new demo();
        d1.show();

    }
}