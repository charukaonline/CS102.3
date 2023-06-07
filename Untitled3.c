#include <stdio.h>
int main()

{

  float distance_travelled,time_taken,average_speed;
  printf("Enter travelled distance (meters): ");
  scanf("%f", &distance_travelled);
  printf("time taken(seconds): ");
  scanf("%f",&time_taken);
  average_speed = distance_travelled / time_taken;
  printf("average speed = %f",average_speed);
  return 0;

}
