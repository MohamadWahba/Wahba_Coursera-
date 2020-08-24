/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief this is the main entry point for the w1 assignment project
 *
 * this is the main code for the week1 assignment project. this file here 
 * contains the driver code of the sofware including all the variable definitions
 * and the all the functions' definitions used.
 *
 * @author Mohamad Wahba
 * @date 23/8/2020
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

unsigned int i = 0;  //global array counter 
int max; 
int min;


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
	


  /* Statistics and Printing Functions Go Here */
	
	
	print_statistics(SIZE , test);
	
	print_array(SIZE , test);
}

/*****************************************************************/

/* Add other Implementation File Code Here */


//find_maximum() implementation
int find_maximum( unsigned int arr_size, unsigned char *array ){

	max = array[0]; //assume the max is the first item 

	for(i = 0 ; i<arr_size ; i++){
	
	if(array[i]>max){ max = array[i]; } //compare each item with max and change max accordingly till end of array
		
	}

	return max;
}
/**************************************************************/

//find_minimum() implementation
int find_minimum( unsigned int arr_size, unsigned char *array ){

	min = array[0]; //assume the min is the first item 

	for(i = 0 ; i<arr_size ; i++){
	
	if(array[i]<min){ min = array[i]; } //compare each item with min and change min accordingly till end of array
		
	}

	return min;
}
/**************************************************************/

//find_mean() implementation (i.e the sum of the elements by its number )
int find_mean( unsigned int arr_size, unsigned char *array ){

	int sum = 0; //initialize sum with 0 (a container)  

	for(i = 0 ; i<arr_size ; i++){
	
		sum+= array[i];
	}

	return (sum/arr_size); //sum of the elements(sum) by its number(arr_size)
}
/**************************************************************/

//find_median() implementation 
int find_median(unsigned int arr_size ,unsigned char  *array){

	array = sort_array(arr_size, array); 

	if(arr_size % 2 != 0) //if the array is odd then the middle is the median
		return array[arr_size/2];
	return (array[(arr_size-1)/2] + array[arr_size/2])/2; // if even take average of 2 center values 
}

/**************************************************************/

//sort_array() implementation
unsigned char* sort_array(unsigned int arr_size ,unsigned char  *array ){
	for(int i = arr_size-1 ; i>=0 ;i--){
		for(int j = 0 ; j<i ; j++){
	
			if(array[j] < array[j+1]){
				
				// swap if current elem < next elem   (so it produces a descending order)
				unsigned char temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}		
		}
		
	}
	
	return array;
}

/**************************************************************/

//print_array() implementation
 void print_array(unsigned int arr_size ,unsigned char  *array){
	
	printf("%s","sorted array :  ");
	for(i=0 ; i<arr_size ; i++){
		
		printf("%d,  ",array[i]);
	}
	printf("%s","\n");
}
/**************************************************************/

//print_statistics() implementation
void print_statistics(unsigned int arr_size ,unsigned char  *array){

	printf("\nMaximum value = %d \n",find_maximum(arr_size , array));
	printf("minimum value = %d \n",find_minimum(arr_size , array));
	printf("Mean value = %d \n",find_mean(arr_size , array));
	printf("Median value = %d \n\n",find_median(arr_size , array));
}
 
