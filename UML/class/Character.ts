export abstract class Character {
  private maxHealth: number;
  private baseAttackPoints: number;
  private baseDefensePoints: number;
  private baseSpeedPoints: number;
  private baseSpeedAtackPoints: number;

  private currentHealth: number;
  private currentAttackPoints: number;
  private currentDefensePoints: number;
  private currentSpeedPoints: number;
  private currentSpeedAtackPoints: number;

  private possitionX: number;
  private possitionY: number;

  public abstract attack(): void;

  public goDown(): void {
    this.possitionY += 1;
  }

  public goUp(): void {
    this.possitionY -= 1;
  }

  public goRight(): void {
    this.possitionX += 1;
  }

  public goLeft(): void {
    this.possitionX -= 1;
  }
}
