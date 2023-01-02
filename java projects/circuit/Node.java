/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coe318.lab7;

/**
 *
 * @author apisa
 */
public class Node {
    private int idNum;
    private static int nextIdNum = 0;
    
    public Node(){
        this.idNum = this.nextIdNum;
        this.nextIdNum++;
    }

    @Override
    public String toString(){
        return("" + this.idNum);
    }
    
}
