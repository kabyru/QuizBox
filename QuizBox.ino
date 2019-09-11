
// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to

const int choiceThree = 8;
const int choiceFour = 9;
const int choiceOne = 13;
const int choiceTwo = 10;
const int correctLight = 7;
const int incorrectLight = 6;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int buttonStateOne = 0;
int buttonStateTwo = 0;
int buttonStateThree = 0;
int buttonStateFour = 0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  pinMode(choiceOne, INPUT);
  pinMode(choiceTwo, INPUT);
  pinMode(choiceThree, INPUT);
  pinMode(choiceFour, INPUT);
  pinMode(correctLight, OUTPUT);
  pinMode(incorrectLight, OUTPUT);
  //Place questions.
  
  // Print a message to the LCD.
  
  //delay(1000);
}

void loop() {
  buttonStateOne = digitalRead(choiceOne);
  buttonStateTwo = digitalRead(choiceTwo);
  buttonStateThree = digitalRead(choiceThree);
  buttonStateFour = digitalRead(choiceFour);

  if (buttonStateOne == HIGH) {
    lcd.clear();
    lcd.print("Correct!");
    digitalWrite(correctLight, HIGH);
    delay(1000);
    digitalWrite(correctLight,LOW);
    lcd.home();
    lcd.clear();
    String questionTwo = "When was IEEE Started?";
    String questionTwoAns = "A.1919 B.1963 C.1884 D.1912";
    while (true)
    {
      //Add choice buttons here.
      buttonStateOne = digitalRead(choiceOne);
      buttonStateTwo = digitalRead(choiceTwo);
      buttonStateThree = digitalRead(choiceThree);
      buttonStateFour = digitalRead(choiceFour);

      if (buttonStateOne == HIGH) {
        lcd.clear();
        lcd.print("Incorrect!");
        digitalWrite(incorrectLight, HIGH);
        delay(1000);
        digitalWrite(incorrectLight, LOW);
        lcd.home();
      }
      else if (buttonStateTwo == HIGH) {
        lcd.clear();
        lcd.print("Correct!");
        digitalWrite(correctLight, HIGH);
        delay(1000);
        digitalWrite(correctLight,LOW);
        lcd.home();
        lcd.clear();
        String questionThree = "How many faculty are IEEE Fellows?";
        String questionThreeAns = "A.0 B.1 C.2 D.3";
        while(true)
        {
          buttonStateOne = digitalRead(choiceOne);
          buttonStateTwo = digitalRead(choiceTwo);
          buttonStateThree = digitalRead(choiceThree);
          buttonStateFour = digitalRead(choiceFour);

          if (buttonStateOne == HIGH) {
            lcd.clear();
            lcd.print("Incorrect!");
            digitalWrite(incorrectLight, HIGH);
            delay(1000);
            digitalWrite(incorrectLight, LOW);
            lcd.home();
          }
          else if (buttonStateTwo == HIGH) {
            lcd.clear();
            lcd.print("Incorrect!");
            digitalWrite(incorrectLight, HIGH);
            delay(1000);
            digitalWrite(incorrectLight, LOW);
            lcd.home();
          }
          else if (buttonStateThree == HIGH) {
            lcd.clear();
            lcd.print("Incorrect!");
            digitalWrite(incorrectLight, HIGH);
            delay(1000);
            digitalWrite(incorrectLight, LOW);
            lcd.home();
          }
          else if (buttonStateFour == HIGH) {
            lcd.clear();
            lcd.print("Correct!");
            digitalWrite(correctLight, HIGH);
            delay(1000);
            digitalWrite(correctLight, LOW);
            lcd.home();
            lcd.clear();
            String questionFour = "What disciplines of Engineering are welcome in IEEE?";
            String questionFourAns = "A.Electrical B.Biomedical C.Computer D.All of them!";
            while(true)
            {
              buttonStateOne = digitalRead(choiceOne);
              buttonStateTwo = digitalRead(choiceTwo);
              buttonStateThree = digitalRead(choiceThree);
              buttonStateFour = digitalRead(choiceFour);

              if (buttonStateOne == HIGH) {
                lcd.clear();
                lcd.print("Incorrect!");
                digitalWrite(incorrectLight, HIGH);
                delay(1000);
                digitalWrite(incorrectLight, LOW);
                lcd.home();
              }
              else if (buttonStateTwo == HIGH) {
                lcd.clear();
                lcd.print("Incorrect!");
                digitalWrite(incorrectLight, HIGH);
                delay(1000);
                digitalWrite(incorrectLight, LOW);
                lcd.home();
              }
              else if (buttonStateThree == HIGH) {
                lcd.clear();
                lcd.print("Incorrect!");
                digitalWrite(incorrectLight, HIGH);
                delay(1000);
                digitalWrite(incorrectLight, LOW);
                lcd.home();
              }
              else if (buttonStateFour == HIGH) {
                lcd.clear();
                lcd.print("Correct!");
                digitalWrite(correctLight, HIGH);
                delay(1000);
                digitalWrite(correctLight, LOW);
                lcd.home();
                lcd.clear();
                String questionFive = "Which is not a research area in the department?";
                String questionFiveAns = "A.Robotics B.Nanotech C.CompVision D.IC Dsgn";
                while(true)
                {
                  buttonStateOne = digitalRead(choiceOne);
                  buttonStateTwo = digitalRead(choiceTwo);
                  buttonStateThree = digitalRead(choiceThree);
                  buttonStateFour = digitalRead(choiceFour);

                  if (buttonStateOne == HIGH) {
                    lcd.clear();
                    lcd.print("Incorrect!");
                    digitalWrite(incorrectLight, HIGH);
                    delay(1000);
                    digitalWrite(incorrectLight, LOW);
                    lcd.home();
                  }
                  else if (buttonStateTwo == HIGH) {
                    lcd.clear();
                    lcd.print("Incorrect!");
                    digitalWrite(incorrectLight, HIGH);
                    delay(1000);
                    digitalWrite(incorrectLight, LOW);
                    lcd.home();
                  }
                  else if (buttonStateThree == HIGH) {
                    lcd.clear();
                    lcd.print("Incorrect!");
                    digitalWrite(incorrectLight, HIGH);
                    delay(1000);
                    digitalWrite(incorrectLight, LOW);
                    lcd.home();
                  }
                  else if (buttonStateFour == HIGH) {
                    lcd.clear();
                    lcd.print("Correct!");
                    digitalWrite(correctLight, HIGH);
                    delay(1000);
                    digitalWrite(correctLight, LOW);
                    lcd.home();
                    lcd.clear();
                    String questionSix = "Louisville grads have launched startups in all except...";
                    String questionSixAns = "A.Blutooth B.Auto C.TestEq D.Mnfctur";
                    while(true)
                    {
                      buttonStateOne = digitalRead(choiceOne);
                      buttonStateTwo = digitalRead(choiceTwo);
                      buttonStateThree = digitalRead(choiceThree);
                      buttonStateFour = digitalRead(choiceFour);

                      if (buttonStateOne == HIGH) {
                        lcd.clear();
                        lcd.print("Incorrect!");
                        digitalWrite(incorrectLight, HIGH);
                        delay(1000);
                        digitalWrite(incorrectLight, LOW);
                        lcd.home();
                      }
                      else if (buttonStateTwo == HIGH) {
                        lcd.clear();
                        lcd.print("Correct!");
                        digitalWrite(correctLight, HIGH);
                        delay(1000);
                        digitalWrite(correctLight, LOW);
                        lcd.home();
                        lcd.clear();
                        String questionSeven = "Which is not a major industry in Louisville?";
                        String questionSevenAns = "A.Ctrl B.Power C.ConElec D.Aero&Def";
                        while(true)
                        {
                          buttonStateOne = digitalRead(choiceOne);
                          buttonStateTwo = digitalRead(choiceTwo);
                          buttonStateThree = digitalRead(choiceThree);
                          buttonStateFour = digitalRead(choiceFour);

                          if (buttonStateOne == HIGH) {
                            lcd.clear();
                            lcd.print("Incorrect!");
                            digitalWrite(incorrectLight, HIGH);
                            delay(1000);
                            digitalWrite(incorrectLight, LOW);
                            lcd.home();
                          }
                          else if (buttonStateTwo == HIGH) {
                            lcd.clear();
                            lcd.print("Incorrect!");
                            digitalWrite(incorrectLight, HIGH);
                            delay(1000);
                            digitalWrite(incorrectLight, LOW);
                            lcd.home();
                          }
                          else if (buttonStateThree == HIGH) {
                            lcd.clear();
                            lcd.print("Incorrect!");
                            digitalWrite(incorrectLight, HIGH);
                            delay(1000);
                            digitalWrite(incorrectLight, LOW);
                            lcd.home();
                          }
                          else if (buttonStateFour == HIGH) {
                            lcd.clear();
                            lcd.print("Correct!");
                            digitalWrite(correctLight, HIGH);
                            delay(1000);
                            digitalWrite(correctLight, LOW);
                            lcd.home();
                            lcd.clear();
                            String questionEight = "Which of these is a microcontroller?";
                            String questionEightAns = "A.RPi B.Arduino C.BeagleBone D.Jetson";
                            while(true)
                            {
                              buttonStateOne = digitalRead(choiceOne);
                              buttonStateTwo = digitalRead(choiceTwo);
                              buttonStateThree = digitalRead(choiceThree);
                              buttonStateFour = digitalRead(choiceFour);

                              if (buttonStateOne == HIGH) {
                                lcd.clear();
                                lcd.print("Incorrect!");
                                digitalWrite(incorrectLight, HIGH);
                                delay(1000);
                                digitalWrite(incorrectLight, LOW);
                                lcd.home();
                              }
                              else if (buttonStateTwo == HIGH) {
                                lcd.clear();
                                lcd.print("Correct!");
                                digitalWrite(correctLight, HIGH);
                                delay(1000);
                                digitalWrite(correctLight, LOW);
                                lcd.home();
                                lcd.clear();
                                String questionNine = "What is a PLC?";
                                String questionNineAns = "A.Partial Ld Cont B.Programmable Log Con C.Partial Log Con D.Prog Ld Comp";
                                while(true)
                                {
                                  buttonStateOne = digitalRead(choiceOne);
                                  buttonStateTwo = digitalRead(choiceTwo);
                                  buttonStateThree = digitalRead(choiceThree);
                                  buttonStateFour = digitalRead(choiceFour);

                                  if (buttonStateOne == HIGH) {
                                    lcd.clear();
                                    lcd.print("Incorrect!");
                                    digitalWrite(incorrectLight, HIGH);
                                    delay(1000);
                                    digitalWrite(incorrectLight, LOW);
                                    lcd.home();
                                  }
                                  else if (buttonStateTwo == HIGH) {
                                    lcd.clear();
                                    lcd.print("Correct!");
                                    digitalWrite(correctLight, HIGH);
                                    lcd.setCursor(0,1);
                                    lcd.print("The quiz is complete!");
                                    while(true)
                                    {
                                    }
                                  }
                                  else if (buttonStateThree == HIGH) {
                                    lcd.clear();
                                    lcd.print("Incorrect!");
                                    digitalWrite(incorrectLight, HIGH);
                                    delay(1000);
                                    digitalWrite(incorrectLight, LOW);
                                    lcd.home();
                                  }
                                  else if (buttonStateFour == HIGH) {
                                    lcd.clear();
                                    lcd.print("Incorrect!");
                                    digitalWrite(incorrectLight, HIGH);
                                    delay(1000);
                                    digitalWrite(incorrectLight, LOW);
                                    lcd.home();
                                  }
                                }
                              }
                              else if (buttonStateThree == HIGH) {
                                lcd.clear();
                                lcd.print("Incorrect!");
                                digitalWrite(incorrectLight, HIGH);
                                delay(1000);
                                digitalWrite(incorrectLight, LOW);
                                lcd.home();
                              }
                              else if (buttonStateFour == HIGH) {
                                lcd.clear();
                                lcd.print("Incorrect!");
                                digitalWrite(incorrectLight, HIGH);
                                delay(1000);
                                digitalWrite(incorrectLight, LOW);
                                lcd.home();
                              }
                              else {
                                lcd.print(questionEight);
                                lcd.setCursor(0,1);
                                lcd.print(questionEightAns);
                                for (int positionCounter = 0; positionCounter < questionEightAns.length(); positionCounter++) {
                                  lcd.scrollDisplayLeft();
                                  delay(150);
                                }
                                lcd.clear();
                                lcd.home();
                                delay(10);
                              }
                            }
                          }
                          else {
                            lcd.print(questionSeven);
                            lcd.setCursor(0,1);
                            lcd.print(questionSevenAns);
                            for (int positionCounter = 0; positionCounter < questionSevenAns.length(); positionCounter++) {
                              lcd.scrollDisplayLeft();
                              delay(150);
                            }
                            lcd.clear();
                            lcd.home();
                            delay(10);
                          }
                        }
                      }
                      else if (buttonStateThree == HIGH) {
                        lcd.clear();
                        lcd.print("Incorrect!");
                        digitalWrite(incorrectLight, HIGH);
                        delay(1000);
                        digitalWrite(incorrectLight, LOW);
                        lcd.home();
                      }
                      else {
                        lcd.print(questionSix);
                        lcd.setCursor(0,1);
                        lcd.print(questionSixAns);
                        for (int positionCounter = 0; positionCounter < questionSixAns.length(); positionCounter++) {
                          lcd.scrollDisplayLeft();
                          delay(150);
                        }
                        lcd.clear();
                        lcd.home();
                        delay(10);
                      }
                    }
                  }
                  else {
                    lcd.print(questionFive);
                    lcd.setCursor(0,1);
                    lcd.print(questionFiveAns);
                    for (int positionCounter = 0; positionCounter < questionFiveAns.length() + 6; positionCounter++) {
                      lcd.scrollDisplayLeft();
                      delay(150);
                    }
                    lcd.clear();
                    lcd.home();
                    delay(10);
                  }
                }
              }
              else {
                lcd.print(questionFour);
                lcd.setCursor(0,1);
                lcd.print(questionFourAns);
                for (int positionCounter = 0; positionCounter < questionFourAns.length() + 6; positionCounter++) {
                  lcd.scrollDisplayLeft();
                  delay(150);
                }
                lcd.clear();
                lcd.home();
                delay(10);
              }
            }

          }
          else {
            lcd.print(questionThree);
            lcd.setCursor(0,1); //sets cursor bottom left to add questions
            lcd.print(questionThreeAns);
            for (int positionCounter = 0; positionCounter < questionThreeAns.length() + 6; positionCounter++) {
              lcd.scrollDisplayLeft();
              delay(150);
            }
            lcd.clear();
            lcd.home();
            delay(10);
          }

        }
        
      }
      else if (buttonStateThree == HIGH) {
        lcd.clear();
        lcd.print("Incorrect!");
        digitalWrite(incorrectLight, HIGH);
        delay(1000);
        digitalWrite(incorrectLight, LOW);
        lcd.home();
      }
      else if (buttonStateFour == HIGH) {
        lcd.clear();
        lcd.print("Incorrect!");
        digitalWrite(incorrectLight, HIGH);
        delay(1000);
        digitalWrite(incorrectLight, LOW);
        lcd.home();
      }
      else {
      lcd.print(questionTwo);
      lcd.setCursor(0,1); //sets cursor bottom left to add questions
      lcd.print(questionTwoAns);
      for (int positionCounter = 0; positionCounter < questionTwoAns.length() + 6; positionCounter++) {
      // scroll one position left:
      lcd.scrollDisplayLeft();
      // wait a bit:
      delay(150);
      }
      lcd.clear();
      lcd.home();
      delay(10);
      }
    }
  }
  else if (buttonStateTwo == HIGH) {
    lcd.clear();
    lcd.print("Incorrect!");
    digitalWrite(incorrectLight, HIGH);
    delay(1000);
    digitalWrite(incorrectLight, LOW);
    lcd.home();
  }
  else if (buttonStateThree == HIGH) {
    lcd.clear();
    lcd.print("Incorrect!");
    digitalWrite(incorrectLight, HIGH);
    delay(1000);
    digitalWrite(incorrectLight, LOW);
    lcd.home();
  }
  else if (buttonStateFour == HIGH) {
    lcd.clear();
    lcd.print("Incorrect!");
    digitalWrite(incorrectLight, HIGH);
    delay(1000);
    digitalWrite(incorrectLight, LOW);
    lcd.home();
  } 
  else {
  String questionOne = "How much are dues?";
  String questionOneAns = "A.$32/yr B.$16/yr C.$20/yr D.40/yr";
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  lcd.print(questionOne);
  lcd.setCursor(0,1); //sets cursor bottom left to add questions
  lcd.print(questionOneAns);
  for (int positionCounter = 0; positionCounter < questionOneAns.length() + 6; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }
  lcd.clear();
  lcd.home();
  // delay at the end of the full loop:
  delay(10);
  }
}
