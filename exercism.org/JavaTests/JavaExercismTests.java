import ex00_HelloWorld.HelloWorld;
import ex01_lasagna.Lasagna;
import ex02_annalynsInfiltration.AnnalynsInfiltration;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.MethodSource;

import java.util.stream.Stream;

import static org.junit.jupiter.api.Assertions.*;

public class JavaExercismTests {

  @Test
  public void ex00_HelloWorldTest(){
     assertEquals("Hello, World!", HelloWorld.Hello_World());
  }

  @Test
  public void ex01_Lasagna_DefineTheExpectedOvenTimeInMinutes(){
    Lasagna lasagna = new Lasagna();
    assertEquals(40,lasagna.expectedMinutesInOven());
  }

  @Test
  public void ex01_Lasagna_CalculateTheRemainingOvenTimeInMinutes(){
    Lasagna lasagna = new Lasagna();
    assertEquals(10,lasagna.remainingMinutesInOven(30));
  }

  @Test
  public void ex01_Lasagna_CalculateThePreparationTimeInMinutes(){
    Lasagna lasagna = new Lasagna();
    assertEquals(4,lasagna.preparationTimeInMinutes(2));
  }

  @Test
  public void ex01_Lasagna_CalculateTheTotalWorkingTimeInMinutes(){
    Lasagna lasagna = new Lasagna();
    assertEquals(26,lasagna.totalTimeInMinutes(3,20));
  }
  @Test
  public void ex02_AnnalynsInfiltration_canAttack(){
    assertFalse(AnnalynsInfiltration.canFastAttack(true));
  }

  @Test
  public void ex02_AnnalynsInfiltration_cannotAttack(){
    assertTrue(AnnalynsInfiltration.canFastAttack(false));
  }
  @ParameterizedTest
  @MethodSource("booleansForSpy")
  public void ex02_AnnalynsInfiltration_canSpy(final boolean knightIsAwake, final boolean archerIsAwake, final boolean prisonerIsAwake){
    assertTrue(AnnalynsInfiltration.canSpy(knightIsAwake, archerIsAwake, prisonerIsAwake));
  }

  private static Stream<Arguments> booleansForSpy() {
    return Stream.of(
        Arguments.of(true, true, true),

        Arguments.of(true, false, false),
        Arguments.of(true, true, false),
        Arguments.of(true, false, true),

        Arguments.of(false, true, false),
        Arguments.of(true, true, false),
        Arguments.of(false, true, true),

        Arguments.of(false, false, true),
        Arguments.of(true, false, true),
        Arguments.of(false, true, true)
    );
  }

  @Test
  public void ex02_AnnalynsInfiltration_cannotSpy(){
    assertFalse(AnnalynsInfiltration.canSpy(false, false, false));
  }

  @Test
  public void ex02_AnnalynsInfiltration_canSignalPrisoner(){
    assertTrue(AnnalynsInfiltration.canSignalPrisoner(true,false));
  }

  @Test
  public void ex02_AnnalynsInfiltration_cannotSignalPrisoner(){
    assertFalse(AnnalynsInfiltration.canSignalPrisoner(true,true));

    assertFalse(AnnalynsInfiltration.canSignalPrisoner(false,true));

    assertFalse(AnnalynsInfiltration.canSignalPrisoner(false,false));
  }
  @Test
  public void ex02_AnnalynsInfiltration_canFreePrisoner(){
    assertTrue(AnnalynsInfiltration.canFreePrisoner(true,false,false,true));
    assertTrue(AnnalynsInfiltration.canFreePrisoner(true,false,true,true));
    assertTrue(AnnalynsInfiltration.canFreePrisoner(false,false,false,true));
  }

  @Test
  public void ex02_AnnalynsInfiltration_cannotFreePrisoner(){
    assertFalse(AnnalynsInfiltration.canFreePrisoner(true,true,false,true));
    assertFalse(AnnalynsInfiltration.canFreePrisoner(true,true,true,false));
    assertFalse(AnnalynsInfiltration.canFreePrisoner(false,false,false,false));
  }

}
