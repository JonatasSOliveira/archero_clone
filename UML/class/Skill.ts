export abstract class Skill {
  private name: string;
  private description: string;

  constructor(name: string, description: string) {
    this.name = name;
    this.description = description;
  }

  public getNanem(): string {
    return this.name;
  }

  public getDescription(): string {
    return this.description;
  }
}
