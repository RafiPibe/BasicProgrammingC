/*Develop a database inquiry program to search a binary
*file of aircraft data sorted in descending order by
*maximum cruise speed. Each aircraft record should
*include the name (up to 25 characters), maximum cruise
*speed (in km/h), wingspan and length (in m), the character
*M (for military) or C (for civilian), and a descriptive
*phrase (up to 80 characters). Your system should implement
*a menu driven interface that allows the user to search on
*all components except the descriptive phrase. Here are
*three planes to start your database:
*
*SR-71 Blackbird           (name)
*3500                      (max cruise speed)
*16.95 32.74 M             (wingspan, length, military/civilian)
*high-speed strategic reconnaissance
*
*EF-111A Raven
*2280
*19.21  23.16  M
*electronic warfare */

/*Adjustments made by instructor

3) save as aircraft.c , include the binary file (the database)

Put 10 records in the database (a single binary file that you determine).Use the case study we studied in class "Database Inquiry" to help. Please model the menu after that example. Allow the user to search on cruise speed, wingspan, length, and character. (Note the example allows search on stocknumber, category, description and price).*/

#include <stdio.h>
#include <string.h>

#define LEN_NAME 25
#define LEN_DESCRIPTION 80
#define MAX_SPEED 5000
#define MAX_WSPAN 25.0
#define MAX_LENGTH 40.0

typedef struct {
    char name_aircraft[LEN_NAME];
    int cruise_speed;
    double wing_span;
    double length;
    char military_or_civilian;
    char description;
}aircraft_t;

typedef struct {
    int low_cruise, high_cruise;
    double low_wing_span, high_wing_span;
    double low_length, high_length;
    //char m_or_c;
}search_params_t;

search_params_t get_params(void);
void display_match(FILE *databasep, search_params_t);
char menu_choose(search_params_t params);
int match(aircraft_t aircraft, search_params_t params);
void show(aircraft_t aircraft);

/* Insert prototypes of functions needed by get_params and display_match */


int
main(void){

    FILE *aircraftp;                                /*aircraft file pointer*/
    search_params_t params={0,0,0.0,0.0,0.0,0.0};   /*search parameter bounds*/

    /* Get the aircraft database file and open it */

    aircraftp = fopen("aircraft.bin", "rb");

    /* Get the search parameters */
    params = get_params();

    menu_choose(params);

    /* Display all products that satisfy the search parameters */
    display_match(aircraftp, params);

    return 0;
}
/* Prompts the user to enter the search parameters */

search_params_t get_params(void) {
    /*body of get_params to be inserted*/
}

/*
  * Displays a lettered menu with the current values of search parameters.
  * Returns the letter the user enters. A letter in the range a..h selects
  * a parameter to change; q quits, accepting search parameters shown.
  * Post: first nonwhitespace character entered is returned
  */

char menu_choose(search_params_t params) { /*input - current search parameter bounds*/

    char choice;

    // printf("[i] Is aircraft for military or civilian use %c\n", arams.m_or_c);
    printf("Select by letter a search parameter to set or enter");
    printf("q to \naccept parameters shown.\n\n");
    printf("Search parameter");
    printf("Current value\n\n");
    printf("[c] Low bound for aircraft cruise speed %d\n", params.low_cruise);
    printf("[d] High bound for aircraft cruise speed %d\n", params.high_cruise);
    printf("[e] Low bound for aircraft wing span %7.2f\n", params.low_wing_span);
    printf("[f] High bound for aircraft wing span %7.2f\n", params.high_wing_span);
    printf("[g] Low bound for aircraft length %7.2f\n", params.low_length);
    printf("[h] High bound for aircraft length %7.2f\n", params.high_length);

    printf("Selection> ");
    scanf(" %c", &choice);

    return(choice);
}

int match(aircraft_t aircraft, search_params_t params){
      /*input-record to check*/
                           /*input-parameters to satisfy*/

     return(params.low_cruise <= aircraft.cruise_speed &&
            aircraft.cruise_speed <= params.high_cruise &&
            params.low_wing_span <= aircraft.wing_span &&
            aircraft.wing_span <= params.high_wing_span &&
            params.low_length <= aircraft.length &&
            aircraft.length <= params.high_length);

}
/*
  * *** STUB ***
  * Displays each field of aircraft. Leaves a blank line after the product
  * display.
  */
void show(aircraft_t aircraft){

        printf("Function show entered with aircraft cruise speed %d\n",
               aircraft.cruise_speed);
}

/*
  * Displays records of all aircrafts in the database that satisfy search
  * parameters.
  * Pre:  databasep accesses a binary file of aircraft_t records that has
  *       been opened as an input file, and params is defined
  */

void display_match(FILE *databasep, search_params_t params) {
                /*file pointer to binary database file*/
                                 /*input-search parameter bounds*/

    aircraft_t current_aircraft; /*current aircraft from database*/
    int no_matches = 1;          /*flag indicating if no matches have been found*/
    int status;                  /*input file status*/

    /*Advances to first record with a cruise speed less than or equal to upper bound.*/

    for(status = fread(&current_aircraft,sizeof (aircraft_t), 1, databasep);
        status == 1 && params.high_cruise < current_aircraft.cruise_speed;
        status = fread(&current_aircraft, sizeof (aircraft_t), 1, databasep)) {}

        /*  Displays a list of the products that satisfy the search parameters */

        printf("\nAircraft satisfying the search parameters:\n");

        while (current_aircraft.cruise_speed >= params.low_cruise && status == 1) {
            if (match(current_aircraft,params)) {

                no_matches = 0;
                show(current_aircraft);
            }
            
            status = fread(&current_aircraft, sizeof (aircraft_t), 1, databasep);
            }

    /* Displays a message if no products found*/

    if (no_matches) {
        printf("Sorry, no products available\n");
    }
}