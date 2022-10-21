#include <stdio.h>

/*
	Name - Ansh Shah
	Email - shah615@purdue.edu
	Lab Time - Thursday 1:30 PM

*/
int main()
{
	float type1;
	float type2;
	float container = (40*8*8); // Calculating the total volume for the container
	float totalBox;
	

	
	printf("There are two types of boxes:\nType 1 = 1ft x 1ft x 1 ft (1 foot cubed)\nType 2 = 1ft x 2ft x 2ft (4 feet cubed)"); 
	printf("\n\nThe number of cubic feet available in the shipping container is %f.", container);
	printf("\nPlease Enter the number of Type 1 boxes you want to ship: "); 
	scanf("%f", &type1); // Taking the input for number of type 1 boxes
	
	if (type1>container) // If statement to check if the total volume of type 1 boxes exceeds the container volume
	{
		printf("\nThe cubic footage you want to ship is larger than the space avaialable in the container");
	}
	
	else // else statement to proceed if the total volume of type 1 boxes does not exceed the container colume.
	{
		float spaceRemaining1 = container-type1; // Calculating the space remaining for type 2 boxes
		float maxType2 = spaceRemaining1/4; // Calculating the maximum amount of type 2 boxes that can be stored in the remaining space
	
		printf("\nThe space remaining for type 2 boxes is %f. cu. ft.\n", spaceRemaining1); // Prints the space remaining for the type 2 box
		printf("The maximum number of type 2 boxes you can store in the container now is %f.\n", maxType2); // Prints the maximum number of type 2 boxes that can be entered
	
		printf("\nPlease Enter the number of Type 2 boxes you want to ship: ");
		scanf("%f", &type2); // Taking the input for number of type 2 boxes
	
		totalBox = (1*type1) + (4*type2); //calculating the total volume occupied by both the type of boxes
		printf("\nThe total cubic footage for boxes you want to ship is: %f. cu ft.\n", totalBox);// Showing the user the total volume occupied by both types of boxes
	
		if (totalBox > container) // If statement to check if the total volume occupuied by both the boxes exceeds the available space in the container.
		{ 
		printf("\nThe cubic footage you want to ship is larger than the space avaialable in the container");
		}
		else // Else statement to proceed if the total volume occupuied by both the boxes DOES NOT exceed the available space in the container.
		{
			float unused = container - totalBox; // Calculating the total unused volume in the container
			
			printf("There is %f. cu. ft. of space remaining in the box\n\n", unused); // printing the total unsued volume in the container 
			float price1 = type1*20; // Calculating the cost of type 1 boxes
			float price2 = type2*35; // Calculating the cost of type 2 boxes
			float totalPrice = price1+ price2; // Calculating the total cost of both type 1 and type 2 boxes
	
			printf("The total shipping cost of the boxes: %f. USD", totalPrice); // Displaying the total cost of shipping both the types of boxes
	
			float discount = 2*unused; // Calculating the discount applied based on unused space
			float finalPrice = totalPrice - discount; // calculating the final price after the discount
	
			printf("\nDiscount for %f. cu. ft. of unsused space: -%f. USD", unused, discount);// Displaying the discount for the unsed space
			printf("\nYour final shipping cost with the discount applied: %f. USD", finalPrice);//Displaying the final shipping cost with the dicount applied
		}
	}
	
	printf("\n\nProgram has ended...\n");
}

