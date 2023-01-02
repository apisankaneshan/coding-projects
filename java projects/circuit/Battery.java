/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coe318.lab7;

/**
 *
 * @author apisa
 */
public class Battery {
    protected double voltage;
    private Node node1;
    private Node node2;
    private int idNum;
    private static int nextIdNum = 1;
    
    public Battery(Node node1, Node node2, double voltage){
        this.node1 = node1;
        this.node2 = node2;
        this.voltage = voltage;
        this.idNum = nextIdNum;
        nextIdNum++;
        
        Circuit cir = Circuit.getInstance();
        cir.addBattery(this);
    }
    
    public Node[] getNodes(){
        Node[] nodes = {this.node1, this.node2};
        return(nodes);
        
    }
    
    @Override
    public String toString(){
        return("V" + this.idNum + " " + this.node1 + " " + this.node2 + " DC " + this.voltage);
    }

}
