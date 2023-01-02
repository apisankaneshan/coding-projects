/**
 *
 * @author Your Name
 */
package coe318.lab3;
public class Counter {
    private int digit;
    private int modulus;
    private Counter left; 
    

    public Counter(int modulus, Counter left) {
        this.modulus = modulus;
        this.left = left;
    }


    /**
     * @return the modulus
     */
    public int getModulus() {
        return modulus;
    }

    /**
     * Returns the Counter to the left attached to this
     * Counter.  Returns null if there is no Counter
     * to the left.
     * @return the left
     */
    public Counter getLeft() {
        Counter x;
        if(left != null){
            x = left;
        }
        else{
            x = null;
        }
        return x;
    }

    /**
     * @return the digit
     */
    public int getDigit() {
        return digit;
    }

    /**
     * @param digit the digit to set
     */
    public void setDigit(int digit) {
        this.digit = digit;
    }

    /**
     * Increment this counter.  If it rolls over,
     * its left Counter is also incremented if it
     * exists.
     */
    public void increment() {
        this.setDigit(this.getDigit() + 1);
        if(this.getDigit() == this.getModulus()){
            this.setDigit(0);
            if(this.getLeft()!=null){
                this.getLeft().increment();
            }
        }
    }

    /** Return the count of this Counter combined
     * with any Counter to its left.
     *
     * @return the count
     */
    public int getCount() {
        int count;
        Counter x = this.getLeft();
        if(x==null){
            count = this.getDigit();
        }
        else{
            count = (this.getDigit())+(this.getModulus()*(this.getLeft().getCount()));
        }
        /*Counter tmpLeft = this.getLeft();
        loop as long as tmpLeft is not null{
        take tmpLeft into consideration
        tmpLeft = tmpLeft.getLeft(); */
        return count;
    }

    /** Returns a String representation of the Counter's
     * total count (including its left neighbour).
     * @return the String representation
     */
    @Override
    public String toString() {
        //DO NOT MODIFY THIS CODE
        return "" + getCount();
    }

}
