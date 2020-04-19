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
 * @brief Function declarations for stats.c, a collection of stats functions.
 *
 * This header file contains the function declarations for stats.c, a
 * collection of stats functions.
 *
 * @author Siobhan Jacobson
 * @date 2020-04-16
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */

/**
 * @brief Print various statistical facts about a given array.
 *
 * Print the median, mean, maximum, minimum and the sorted given array of
 * integers.
 *
 * @param unsigned char data[]: array of integers
 *
 * @return void
 */
void print_statistics(unsigned char * data, int length);

/**
 * @brief Print the given array in a sorted, readable format.
 *
 * Print the given array in a sorted, readable format.
 *
 * @param unsigned char data[]: Array of integers
 * @param int length: Length of data
 *
 * @return void
 */
void print_array(unsigned char *  data, int length);

/**
 * @brief Find the median a given array.
 *
 * Find and return the median of a given array of integers.
 *
 * @param unsigned char data[]: array of integers
 * @param int length: Length of data
 *
 * @return int: the median
 */
int find_median(unsigned char * data, int length);

/**
 * @brief Find the mean a given array.
 *
 * Find and return the mean of a given array.
 *
 * @param unsigned char data[]: array of integers
 * @param int length: Length of data
 *
 * @return int: the mean
 */
int find_mean(unsigned char * data, int length);

/**
 * @brief Find the maximum a given array.
 *
 * Find and return the maximum of a given array of integers.
 *
 * @param unsigned char data[]: array of integers
 * @param int length: Length of data
 *
 * @return int: the maximum
 */
int find_maximum(unsigned char * data, int length);

/**
 * @brief Find the minimum a given array.
 *
 * Find and return the minimum of a given array of integers.
 *
 * @param unsigned char data[]: array of integers
 * @param int length: Length of data
 *
 * @return int: the minimum
 */
int find_minimum(unsigned char * data, int length);

/**
 * @brief Sort a given array.
 *
 * Sort given array of integers from lowest to higest.
 *
 * @param data: array of integers
 *
 * @return void
 */
void sort_array(unsigned char * data, int length);

#endif /* __STATS_H__ */
