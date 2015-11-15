SUPER MARKET MANAGEMENT SYSTEM .

NAME : Prateek Desai 
MIS : 111403026

Interface :

	A.Interface made available to the administrator :
		
	1. Create a new product. 
	2. Display all the products.
	3. Check the details of a product
	4. Modify the details of Existing product 
 	5. Delete a specific record
	6. Display administrator's menu
	
	B.Interface made available to the customer 

	1. Placing an order

The structure market.h contains information about the product needed by the administrator .

Administrator Functions :

	I first write the record(product details) in a file called "nesnasmarket.dat" this job is
	done by the function "writerec"
	Then the written products are displayed by reading the same file by using the function "readrec"
	The details of the product can be modified on the basis of name or the product number both .
	This modification is done by using the fuction "modrec".
	A particular product can be displayed on the basis of either product ID or product name,
	this is done by the function called "partprod"

Customer Functions :

	These functions aren't working even after a lot of debugging that is why I
	haven't included them in my Makefile.
	The "customer" function calls "calbill" and "showcust" .
	"calbill" calculates the bill and shows the customers the bill.
	"showcust" displays the product information needed by the customer to place an order.
	