#include <stdio.h>
int main()
{
    float lengte;
    float gewicht;

    printf( "Vul uw lengte in meters in: \n" );
    scanf( "%f", &lengte );
    printf( "Lengte is: %f \n", lengte );

    printf( "Vul uw gewicht in kg in: \n" );
    scanf( "%f", &gewicht );
    printf( "Gewicht is %f \n", gewicht );

    float bmi = gewicht / (lengte * lengte);

     printf( "Uw bmi is %f \n", bmi );

     if (bmi <= 18.5) {
        printf("Je hebt een mooi doutze kroes firguurtje ");
     }

     if (bmi => 18.5 && bmi <25) {
        printf("Je hebt een gezond bmi");
     }

     if (bmi => 24.9 && bmi <40) {
        printf("Je bent te zwaar, net als mauro's voorhoofd.");
     }

     if (bmi => 39) {
        printf("Je bent net zo dik als nanko's ego (Obese)");
     }
}
