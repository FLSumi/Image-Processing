//Student 2 Name: Je-heon Oh
#include <vector>
#include <iostream> //IWYU: pragma keep
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;
//Testing

const int RED = 0, GREEN = 1, BLUE = 2;

//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
void filter2(vector<vector<vector<int>>> &vec) {
	size_t rows = vec.size();
	if (!rows) exit(1);
	size_t cols = vec.at(0).size();
	if (!cols) exit(1);
	size_t colors = vec.at(0).at(0).size();
	if (!colors) exit(1);
	

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			//DEMO CODE BEGIN
			//How far are we from the center?
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
            int g = vec[i][j][GREEN]; //Skip bounds check for speed
            int b = vec[i][j][BLUE]; 
//			const double diag_length = hypot(rows/2.0,cols/2.0); //How many pixels is the diagonal from the center of the image to a corner?
//			double distance = hypot(i-(rows/2.0),j-(cols/2.0));
//			double brightness = 1 - 2*(distance/diag_length); //0 brightness at corners, 200% brightness in middle
			//cout << "i: " << i << " j: " << j << " bright: " << brightness << endl;
			//cout << "diag_length: " << diag_length << " distance: " << distance << endl;
//			for (int k = 0; k < colors; k++) {
//				vec.at(i).at(j).at(k) *= brightness; //Lighten or darken each color by its distance from the center
//			}
			//DEMO CODE END
		/*	if(i < rows/2) {
            vec[i][j][RED] += 245;
			vec[i][j][GREEN] += 38;
            vec[i][j][BLUE] += 38;
			}*/
			if(i > rows/2.7 and i < (2*rows/3.2) and j < cols/8.1){
			vec.at(i).at(j).at(RED) *= 0;
            vec.at(i).at(j).at(GREEN) *= 0;
            vec.at(i).at(j).at(BLUE) *= 0;
			}
			vec.at(i).at(j).at(RED) *= 0.8;
            vec.at(i).at(j).at(GREEN) *= 0.8;
            vec.at(i).at(j).at(BLUE) *= 0.8;

//			vec.at(i).at(j).at(RED) = b;
            vec.at(i).at(j).at(GREEN) += 28;
            vec.at(i).at(j).at(BLUE) = r;

			if (r > 120 and g > 120) {
            int avg = (r+g+b)/3;
            vec[i][j][RED] = avg + 128*cos(i * 20.0 * 3);
            vec[i][j][GREEN] = avg +128* sin(i * 50.0 * 3);
            vec[i][j][BLUE] = avg +128*cos(i * 40.0 + 3);
		}
		}

	}
}



