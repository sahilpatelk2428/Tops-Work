class ProductSearch
{
    void searchProduct(String name)
    {
        System.out.println("Searching Product: " + name);
    }

    void searchProduct(String name, String category)
    {
        System.out.println("Searching " + name +
                           " in " + category);
    }

    public static void main(String args[])
    {
        ProductSearch p = new ProductSearch();

        p.searchProduct("Laptop");
        p.searchProduct("Laptop", "Electronics");
    }
}
