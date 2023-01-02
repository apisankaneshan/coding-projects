/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package coe318.lab4;

/**
 *
 * @author apisa
 */
public class Account {
    private String name;
    private int number;
    private double initialBalance;
    
    public Account(String name, int number, double initialBalance){
        this.name = name;
        this.number = number;
        this.initialBalance = initialBalance;
    }

    public String getName() {
        return name;
    }

    public int getNumber() {
        return number;
    }

    public double getBalance() {
        return initialBalance;
    }
    
    public boolean deposit(double amount){
        if(amount <= 0){
            return false;
        }
        else{
            this.initialBalance = this.getBalance() + amount;
            return true;
        }
    }
    
    public boolean withdraw(double amount){
        if(amount <= this.getBalance() && amount > 0){
            this.initialBalance = this.getBalance() - amount;
            return true;
        }
        else{
            this.initialBalance = this.getBalance();
            return false;
        }
    }

    
    @Override
    public String toString() {//DO NOT MODIFY
        return "(" + getName() + ", " + getNumber() + ", " +
        String.format("$%.2f", getBalance()) + ")";
    }    
}
