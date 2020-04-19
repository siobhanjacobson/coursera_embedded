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
 * @brief A simple C program to perform several different stat calculations
 *
 * This C program is intended to refresh the programmer on C programming skills.
 *
 * @author Siobhan Jacobson
 * @date 2020-04-16
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  /* Statistics and Printing Functions Go Here */

  void print_array(unsigned char * data, int length) {
    for(int i = 0; i < length; i++) {
      printf("%d", data[i]);
      printf("\n");
    }
  }


  int find_mean(unsigned char * data, int length) {
    int total = 0;
    for(int i = 0; i < length; i++) {
      total += data[i];
    }

    return total / length;
  }

  int find_median(unsigned char * data, int length) {
    if(length % 2 == 0) {
      unsigned char middle_numbers[2] = { data[length / 2], data[(length / 2) + 1]};
      return find_mean(middle_numbers, 2);
    } else {
      return data[length / 2];
    }
  }

  void sort_array(unsigned char * data, int length) {
    int temp;
    for(int i = 0; i < length - 1; i++) {
      for(int j = 0; j < length - i - 1; j++) {
        if(data[j] > data[j + 1]) {
          temp = data[j + 1];
          data[j + 1] = data[j];
          data[j] = temp;
        }
      }
    }
  }

  int find_maximum(unsigned char * data, int length) {
    sort_array(data, length);
    return data[length - 1];
  }

  int find_minimum(unsigned char * data, int length) {
    sort_array(data, length);
    return data[0];
  }

  void print_statistics(unsigned char * data, int length) {
    printf("Minimum: %d", find_minimum(data, SIZE));
    printf("\n");
    printf("Maximum: %d", find_maximum(data, SIZE));
    printf("\n");
    printf("Mean: %d", find_mean(data, SIZE));
    printf("\n");
    printf("Median: %d", find_median(data, SIZE));
    printf("\n");
  }

  print_statistics(test, SIZE);
  printf("\n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
  printf("\n");
}
