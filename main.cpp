#include "formula.h"
#include <iostream>

using namespace std;

int main()
{

    int choice;
    int areaChoice;
    int perimeterChoice;
    int volumeChoice;

    float num;

    Formula show;

    //Show Intro
    show.showIntro();

    //While Loop to continue the program until told to Exit
    while (true)
    {

        //Show Main Menu and User Input which one to calculate
        show.mainMenu();
        cin >> choice;

        //Mutator
        show.setChoice(choice);

        //Input validation for Main Menu
        while(show.getChoice() < 1 || show.getChoice() > 5)
            {
                cout << "Enter number between 1-5!" << endl << endl;
                cin >> choice;
                show.setChoice(choice);
            }

        //Input Area Choice
        if(choice == 1)
            {
                show.showAreaMenu();
                cin >> areaChoice;

                //Mutator
                show.setAreaChoice(areaChoice);

                //Input validation for Area Perimeter Choice
                while(show.getAreaChoice() < 1 || show.getAreaChoice() > 6)
                {
                    cout << "Enter number between 1-6!" << endl << endl;
                    cin >> areaChoice;
                    show.setAreaChoice(areaChoice);
                }

                switch (show.getAreaChoice())
                {
                    case 1 : show.squareArea(num, num);
                            break;
                    case 2 : show.rectangleArea(num, num, num);
                            break;
                    case 3 : show.parallelogramArea(num, num, num);
                            break;
                    case 4 : show.triangleArea(num, num, num);
                            break;
                    case 5 : show.trapezoidArea(num, num, num, num);
                            break;
                    case 6 : show.circleArea(num, num);
                            break;
                }
            }

        //Input Perimeter Choice
        if(choice == 2)
            {
                show.showPerimeterMenu();
                cin >> perimeterChoice;

                //Mutator
                show.setPerimeterChoice(perimeterChoice);

                //Input validation for Area Perimeter Choice
                while(show.getPerimeterChoice() < 1 || show.getPerimeterChoice() > 6)
                {
                    cout << "Enter number between 1-6!" << endl << endl;
                    cin >> perimeterChoice;
                    show.setPerimeterChoice(perimeterChoice);
                }

                switch (show.getPerimeterChoice())
                {
                    case 1 : show.squarePerimeter(num, num);
                            break;
                    case 2 : show.rectanglePerimeter(num, num, num);
                            break;
                    case 3 : show.parallelogramPerimeter(num, num, num);
                            break;
                    case 4 : show.trianglePerimeter(num, num, num, num);
                            break;
                    case 5 : show.trapezoidPerimeter(num, num, num, num, num);
                            break;
                    case 6 : show.circlePerimeter(num, num);
                            break;
                }
            }


        //Input Volume Choice
        if(choice == 3)
            {
                show.showVolumeMenu();
                cin >> volumeChoice;

                //Mutator
                show.setVolumeChoice(volumeChoice);

                //Input Validation for Volume Choice
                while(show.getVolumeChoice() < 1 || show.getVolumeChoice() > 7)
                {
                    cout << "Enter number between 1-7!" << endl << endl;
                    cin >> volumeChoice;
                    show.setVolumeChoice(volumeChoice);
                }

                switch (show.getVolumeChoice())
                {
                    case 1 : show.cube(num, num);
                            break;
                    case 2 : show.rectangularPrism(num, num, num, num);
                            break;
                    case 3 : show.sphere(num, num);
                            break;
                    case 4 : show.ellipsoid(num, num, num, num);
                            break;
                    case 5 : show.cylinder(num, num, num);
                            break;
                    case 6 : show.cone(num, num, num);
                            break;
                    case 7 : show.pyramid(num, num, num, num);
                            break;
                }
            }
        //Show how to use
        if(choice == 4)
            {
                show.howToUse();
            }

        //Exit the program
        if(choice == 5)
            {
                return 0;
            }
    }
    return 0;
}
