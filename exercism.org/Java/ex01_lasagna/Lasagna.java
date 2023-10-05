////https://exercism.org/tracks/java/exercises/lasagna
package ex01_lasagna;

public class Lasagna {

    public int expectedMinutesInOven(){
      return 40;
    }

    public int remainingMinutesInOven(final int minutes){
      return this.expectedMinutesInOven()-minutes;
    }

    public int preparationTimeInMinutes(final int layers){
      return layers*2;
    }

    public int totalTimeInMinutes(final int numberOfLayers, final int minutesLasagnaHasBeenOnOven){
      return this.preparationTimeInMinutes(numberOfLayers) + minutesLasagnaHasBeenOnOven;
    }


}
