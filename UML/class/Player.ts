import { Character } from "./Character";
import { Skill } from "./Skill";

export class Player extends Character {
  public activeSkills: Skill[];

  public override attack(): void {
    console.log("Player attack");
  }
}
