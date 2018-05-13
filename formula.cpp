#include "formula.h"
#include <windows.h>
#include <iostream>
#include <fstream>

using namespace std;

void drawSquare();
void drawRectangle();
void drawParallelogram();
void drawTriangle();
void drawTrapezoid();

        void writeToFile(ofstream &history, float x)
        {
            history << x << endl;
        }

        //Mutator
        void Formula :: setChoice(int choice)
        {
            this -> choice = choice;
        }

        void Formula :: setAreaChoice(int areaChoice)
        {
            this -> areaChoice = areaChoice;
        }

        void Formula :: setPerimeterChoice(int perimeterChoice)
        {
            this -> perimeterChoice = perimeterChoice;
        }

        void Formula :: setVolumeChoice(int volumeChoice)
        {
            this -> volumeChoice = volumeChoice;
        }

        //Accessor
        int Formula :: getChoice()
        {
            return choice;
        }

        int Formula :: getAreaChoice()
        {
            return areaChoice;
        }

        int Formula :: getPerimeterChoice()
        {
            return perimeterChoice;
        }

        int Formula :: getVolumeChoice()
        {
            return volumeChoice;
        }

        //Show Intro
        void Formula :: showIntro()
        {
            cout << "Geometric Shapes Calculator" << endl << endl;
            cout << "This Program calculates the Area, Perimeter, and Volume of the selected Shapes." << endl;
            cout << "Choose 'How to Use' to show the tutorial of this Program." <<endl;
            cout << "_______________________________________________________________________________"<<endl<<endl;
            system ("pause");
        }
        //Main Menu
        void Formula :: mainMenu()
        {
        	cout << endl;
            cout << "What do you want to calculate?" << endl << endl;
            cout << "1. Area" << endl;
            cout << "2. Perimeter" << endl;
            cout << "3. Volume" << endl;
            cout << "4. How to Use" << endl;
            cout << "5. Exit" << endl << endl;
        }
        //Area Menu
        void Formula :: showAreaMenu()
        {
            cout << endl << "Select a shape to calculate the Area: "<< endl << endl;
            cout << "1. Square" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Parallelogram" << endl;
            cout << "4. Triangle" << endl;
            cout << "5. Trapezoid" << endl;
            cout << "6. Circle" << endl << endl;
        }
        //Perimeter Menu
        void Formula :: showPerimeterMenu()
        {
        	cout << endl << "Select a shape to calculate the Perimeter: "<< endl << endl;
            cout << "1. Square" << endl;
            cout << "2. Rectangle" << endl;
            cout << "3. Parallelogram" << endl;
            cout << "4. Triangle" << endl;
            cout << "5. Trapezoid" << endl;
            cout << "6. Circle" << endl << endl;
		}
        //Volume Menu
        void Formula :: showVolumeMenu()
        {
            cout<< endl << "Select a shape to calculate the Volume: " << endl << endl;
            cout << "1. Cube" << endl;
            cout << "2. Rectangular Prism" << endl;
            cout << "3. Sphere" << endl;
            cout << "4. Ellipsoid" << endl;
            cout << "5. Cylinder" << endl;
            cout << "6. Cone" << endl;
            cout << "7. Pyramid" << endl << endl;
        }
        //How to use
        void Formula :: howToUse()
        {
            cout << endl;
            cout << "- Enter what you want to calculate, Area, Perimeter, or Volume." << endl;
            cout << "- Input the numbers needed to complete the calculation." << endl;
            cout << "- The answer will be displayed." << endl << endl;
            system ("pause");
        }

        //Area and Perimeter Formulas

        //Square
        void Formula :: squareArea(float squareSide, float squareArea)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawSquare();

            cout << endl;
            cout << "Enter Square's Side: ";
            history << "Enter Square's Side(Area): ";

            cin >> squareSide;
            writeToFile(history, squareSide);

            while(squareSide < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number." << endl;

                cout << endl;
                cout << "Enter Square's Side: ";
                history << "Enter Square's Side(Area): ";

                cin >> squareSide;
                writeToFile(history, squareSide);
            }
            squareArea = squareSide*squareSide;

            cout << endl;
            cout << "The Square's Area is: "<<squareArea<<endl<<endl;

            history << "The Square's Area is: ";
            writeToFile(history, squareArea);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: squarePerimeter(float squareSide, float squarePerimeter)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawSquare();

            cout << endl;
            cout << "Enter Square's Side: ";
            history << "Enter Square's Side(Perimeter): ";

            cin >> squareSide;
            writeToFile(history, squareSide);

            while(squareSide < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number." << endl;

                cout << endl;
                cout << "Enter Square's Side: ";
                history << "Enter Square's Side(Perimeter): ";

                cin >> squareSide;
                writeToFile(history, squareSide);
            }
            squarePerimeter = squareSide * 4;

            cout << endl;
            cout << "The Square's Perimeter is: "<<squarePerimeter<<endl<<endl;

            history << "The Square's Perimeter is: ";
            writeToFile(history, squarePerimeter);
            history << endl;

            history.close();

            system("pause");
        }

        //Rectangle
        void Formula :: rectangleArea(float rectangleLength, float rectangleWidth, float rectangleArea)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawRectangle();

            cout << endl;
            cout << "Enter Rectangle's Length: ";
            history << "Enter Rectangle's Length(Area): ";

            cin >> rectangleLength;
            writeToFile(history, rectangleLength);

            while(rectangleLength < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number." << endl;

                cout << endl;
                cout << "Enter Rectangle's Length: ";
                history << "Enter Rectangle's Length(Area): ";

                cin >> rectangleLength;
                writeToFile(history, rectangleLength);
            }

            cout << "Enter Rectangle's Width: ";
            history << "Enter Rectangle's Width(Area): ";

            cin >> rectangleWidth;
            writeToFile(history, rectangleWidth);

            while(rectangleWidth < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number." << endl;

                cout << endl;
                cout << "Enter Rectangle's Width: ";
                history << "Enter Rectangle's Width(Area): ";

                cin >> rectangleWidth;
                writeToFile(history, rectangleWidth);
            }
            rectangleArea = rectangleLength*rectangleWidth;

            cout << endl;
            cout << "The Rectangle's Area is: "<<rectangleArea<<endl<<endl;
            history << "The Rectangle's Area is: ";

            writeToFile(history, rectangleArea);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: rectanglePerimeter(float rectangleLength, float rectangleWidth, float rectanglePerimeter)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawRectangle();

            cout << endl;
            cout << "Enter Rectangle's Length: ";
            history << "Enter Rectangle's Length(Perimeter): ";

            cin >> rectangleLength;
            writeToFile(history, rectangleLength);

            while(rectangleLength < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number." << endl;

                cout << "Enter Rectangle's Length:";
                history << "Enter Rectangle's Length(Perimeter): ";

                cin >> rectangleLength;
                writeToFile(history, rectangleLength);
            }

            cout << "Enter Rectangle's Width: ";
            history << "Enter Rectangle's Width(Perimeter): ";

            cin >> rectangleWidth;
            writeToFile(history, rectangleWidth);

            while(rectangleWidth < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Rectangle's Width: ";
                history << "Enter Rectangle's Width(Perimeter): ";

                cin >> rectangleWidth;
                writeToFile(history, rectangleWidth);
            }
            rectanglePerimeter = 2*rectangleLength + 2*rectangleWidth;

            cout<< endl;
            cout << "The Rectangle's Perimeter is: "<<rectanglePerimeter<< endl << endl;
            history << "The Rectangle's Perimeter is: ";

            writeToFile(history, rectanglePerimeter);
            history << endl;

            history.close();

            system("pause");
        }

        //Parallelogram
        void Formula :: parallelogramArea(float parallelogramBase, float parallelogramHeight, float parallelogramArea)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawParallelogram();

            cout << endl;
            cout << "Enter Parallelogram's Base: ";
            history << "Enter Parallelogram's Base(Area): ";

            cin >> parallelogramBase;
            writeToFile(history, parallelogramBase);

            while(parallelogramBase < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Parallelogram's Base: ";
                history << "Enter Parallelogram's Base(Area): ";

                cin >> parallelogramBase;
                writeToFile(history, parallelogramArea);
            }

            cout << "Enter Parallelogram's Height: ";
            history << "Enter Parallelogram's Height(Area): ";

            cin >> parallelogramHeight;
            writeToFile(history, parallelogramHeight);

            while(parallelogramHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Parallelogram's Height: ";
                history << "Enter Parallelogram's Height(Area): ";

                cin >> parallelogramHeight;
                writeToFile(history, parallelogramHeight);
			}

            parallelogramArea = parallelogramBase * parallelogramHeight;

            cout<< endl;
            cout << "The Parallelogram's Area is: " << parallelogramArea<<endl<<endl;
            history << "The Parallelogram's Area is: ";

            writeToFile(history, parallelogramArea);
            history << endl;

            history.close();

            system("pause");
       	}


        void Formula :: parallelogramPerimeter(float parallelogramBase, float parallelogramSide, float parallelogramPerimeter)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawParallelogram();

            cout << endl;
            cout << "Enter Parallelogram's Base: ";
            history << "Enter Parallelogram's Base(Perimeter): ";

            cin >> parallelogramBase;
            writeToFile(history, parallelogramBase);
            while(parallelogramBase < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Parallelogram's Base: ";
                history << "Enter Parallelogram's Base(Perimeter): ";

                cin >> parallelogramBase;
                writeToFile(history, parallelogramBase);
            }

            cout << "Enter Parallelogram's Side: ";
            history << "Enter Parallelogram's Side(Perimeter): ";

            cin >> parallelogramSide;
            writeToFile(history, parallelogramSide);
            while(parallelogramSide < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;

                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Parallelogram's Side: ";
                history << "Enter Parallelogram's Side(Perimeter): ";

                cin >> parallelogramSide;
                writeToFile(history, parallelogramSide);
            }

            parallelogramPerimeter = 2 * (parallelogramBase + parallelogramSide);

            cout<< endl;
            cout << "The Parallelogram's Perimeter is: "<<parallelogramPerimeter<< endl << endl;
            history << "The Parallelogram's Perimeter is: ";

            writeToFile(history, parallelogramPerimeter);
            history << endl;

            history.close();

            system("pause");
        }

        //Triangle
        void Formula :: triangleArea(float triangleBase, float triangleHeight, float triangleArea)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawTriangle();

            cout << endl;
            cout << "Enter Triangle's Base: ";
            history << "Enter Triangle's Base(Area): ";

            cin >> triangleBase;
            writeToFile(history, triangleBase);
            while(triangleBase < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Triangle's Base: ";
                history << "Enter Triangle's Base(Area): ";

                cin >> triangleBase;
                writeToFile(history, triangleBase);
            }
            cout << "Enter Triangle's Height: ";
            history << "Enter Triangle's Height(Area): ";

            cin >> triangleHeight;
            writeToFile(history, triangleHeight);

            while(triangleHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Triangle's Height: ";
                history << "Enter Triangle's Height(Area): ";

                cin >> triangleHeight;
                writeToFile(history, triangleHeight);
            }

            triangleArea = triangleBase * triangleHeight / 2;

            cout << endl;
            cout << "The Triangle's Area is: "<<triangleArea<<endl<<endl;
            history << "The Triangle's Area is: ";

            writeToFile(history, triangleArea);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: trianglePerimeter(float triangleBase, float triangleSide, float triangleSide2, float trianglePerimeter)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawTriangle();

            cout << endl;
            cout << "Enter Triangle's Base: ";
            history << "Enter Triangle's Base(Perimeter): ";

            cin >> triangleBase;
            writeToFile(history, triangleBase);

            while(triangleBase < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Triangle's Base: ";
                history << "Enter Triangle's Base(Perimeter): ";

                cin >> triangleBase;
                writeToFile(history, triangleBase);
            }

            cout << "Enter Triangle's First Side: ";
            history << "Enter Triangle's First Side(Perimeter): ";

            cin >> triangleSide;
            writeToFile(history, triangleSide);

            while(triangleSide < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Triangle's First Side: ";
                history << "Enter Triangle's First Side(Perimeter): ";

                cin >> triangleBase;
                writeToFile(history, triangleBase);
            }

            cout << "Enter Triangle's Second Side: ";
            history << "Enter Triangle's Second Side(Perimeter): ";

            cin >> triangleSide2;
            writeToFile(history, triangleSide2);

            while(triangleSide2 < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Triangle's Second Side: ";
                history << "Enter Triangle's Second Side(Perimeter): ";

                cin >> triangleSide2;
                writeToFile(history, triangleSide2);
            }

            trianglePerimeter = triangleBase + triangleSide + triangleSide2;

            cout << endl;
            cout << "The Triangle's Perimeter is: "<<trianglePerimeter<< endl << endl;
            history << "The Triangle's Perimeter is: ";

            writeToFile(history, trianglePerimeter);
            history << endl;

            history.close();

            system("pause");
        }

        //Trapezoid
        void Formula :: trapezoidArea(float trapezoidBase, float trapezoidBase2, float trapezoidHeight, float trapezoidArea)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawTrapezoid();

            cout << endl;
            cout << "Enter Trapezoid's First Base: ";
            history << "Enter Trapezoid's First Base(Area): ";

            cin >> trapezoidBase;
            writeToFile(history, trapezoidBase);

            while(trapezoidBase < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's First Base: ";
                history << "Enter Trapezoid's First Base(Area): ";

                cin >> trapezoidBase;
                writeToFile(history, trapezoidBase);
            }

            cout << "Enter Trapezoid's Second Base: ";
            history << "Enter Trapezoid's Second Base(Area): ";

            cin >> trapezoidBase2;
            writeToFile(history, trapezoidBase2);

            while(trapezoidBase2 < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's Second Base: ";
                history << "Enter Trapezoid's Second Base(Area): ";

                cin >> trapezoidBase2;
                writeToFile(history, trapezoidBase2);
            }

            cout << "Enter Trapezoid's Height: ";
            history << "Enter Trapezoid's Height(Area): ";

            cin >> trapezoidHeight;
            writeToFile(history, trapezoidHeight);

            while(trapezoidHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's Height: ";
                history << "Enter Trapezoid's Height(Area): ";

                cin >> trapezoidHeight;
                writeToFile(history, trapezoidHeight);
            }

            trapezoidArea = (trapezoidBase + trapezoidBase2) / 2 * trapezoidHeight;

            cout << endl;
            cout << "The Trapezoid's Area is: "<<trapezoidArea<<endl<<endl;
            history << "The Trapezoid's Area is: ";

            writeToFile(history, trapezoidArea);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: trapezoidPerimeter(float trapezoidBase, float trapezoidBase2, float trapezoidSide, float trapezoidSide2, float trapezoidPerimeter)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            drawTrapezoid();

            cout << endl;
            cout << "Enter Trapezoid's First Base: ";
            history << "Enter Trapezoid's First Base(Perimeter): ";

            cin >> trapezoidBase;
            writeToFile(history, trapezoidBase);

            while(trapezoidBase < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's First Base: ";
                history << "Enter Trapezoid's First Base(Perimeter): ";

                cin >> trapezoidBase;
                writeToFile(history, trapezoidBase);
            }

            cout << "Enter Trapezoid's Second Base: ";
            history << "Enter Trapezoid's Second Base(Perimeter): ";

            cin >> trapezoidBase2;
            writeToFile(history, trapezoidBase2);

            while(trapezoidBase2 < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's Second Base: ";
                history << "Enter Trapezoid's Second Base(Perimeter): ";

                cin >> trapezoidBase2;
                writeToFile(history, trapezoidBase2);
            }

            cout << "Enter Trapezoid's First Side: ";
            history << "Enter Trapezoid's First Side(Perimeter): ";

            cin >> trapezoidSide;
            writeToFile(history, trapezoidSide);

            while(trapezoidSide < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's First Side: ";
                history << "Enter Trapezoid's First Side(Perimeter): ";

                cin >> trapezoidSide;
                writeToFile(history, trapezoidSide);
            }

            cout << "Enter Trapezoid's Second Side: ";
            history << "Enter Trapezoid's Second Side(Perimeter): ";

            cin >> trapezoidSide2;
            writeToFile(history, trapezoidSide2);

            while(trapezoidSide2 < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Trapezoid's Second Side: ";
                history << "Enter Trapezoid's Second Side(Perimeter): ";

                cin >> trapezoidSide2;
                writeToFile(history, trapezoidSide2);
            }

            trapezoidPerimeter = trapezoidBase + trapezoidBase2 + trapezoidSide + trapezoidSide2;

            cout << endl;
            cout << "The Trapezoid's Perimeter is: "<<trapezoidPerimeter<< endl << endl;
            history << "The Trapezoid's Perimeter is: ";

            writeToFile(history, trapezoidPerimeter);
            history << endl;

            history.close();

            system("pause");
        }

        //Circle
        void Formula :: circleArea(float circleRadius, float circleArea)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            cout << "Enter Circle's Radius: ";
            history << "Enter Circle's Radius(Area): ";

            cin >> circleRadius;
            writeToFile(history, circleRadius);

            while(circleRadius < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Circle's Radius: ";
                history << "Enter Circle's Radius(Area): ";

                cin >> circleRadius;
                writeToFile(history, circleRadius);
            }

            circleArea = 3.14 * circleRadius * circleRadius;

            cout << endl;
            cout << "The Circle's Area is: "<<circleArea<<endl<<endl;
            history << "The Circle's Area is: ";

            writeToFile(history, circleArea);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: circlePerimeter(float circleRadius, float circleCircumference)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            cout << "Enter Circle's Radius: ";
            history << "Enter Circle's Radius(Circumference): ";

            cin >> circleRadius;
            writeToFile(history, circleRadius);
            while(circleRadius < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Circle's Radius: ";
                history << "Enter Circle's Radius(Circumference): ";

                cin >> circleRadius;
                writeToFile(history, circleRadius);
            }

            circleCircumference = 2 * 3.14 * circleRadius;

            cout << endl;
            cout << "The Circle's Circumference is: "<<circleCircumference<< endl << endl;
            history << "The Circle's Circumference is: ";

            writeToFile(history, circleCircumference);
            history << endl;

            history.close();

            system("pause");
        }

        //Volume Formulas
        void Formula :: cube(float cubeSide, float cubeVolume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;

            cout << "Enter Cube's Side: ";
            history << "Enter Cube's Side(Volume): ";

            cin >> cubeSide;
            writeToFile(history, cubeSide);

            while(cubeSide < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Cube's Side: ";
                history << "Enter Cube's Side(Volume): ";

                cin >> cubeSide;
                writeToFile(history, cubeSide);
            }

            cubeVolume = cubeSide * cubeSide * cubeSide;

            cout << endl;
            cout << "The Cube's Volume is: "<<cubeVolume<<endl<<endl;
            history << "The Cube's Volume is: ";

            writeToFile(history, cubeVolume);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: rectangularPrism(float prismLength, float prismWidth, float prismHeight, float prismVolume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;
            cout << "Enter Rectangular Prism's Length: ";
            history << "Enter Rectangular Prism's Length(Volume): ";

            cin >> prismLength;
            writeToFile(history, prismLength);

            while(prismLength < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Rectangular Prism's Length: ";
                history << "Enter Rectangular Prism's Length(Volume): ";

                cin >> prismLength;
                writeToFile(history, prismLength);
            }

            cout << "Enter Rectangular Prism's Width: ";
            history << "Enter Rectangular Prism's Width(Volume: ";

            cin >> prismWidth;
            writeToFile(history, prismWidth);
            while(prismWidth < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Rectangular Prism's Width: ";
                history << "Enter Rectangular Prism's Width(Volume): ";

                cin >> prismWidth;
                writeToFile(history, prismWidth);
            }

            cout << "Enter Rectangular Prism's Height: ";
            history << "Enter Rectangular Prism's Height(Volume): ";

            cin >> prismHeight;
            writeToFile(history, prismHeight);

            while(prismHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Rectangular Prism's Height: ";
                history << "Enter Rectangular Prism's Height(Volume): ";

                cin >> prismHeight;
                writeToFile(history, prismHeight);
            }
            prismVolume = prismLength * prismWidth * prismHeight;

            cout << endl;
            cout << "The Rectangular Prism's Volume is: "<<prismVolume<<endl<<endl;
            history << "The Rectangular Prism's Volume is: ";

            writeToFile(history, prismVolume);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: sphere(float sphereRadius, float sphereVolume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;

            cout << "Enter Sphere's Radius: ";
            history << "Enter Sphere's Radius(Volume): ";

            cin >> sphereRadius;
            writeToFile(history, sphereRadius);

            while(sphereRadius < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Sphere's Radius: ";
                history << "Enter Sphere's Radius(Volume): ";

                cin >> sphereRadius;
                writeToFile(history, sphereRadius);
            }

            sphereVolume = 4.18666666667 * sphereRadius * sphereRadius * sphereRadius;

            cout << endl;
            cout << "The Sphere's Volume is: "<<sphereVolume<<endl<<endl;
            history << "The Sphere's Volume is: ";

            writeToFile(history, sphereVolume);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: ellipsoid(float axisA, float axisB, float axisC, float volume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);
            cout << endl;

            cout << "Enter Ellipsoid's Axis A: ";
            history << "Enter Ellipsoid's Axis A(Volume): ";

            cin >> axisA;
            writeToFile(history, axisA);

            while(axisA < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Ellipsoid's Axis A: ";
                history << "Enter Ellipsoid's Axis A(Volume): ";

                cin >> axisA;
                writeToFile(history, axisA);
            }

            cout << "Enter Ellipsoid's Axis B: ";
            history << "Enter Ellipsoid's Axis(Volume): ";

            cin >> axisB;
            writeToFile(history, axisB);

            while(axisB < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Ellipsoid's Axis B: ";
                history << "Enter Ellipsoid's Axis B(Volume): ";

                cin >> axisB;
                writeToFile(history, axisB);
            }

            cout << "Enter Ellipsoid's Axis C: ";
            history << "Enter Ellipsoid's Axis C(Volume): ";

            cin >> axisC;
            writeToFile(history, axisC);

            while(axisC < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Ellipsoid's Axis C: ";
                history << "Enter Ellipsoid's Axis C(Volume): ";

                cin >> axisC;
                writeToFile(history, axisC);
            }

            volume = 4.19 * axisA * axisB * axisC;

            cout << endl;
            cout << "The Ellipsoid's Volume is: "<<volume<<endl<<endl;
            history << "The Ellipsoid's Volume is: ";

            writeToFile(history, volume);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: cylinder(float cylRadius, float cylHeight, float cylVolume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;

            cout << "Enter Cylinder's Radius: ";
            history << "Enter Cylinder's Radius(Volume): ";

            cin >> cylRadius;
            writeToFile(history, cylRadius);

            while(cylRadius < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Cylinder's Radius: ";
                history << "Enter Cylinder's Radius(Volume): ";

                cin >> cylRadius;
                writeToFile(history, cylRadius);
            }

            cout << "Enter Cylinder's Height: ";
            history << "Enter Cylinder's Height(Volume): ";

            cin >> cylHeight;
            writeToFile(history, cylHeight);

            while(cylHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Cylinder's Height: ";
                history << "Enter Cylinder's Height(Volume): ";

                cin >> cylHeight;
                writeToFile(history, cylHeight);
            }


            cylVolume = 3.14 * cylRadius * cylRadius * cylHeight;

            cout << endl;
            cout << "The Cylinder's Volume is: "<<cylVolume<<endl<<endl;
            history << "The Cylinder's Volume is: ";

            writeToFile(history, cylVolume);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: cone(float coRadius, float coHeight, float coVolume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;

            cout << "Enter Cone's Radius: ";
            history << "Enter Cone's Radius(Volume): ";

            cin >> coRadius;
            writeToFile(history, coRadius);

            while(coRadius < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Cone's Radius: ";
                history << "Enter Cone's Radius(Volume): ";

                cin >> coRadius;
                writeToFile(history, coRadius);
            }
            cout << "Enter Cone's Height: ";
            history << "Enter Cone's Height(Volume): ";

            cin >> coHeight;
            writeToFile(history, coHeight);

            while(coHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Cone's Height: ";
                history << "Enter Cone's Height(Volume): ";

                cin >> coHeight;
                writeToFile(history, coHeight);
            }

            coVolume = 3.14 * coRadius * coRadius * coHeight / 3;

            cout << endl;
            cout << "The Cone's Volume is: "<<coVolume<<endl<<endl;
            history << "The Cone's Volume is: ";

            writeToFile(history, coVolume);
            history << endl;

            history.close();

            system("pause");
        }

        void Formula :: pyramid(float pyrBaseLength, float pyrBaseWidth, float pyrHeight, float pyrVolume)
        {
            ofstream history;
            history.open("History.txt", fstream::app);

            cout << endl;

            cout << "Enter Pyramid's Base Length: ";
            history << "Enter Pyramid's Base Length(Volume): ";

            cin >> pyrBaseLength;
            writeToFile(history, pyrBaseLength);

            while(pyrBaseLength < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Pyramid's Base Length: ";
                history << "Enter Pyramid's Base Length(Volume): ";

                cin >> pyrBaseLength;
                writeToFile(history, pyrBaseLength);
            }

            cout << "Enter Pyramid's Base Width: ";
            history << "Enter Pyramid's Base Width(Volume): ";

            cin >> pyrBaseWidth;
            writeToFile(history, pyrBaseWidth);

            while(pyrBaseWidth < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Pyramid's Base Width: ";
                history << "Enter Pyramid's Base Width(Volume): ";

                cin >> pyrBaseWidth;
                writeToFile(history, pyrBaseWidth);
            }

            cout << "Enter Pyramid's Height: ";
            history << "Enter Pyramid's Height(Volume): ";

            cin >> pyrHeight;
            writeToFile(history, pyrHeight);

            while(pyrHeight < 0)
            {
                cout << "ERROR! Numbers can not be negative." << endl;
                cout << "Input other number." << endl;
                history << "ERROR! Numbers can not be negative.";
                history << "Input other number.";

                cout << endl;
                cout << "Enter Pyramid's Height: ";
                history << "Enter Pyramid's Height(Volume): ";

                cin >> pyrHeight;
                writeToFile(history, pyrHeight);
                cin >> pyrHeight;
            }

            pyrVolume = pyrBaseLength * pyrBaseWidth * pyrHeight / 3;

            cout << endl;
            cout << "The Pyramid's Volume is: "<<pyrVolume<<endl<<endl;
            history << "The Pyramid's Volume is: ";

            writeToFile(history, pyrVolume);
            history << endl;

            history.close();

            system("pause");
        }

        void drawSquare()
        {
            for(int a=1;a<=15;a++)
            {
                cout<<"*";
            }
            cout<<endl;
            for(int b=1;b<=5;b++)
            {
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=13;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int e=1;e<=15;e++)
            {
                cout<<"*";
            }
        }

        void drawRectangle()
        {
            for(int a=1;a<=25;a++)
            {
                cout<<"*";
            }
            cout<<endl;
            for(int b=1;b<=5;b++)
            {
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int e=1;e<=25;e++)
            {
                cout<<"*";
            }
        }

        void drawParallelogram()
        {
            for(int x=1;x<=7;x++)
            {
                cout<<" ";
            }
            for(int a=1;a<=25;a++)
            {
                cout<<"*";
            }
            cout<<endl;
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=6;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=5;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=4;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=3;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=2;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=1;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=23;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int e=1;e<=25;e++)
            {
                cout<<"*";
            }
        }

        void drawTriangle()
        {
            int z=1;

            for (int i=0; i<7; i++)
            {
                for (int j=7; j>i; j--)
                {
                    cout<<" ";
                }

                cout<<"*";

                if (i!=0)
                {
                    for (int k=1; k<=z; k++)
                    {
                        cout<<" ";
                    }

                cout<<"*";
                z+=2;
                }
            cout<<endl;
            }

            for (int i=0; i<=z+1; i++)
            {
                cout<<"*";
            }
        }

        void drawTrapezoid()
        {
            for(int x=1;x<=7;x++)
            {
                cout<<" ";
            }
            for(int a=1;a<=25;a++)
            {
                cout<<"*";
            }
            cout<<endl;
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=6;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=25;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=5;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=27;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=4;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=29;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=3;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=31;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=2;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=33;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int b=1;b<=1;b++)
            {
                for (int x=1;x<=1;x++)
                    {
                        cout << " ";
                    }
                for(int c=1;c<=1;c++)
                    {
                        cout<<"*";
                    }
                for(int d=1;d<=35;d++)
                    {
                        cout<<" ";
                    }
                cout<<"*"<<endl;
            }
            for(int e=1;e<=39;e++)
            {
                cout<<"*";
            }
        }
