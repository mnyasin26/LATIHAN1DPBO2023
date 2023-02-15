public class Human {
    private String name;
    private char gender;

    public Human(){
        this.name = "";
        this.gender = '-';
    }

    public Human(String name, char gender){
        this.name = name;
        this.gender = gender;
    }

    // Getter and setter

    public String getName(){
        return this.name;
    }

    public void setName(String name){
        this.name = name;
    }

    public char getGender(){
        return this.gender;
    }

    public void setGender(char gender){
        this.gender = gender;
    }

    public void eat(){
        System.out.println(this.name + " is eating!");
    }

    public void sleep(){
        System.out.println(this.name + " is sleeping!");
    }

}
