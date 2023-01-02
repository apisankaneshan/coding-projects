/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coe318.lab7;
import java.util.Scanner;
import java.util.ArrayList;

/**
 *
 * @author apisa
 */

public class UserMain {
    public static void main(String[] args){
        String input;
        String[] component;
        Node n1 = new Node();
        ArrayList<Node> existingNodes = new ArrayList<Node>();
        existingNodes.add(n1);
        ArrayList<Object> cirComponents= new ArrayList<Object>();
        Circuit cir = Circuit.getInstance();
        Scanner scan = new Scanner(System.in);
        do{
            input = scan.nextLine();
            component = input.split(" ");
            if(component.length == 4||component.length == 1){
                if(component[0].equals("v") && component.length == 4 && ((Double.parseDouble(component[1]) %1) == 0 || (Double.parseDouble(component[1]) %1) == 0 || (Integer.parseInt(component[3])) % 1 == 0)){
                    if(Integer.parseInt(component[1]) < existingNodes.size() && Integer.parseInt(component[2]) == existingNodes.size()){
                        Node newNode  = new Node();    
                        existingNodes.add(newNode);
                        Battery b = new Battery(existingNodes.get(Integer.parseInt(component[1])), newNode, Double.parseDouble(component[3]));
                        cirComponents.add(b);        
                    }
                    else if(Integer.parseInt(component[1]) == existingNodes.size() && Integer.parseInt(component[2]) < existingNodes.size()){
                        Node newNode  = new Node();    
                        existingNodes.add(newNode);
                        Battery b = new Battery(newNode, existingNodes.get(Integer.parseInt(component[2])), Double.parseDouble(component[3]));
                        cirComponents.add(b); 
                    }
                    else if(Integer.parseInt(component[1]) < existingNodes.size() && Integer.parseInt(component[2]) < existingNodes.size()){
                        Battery b = new Battery(existingNodes.get(Integer.parseInt(component[1])), existingNodes.get(Integer.parseInt(component[2])), Double.parseDouble(component[3]));
                        cirComponents.add(b);
                    }
                        else{
                            System.out.println("Please check your inputs.");
                        }
                    }
                else if(component[0].equals("r") && component.length == 4 && ((Double.parseDouble(component[1]) %1) == 0 || (Double.parseDouble(component[1]) %1) == 0 || (Integer.parseInt(component[3])) % 1 == 0)){
                    if(Integer.parseInt(component[1]) < existingNodes.size() && Integer.parseInt(component[2]) == existingNodes.size()){
                        Node newNode  = new Node();    
                        existingNodes.add(newNode);
                        Resistor r = new Resistor(existingNodes.get(Integer.parseInt(component[1])), newNode, Double.parseDouble(component[3]));
                        cirComponents.add(r);        
                    }
                    else if(Integer.parseInt(component[1]) == existingNodes.size() && Integer.parseInt(component[2]) < existingNodes.size()){
                        Node newNode  = new Node();    
                        existingNodes.add(newNode);
                        Resistor r = new Resistor(newNode, existingNodes.get(Integer.parseInt(component[2])), Double.parseDouble(component[3]));
                        cirComponents.add(r); 
                    }
                    else if(Integer.parseInt(component[1]) < existingNodes.size() && Integer.parseInt(component[2]) < existingNodes.size()){
                        Resistor r = new Resistor(existingNodes.get(Integer.parseInt(component[1])), existingNodes.get(Integer.parseInt(component[2])), Double.parseDouble(component[3]));
                        cirComponents.add(r);
                    }
                    else{
                        System.out.println("Please check your inputs.");
                    }
                }
                else if(component[0].equals("spice") && component.length == 1){
                    for(Object o : cirComponents){
                        System.out.println(o);
                    }
                }
                else if(component[0].equals("end") && component.length == 1){
                    System.out.println("All Done");
                }
                else{
                    System.out.println("Please check your inputs.");
                }
            }
            else{
                System.out.println("Please check your inputs.");
            }
        } while(!input.equalsIgnoreCase("end"));
    }
}