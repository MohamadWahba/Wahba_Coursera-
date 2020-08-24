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
 * @file stats.h
 * @brief the header file of the project containing all function declarations 
 *
 * this is the header file containing all the function declarations 
 * 
 * @author Mohamad Wahba
 * @date 23/8/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief   a function to print the content of the array sequentially 
 *
 * 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return  void no return type
 */

void print_array(unsigned int arr_size ,unsigned char  *array);



/**
 * @brief   a function to print all the statistics done on the array 
 *
 * 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return  void no return type
 */
void print_statistics(unsigned int arr_size ,unsigned char  *array);



/**
 * @brief   a function to get the maximum value in the given array 
 *
 * 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return max  an integer value of the maximum
 */
int find_maxumum(unsigned int arr_size ,unsigned char  *array);



/**
 * @brief   a function to get the minimum value in the given array 
 *
 * 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return min  integer value of the maximum
 */
int find_minimum(unsigned int arr_size ,unsigned char  *array);


/**
 * @brief   a function to get the mean value in the given array (which is basically an average)
 *
 * 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return (sum/arr_size) integer value of the mean (sum of the elements / their number )
 */
int find_mean(unsigned int arr_size ,unsigned char  *array);


/**
 * @brief   a function to get the median value in the given array (which is not sorted, so we need to sort first)
 *
 * the median of an odd num of elements is the middle, and the average of the two center values if even 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return (array[(arr_size-1)/2] + array[arr_size/2])/2    integer value of the median (sum of the elements / their number )
 */
int find_median(unsigned int arr_size ,unsigned char  *array);




/**
 * @brief   a bubble sort function
 *
 * the median of an odd num of elements is the middle, and the average of the two center values if even 
 *
 * @param   arr_size   an unsigned integer representing the size of the array (i.e the number of elements) 
 * 
 * @param  *array   unsigned pointer to the array 
 *
 * @return (array[(arr_size-1)/2] + array[arr_size/2])/2    integer value of the median (sum of the elements / their number )
 */

unsigned char* sort_array(unsigned int arr_size ,unsigned char  *array);


#endif /* __STATS_H__ */
