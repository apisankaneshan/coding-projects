/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coe318.lab7;
import java.util.ArrayList;

/**
 *
 * @author apisa
 */
public class Circuit {
    private static Circuit instance = null;
    private ArrayList<Resistor> resistors;
    private ArrayList<Battery> batteries;
    
    public static Circuit getInstance(){
        if(instance == null){
            instance = new Circuit();
        }
        return instance;
    }
    
    private Circuit(){
        resistors = new ArrayList<Resistor>();
        batteries = new ArrayList<Battery>();
    }
    
    public void addResistor(Resistor r){
        this.resistors.add(r);
    }
    
    public void addBattery(Battery b){
        this.batteries.add(b);
    }
    
    @Override
    public String toString(){
        String s = "";
        for(Resistor r : resistors){
            s = s + r + "\n";
        }
        for(Battery b : batteries){
            s = s + b + "\n";
        }
        return(s);
    }
    
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
