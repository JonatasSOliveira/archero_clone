import { Character } from "./Character";

export class Enemy extends Character {
  public override attack(): void {
    console.log("Enemy attack");
  }
}
