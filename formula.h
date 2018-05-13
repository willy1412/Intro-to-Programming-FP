class Formula
{
    private:
    int choice;
    int areaChoice;
    int perimeterChoice;
    int volumeChoice;

	public:
    //Mutator
	void setChoice(int choice);
	void setAreaChoice(int areaChoice);
	void setPerimeterChoice(int perimeterChoice);
	void setVolumeChoice(int volumeChoice);

	//Accessor
	int getChoice();
	int getAreaChoice();
	int getPerimeterChoice();
	int getVolumeChoice();

    //Menus
	void showIntro();
	void mainMenu();
	void showAreaMenu();
	void showPerimeterMenu();
	void showVolumeMenu();
	void howToUse();

    //Area & Perimeter
	void squareArea(float side, float area);
	void squarePerimeter(float side, float perimeter);

	void rectangleArea(float length, float width, float area);
	void rectanglePerimeter(float length, float width, float perimeter);

	void parallelogramArea(float base, float height, float area);
	void parallelogramPerimeter(float base, float side, float perimeter);

	void triangleArea(float base, float height, float area);
	void trianglePerimeter(float base, float side, float side2, float perimeter);

	void trapezoidArea(float base, float base2, float height, float area);
	void trapezoidPerimeter(float base, float base2, float side, float side2, float perimeter);

	void circleArea(float radius, float area);
	void circlePerimeter(float radius, float circumference);

	//Volumes
	void cube(float side, float volume);
	void rectangularPrism(float length, float width, float height, float volume);
	void sphere(float radius, float volume);
	void ellipsoid(float a, float b, float c, float volume);
	void cylinder(float radius, float height, float volume);
	void cone(float radius, float height, float volume);
	void pyramid(float baseLength, float baseWidth, float height, float volume);
};
