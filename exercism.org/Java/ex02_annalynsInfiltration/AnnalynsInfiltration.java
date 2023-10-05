package ex02_annalynsInfiltration;

public class AnnalynsInfiltration {

  public static boolean canFastAttack(final boolean knightIsAwake){
    return !knightIsAwake;
  }

  public static boolean canSpy(final boolean knightIsAwake, final boolean archerIsAwake, final boolean prisonerIsAwake){
    return knightIsAwake || archerIsAwake || prisonerIsAwake;
  }

  public static boolean canSignalPrisoner(boolean prisonerIsAwake, boolean archerIsAwake){
    return prisonerIsAwake && !archerIsAwake;
  }

  public static boolean canFreePrisoner(boolean hasPet, boolean archerIsAwake, boolean knightIsAwake, boolean prisionerIsAwake){
    if(hasPet && !archerIsAwake) return true;

    return !hasPet && !archerIsAwake && !knightIsAwake && prisionerIsAwake;

  }


}
