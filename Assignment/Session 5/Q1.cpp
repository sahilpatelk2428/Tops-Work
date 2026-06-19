class PaymentProcessor
{
    void processPayment(double amount)
    {
        System.out.println("Amount = " + amount);
    }

    void processPayment(double amount, String coupon)
    {
        double finalAmount = amount - 100;
        System.out.println("Coupon Applied: " + coupon);
        System.out.println("Final Amount = " + finalAmount);
    }

    public static void main(String args[])
    {
        PaymentProcessor p = new PaymentProcessor();

        p.processPayment(1000);
        p.processPayment(1000, "SAVE100");
    }
}
