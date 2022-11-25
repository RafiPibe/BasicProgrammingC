#include <stdio.h>

int main(){
    int new_litres_per_flush = 2, 
    old_litres_per_flush = 15, 
    cost_of_new_toilets = 150, 
    toilets_per_person = 3, 
    old_water_flushed_per_day, 
    new_water_flushed_per_day, 
    litres_of_water_saved_per_day,  
    cost_of_water_saved, 
    daily_number_of_flushes = 14;
    int size_of_community;
    
    printf("Enter the population size> \n");
    
    scanf("%d", &size_of_community);
  
    cost_of_water_saved = (size_of_community * cost_of_new_toilets) / 3;
  
    old_water_flushed_per_day = (((size_of_community / toilets_per_person) * daily_number_of_flushes) * old_litres_per_flush);
  
    new_water_flushed_per_day = (((size_of_community / toilets_per_person) * daily_number_of_flushes) * new_litres_per_flush);
  
    litres_of_water_saved_per_day = old_water_flushed_per_day - new_water_flushed_per_day;
  
    printf("With a community of %d people, installing newer efficient toilets will save %d litres per day at a cost of $%d dollars to install the new toilets.\n", size_of_community, litres_of_water_saved_per_day, cost_of_water_saved);
    
    return 0;
}

