//Student 1 Name: Sean Salcedo 
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;
 
const int RED = 0, GREEN = 1, BLUE = 2;

void make_rect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
	for (int i = y_min; i <= y_max; i++) {
		for (int j = x_min; j <= x_max; j++) {
			vec[i][j][RED] = 90;
			vec[i][j][GREEN] = 78;
			vec[i][j][BLUE] = 194;
		}
	}
}
void make_eyerect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 246;
            vec[i][j][GREEN] = 46; // Red, Bottom of eye
            vec[i][j][BLUE] = 48;
        }
    }
}
void make_eyerect2(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 130;
            vec[i][j][GREEN] = 60; // Darker red, middle of eye 
            vec[i][j][BLUE] = 62;
        }
    }
}
void make_blackrect (vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 0;
            vec[i][j][GREEN] = 0; // Black, top of eye
            vec[i][j][BLUE] = 0;
        }
    }
}
void make_hairrect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 72;
            vec[i][j][GREEN] = 116; // Darkish blue, outline of hair
            vec[i][j][BLUE] = 153;
        }
    }
}
void make_hairrect2(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 130;
            vec[i][j][GREEN] = 187; // Cyan, second outline of hair
            vec[i][j][BLUE] = 230;
        }
    }
}
void make_hairrect3(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 191;
            vec[i][j][GREEN] = 224; // Lightest blue, mid hair 
            vec[i][j][BLUE] = 255;
        }
    }
}
void make_skinrect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 255;
            vec[i][j][GREEN] = 237; // Light skin, main skin tone
            vec[i][j][BLUE] = 226;
        }
    }
}
void make_skinrect2(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 220;
            vec[i][j][GREEN] = 194; // Darker stin tone, outline of skin
            vec[i][j][BLUE] = 179;
        }
    }
}
void make_buttonrect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 180;
            vec[i][j][GREEN] = 113; // Button brown
            vec[i][j][BLUE] = 58;
        }
    }
}
void make_fitrect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 10;
            vec[i][j][GREEN] = 77; //Darker blue shirt color 
            vec[i][j][BLUE] = 96;
        }
    }
}
void make_fitrect2(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 55;
            vec[i][j][GREEN] = 136; // Primary blue shirt color
            vec[i][j][BLUE] = 163;
        }
    }
}
void make_skinrect3(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 250; 
            vec[i][j][GREEN] = 237; // Random really white skin tone
            vec[i][j][BLUE] = 221;
        }
    }
}

void make_red2rect(vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 500;
            vec[i][j][GREEN] = 1;
            vec[i][j][BLUE] = 1;
		}
	}
}
void make_purplerect (vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 188;
            vec[i][j][GREEN] = 187; // Light purple, random shirt and face accents
            vec[i][j][BLUE] = 244;
        }
    }
}
void make_whiterect (vector<vector<vector<int>>> &vec, int x_min, int x_max, int y_min, int y_max) {
    for (int i = y_min; i <= y_max; i++) {
        for (int j = x_min; j <= x_max; j++) {
            vec[i][j][RED] = 255;
            vec[i][j][GREEN] = 255; // WHITE
            vec[i][j][BLUE] = 255;
        }
    }
}

//YOU: Write your own filter here - delete the demo code or modify it to suit your purposes
//FIXME: There is a fun bug in this code waiting for you to discover
//Are the cols and rows reversed? It's up to you to find out!
void filter1(vector<vector<vector<int>>> &vec) {
	//Get the number of rows, columns, and colors in this 3D vector
	size_t rows = vec.size();
	if (!rows) exit(1);
	size_t cols = vec.at(0).size();
	if (!cols) exit(1);
	size_t colors = vec.at(0).at(0).size();
	if (!colors) exit(1);
	//make_fitrect2(vec, 40, 50, 40, 50);

	//make_rect(vec, 1165, 1188, 1692, 1911); 
	//make_redrect(vec, 1, 15, 4, 40); // starting y, ending y, starting x, ending x
	//make_redrect(vec, 15, 40 , 4, 10);
	//make_redrect(vec, 15, 40 , 4, 10);

	//Do the image filtering on every row and column in this image...
	//Warning: I and J are actuall backwards, I hope you read this comment
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols;j++) {
			//r is the red value at the current spot, g is the green, b is the blue
			int r = vec.at(i).at(j).at(RED); //Bounds check with .at the first time
			int g = vec[i][j][GREEN]; //Skip bounds check for speed
			int b = vec[i][j][BLUE];


			
			/*Halftone - every other block of 5x5 pixels is black
			if ((i/5 + j/5) % 2) {
				vec.at(i).at(j).at(RED) = 0;
				vec.at(i).at(j).at(GREEN) = 0;
				vec.at(i).at(j).at(BLUE) = 0;
			} */
			//else {
				/*Color Rotate
				vec.at(i).at(j).at(RED) =  g; 
				vec.at(i).at(j).at(GREEN) = b;
				vec.at(i).at(j).at(BLUE) = r;
			//}*/ 
			//

			//Filter the middle third of the image
			if (i > rows/3 and i < (2*rows/3) and j > cols/3 and j < (2*cols/3)) {
			/*vec.at(i).at(j).at(RED) *= 0.5;
            vec.at(i).at(j).at(GREEN) *= 0.5;
            vec.at(i).at(j).at(BLUE) *= 0.5;
				*Greyscale
				int avg = (r+g+b)/3;
				vec[i][j][RED] = avg;
				vec[i][j][GREEN] = avg;
				vec[i][j][BLUE] = avg;
				*/
				/*One pixel blur
				int r_avg = (vec[i][j][RED]+vec[i-1][j][RED]+vec[i+1][j][RED]+vec[i][j-1][RED]+vec[i][j+1][RED]) / 5;
				int g_avg = (vec[i][j][GREEN]+vec[i-1][j][GREEN]+vec[i+1][j][GREEN]+vec[i][j-1][GREEN]+vec[i][j+1][GREEN]) / 5;
				int b_avg = (vec[i][j][BLUE]+vec[i-1][j][BLUE]+vec[i+1][j][BLUE]+vec[i][j-1][BLUE]+vec[i][j+1][BLUE]) / 5;
				vec[i][j][RED] = r_avg;
				vec[i][j][GREEN] = g_avg;
				vec[i][j][BLUE] = b_avg;
				*/
			}

			/*Double the brightness of every pixel
			vec.at(i).at(j).at(RED) *= 0.5;
			vec.at(i).at(j).at(GREEN) *= 0.5;
			vec.at(i).at(j).at(BLUE) *= 0.5;
			*/


			/*Greyscale
			if (i < rows/2) {
				vec.at(i).at(j).at(RED) *= 1.2;
				vec.at(i).at(j).at(GREEN) *= 0.9;
				vec.at(i).at(j).at(BLUE) *= 1.1;
			}
			else {
				int avg = (r+g+b) / 3;
				vec.at(i).at(j).at(RED) = avg;
				vec.at(i).at(j).at(GREEN) = avg;
				vec.at(i).at(j).at(BLUE) = avg;
			}
			*/


			//Add a rainbow pattern 
			/*
			if (r > 120 and g < 180) {
				int avg = (r+g+b)/3;
				vec[i][j][RED] = avg + 128*cos(i/20.0);
				vec[i][j][GREEN] = avg + 128*sin(i/50.0);;
				vec[i][j][BLUE] = avg + 128*cos(i/40.0 + 3);
			}
			*/

			//DEMO CODE BEGIN
			//The demo code here will either sepia tone or yellowize the image, depending on which one you comment out
			//Simple Example - Make the image more yellowish
			// 
			vec.at(i).at(j).at(RED) *= 1.8; //Increase red value at every point by 50%
            vec.at(i).at(j).at(GREEN) *= 1.1; //Increase green at every point by 20%
            vec.at(i).at(j).at(BLUE) *= 2.1;//Reduce blue by 20%
			//
			vec.at(i).at(j).at(RED) *= 0.6;
            vec.at(i).at(j).at(GREEN) *= 0.6;
            vec.at(i).at(j).at(BLUE) *= 0.6;
			//
			if(i > rows/3.05 and i < (2*rows/3) and j < cols/1) {
				vec.at(i).at(j).at(RED) *= 1.5;
				vec.at(i).at(j).at(GREEN) *= 1.5;
				vec.at(i).at(j).at(BLUE) *= 0.7;
				} // Starting Y, ending Y, Starting X, ending X (y1, y2, x1, x2)
			make_rect(vec, 1165, 1188, 1692, 1911); // Hide watermark with watermark
			make_blackrect(vec, 50, 60, 50, 60);
			make_hairrect3(vec, 50,60,60,70);
			make_hairrect3(vec, 50,60,70,80);
			make_hairrect3(vec, 50,60,80,90);
			make_hairrect2(vec, 50,60,90,100);
			make_hairrect(vec, 50,60,100,110);
			make_hairrect3(vec, 50,60,110,120);
			make_hairrect3(vec, 50,60,120,130);
			make_hairrect3(vec, 50,60,130,140);
			make_hairrect3(vec, 50,60,140,150);
			make_hairrect(vec, 50,60,150,160);
			make_hairrect2(vec, 50,60,160,170);
			make_hairrect3(vec, 50,60,170,180);
			make_hairrect3(vec, 50,60,180,190);
			make_hairrect3(vec, 50,60,190,200);

			make_blackrect(vec, 40, 50, 60, 70);
			make_whiterect(vec, 40, 50, 70, 80);
			make_blackrect(vec, 40, 50, 80, 90);
			make_hairrect3(vec, 40, 50 ,90, 100);
			make_hairrect2(vec, 40, 50, 100, 110);
			make_hairrect3(vec, 40, 50, 110, 120);
			make_hairrect3(vec, 40, 50, 120, 130);
			make_hairrect3(vec, 40, 50, 130, 140);
			make_hairrect3(vec, 40, 50, 140, 150);
			make_hairrect2(vec, 40, 50, 150, 160);
			make_hairrect3(vec, 40, 50, 160, 170);
			make_blackrect(vec, 40, 50, 170, 180);
			make_whiterect(vec, 40, 50, 180, 190);

			make_blackrect(vec, 30, 40, 60, 70);
			make_hairrect2(vec, 30, 40, 70, 80);
			make_whiterect(vec, 30, 40, 80, 90);
			make_whiterect(vec, 30, 40, 90, 100);
			make_hairrect3(vec, 30, 40, 100, 110);
			make_hairrect3(vec, 30, 40, 110, 120);
			make_hairrect3(vec, 30, 40, 120, 130);
			make_hairrect3(vec, 30, 40, 130, 140);
			make_hairrect3(vec, 30, 40, 140, 150);
			make_hairrect3(vec, 30, 40, 150, 160);
			make_whiterect(vec, 30, 40, 160, 170);
			make_whiterect(vec, 30, 40, 170, 180);
			make_hairrect2(vec, 30, 40, 180, 190);



			make_blackrect(vec, 20, 30, 70, 80);
			make_hairrect2(vec, 20, 30, 80, 90);
			make_hairrect3(vec, 20, 30, 90, 170);
			make_hairrect2(vec, 20, 30, 170,180);



			make_blackrect(vec, 10, 20, 80, 90);
			make_hairrect2(vec, 10, 20, 100, 110);
			make_hairrect3(vec, 10, 20, 110,150);
			make_hairrect2(vec, 10, 20, 150,160);


			make_blackrect(vec, 10, 20, 90, 100);
			make_blackrect(vec, 0, 10, 100,160);
			make_blackrect(vec, 10, 20, 160,170);
			make_blackrect(vec, 10, 20, 170,180);
			make_blackrect(vec, 20, 30, 180,190);
			make_blackrect(vec, 30, 40, 190,200);
			make_blackrect(vec, 40, 50, 190,200);
			make_blackrect(vec, 50, 60, 200,210);
			


			make_blackrect(vec, 60, 70, 200,210); // Line 7
			make_hairrect3(vec, 60, 70, 60, 70);
			make_hairrect2(vec, 60, 70, 70, 80);
			make_hairrect3(vec, 60, 70, 80, 90);
			make_hairrect(vec, 60, 70, 90, 110);
			make_hairrect2(vec, 60, 70, 110, 120);
			make_hairrect3(vec, 60, 70, 120, 140);
			make_hairrect2(vec, 60, 70, 140, 150);
			make_hairrect(vec, 60, 70, 150, 170);
			make_hairrect3(vec, 60, 70, 170, 180);
			make_hairrect2(vec, 60, 70, 180, 190);
			make_hairrect3(vec, 60, 70, 190, 200);


			make_blackrect(vec, 70, 80, 200,210); // Line 8
			make_hairrect3(vec, 70, 80, 60, 70);
			make_hairrect(vec, 70, 80, 70, 80);
			make_hairrect2(vec, 70, 80, 80, 90);
			make_hairrect(vec, 70, 80, 90, 100);
			make_skinrect2(vec, 70, 80, 100, 110);
			make_hairrect(vec, 70, 80, 110, 120);
			make_hairrect2(vec, 70, 80, 120,140);
			make_hairrect(vec, 70, 80, 140, 150);
			make_skinrect2(vec, 70, 80,150, 160);
			make_hairrect(vec, 70, 80, 160, 170);
			make_hairrect2(vec, 70, 80, 170, 180);
			make_hairrect(vec, 70, 80, 180, 190);
			make_hairrect3(vec, 70, 80, 190, 200);
	
			



			make_blackrect(vec, 80, 90, 200,210); // Line 9
			make_hairrect3(vec, 80, 90, 60, 70); 
			make_hairrect(vec, 80, 90, 70, 90);
			make_purplerect(vec, 80, 90, 90, 100);
			make_blackrect(vec, 80, 90, 100, 110);
			make_skinrect2(vec, 80, 90, 110, 120); 
			make_hairrect(vec, 80, 90, 120, 140);
			make_skinrect2(vec, 80, 90, 140, 150);
			make_blackrect(vec, 80, 90, 150, 160);
			make_purplerect(vec, 80, 90, 160, 170);
			make_hairrect(vec, 80, 90, 170, 190);
			make_hairrect3(vec, 80, 90, 190, 200);


			 
			make_blackrect(vec, 90, 100,200,210); // Line 10
			make_hairrect2(vec, 90, 100,60, 70);
			make_hairrect(vec, 90, 100, 70, 90);
			make_skinrect3(vec,90, 100, 90, 100);
			make_eyerect2(vec,90, 100, 100, 110); 
			make_skinrect3(vec, 90, 100, 110, 120);
			make_skinrect2(vec, 90, 100, 120, 140); 
			make_skinrect3(vec, 90, 100, 140, 150);
			make_eyerect2(vec,90, 100, 150, 160);
			make_skinrect3(vec, 90, 100, 160, 170);
			make_hairrect(vec, 90, 100, 170, 190);
			make_hairrect2(vec, 90, 100, 190, 200);





			make_blackrect(vec, 100,110,190,200); // Line 11
			make_hairrect3(vec, 100,110,70,80);
			make_hairrect(vec, 100,110,80,90);
			make_skinrect3(vec,100,110,90,100);
			make_eyerect(vec,100,110,100,110);
			make_skinrect(vec,100,110,110,150);
			make_eyerect(vec,100,110,150,160);
			make_skinrect3(vec,100,110,160,170);
			make_hairrect(vec,100,110,170,180);
			make_hairrect3(vec,100,110,180,190);



			make_blackrect(vec, 110,120,190,200); // Line 12
			make_hairrect2(vec, 110,120,70,80);
			make_hairrect3(vec, 110,120,80,90);
			make_skinrect2(vec, 110,120,90,100);
			make_skinrect(vec, 110,120,100,160);
			make_skinrect2(vec,110,120,160,170);
			make_hairrect3(vec,110,120,170,180);
			make_hairrect2(vec,110,120,180,190);


			make_blackrect(vec, 120,130,180,190); // Line 13
			make_hairrect2(vec, 120,130,80,100);
			make_skinrect2(vec, 120,130,100,110);
			make_skinrect(vec, 120,130,110,150);
			make_skinrect2(vec, 120,130,150,160);
			make_hairrect2(vec, 120,130,160,180);



			make_blackrect(vec, 130,140,170,180);
			make_blackrect(vec, 130,140,160,170);
			make_buttonrect(vec, 130,140,100,110);
			make_fitrect(vec, 130, 140,110,120);
			make_buttonrect(vec, 130,140,120,140);
			make_fitrect(vec, 130, 140,140,150);
			make_buttonrect(vec, 130,140,150,160);




			make_blackrect(vec, 140,150,160,170);
			make_skinrect3(vec, 140,150,100,110);
			make_fitrect(vec, 140,150,110,120);
			make_eyerect(vec, 140,150,120,140);
			make_fitrect(vec,140,150,140,150);
			make_skinrect3(vec,140,150,150,160);




			make_blackrect(vec, 150,160,170,180);
			make_skinrect3(vec, 150,160,90,100);
			make_purplerect(vec,150,160,100,110);
			make_fitrect(vec, 150,160,110,120);
			make_purplerect(vec,150,160,120,140);
			make_fitrect(vec,150,160,140,150);
			make_purplerect(vec,150,160,150,160);
			make_skinrect3(vec,150,160,160,170);



			
			make_blackrect(vec, 160,170,170,180);
			make_skinrect2(vec, 160,170,90,100);
			make_fitrect(vec, 160,170,100,120);
			make_fitrect2(vec,160,170,120,140);
			make_fitrect(vec, 160,170,140,160);
			make_skinrect2(vec, 160,170,160,170);



			make_blackrect(vec, 170,180,160,170);
			make_fitrect2(vec, 170,180,100,160);



			make_blackrect(vec, 180,190,150,160);
			make_skinrect(vec, 180,190, 110,120);
			make_skinrect2(vec,180,190, 120,140);
			make_skinrect(vec, 180,190, 140,150);

		
			make_blackrect(vec, 190,200,140,150);
			make_blackrect(vec, 190,200,130,140);
			make_blackrect(vec, 190,200,120,130);
			make_blackrect(vec, 190,200,110,120);
			make_blackrect(vec, 180,190,100,110);
			make_blackrect(vec, 170,180,90,100);
			make_blackrect(vec, 160,170,80,90);
			make_blackrect(vec, 150,160,80,90);
			make_blackrect(vec, 140,150,90,100);
			make_blackrect(vec, 130,140,90,100);
			make_blackrect(vec, 130,140,80,90);
			make_blackrect(vec, 120,130,70,80);
			make_blackrect(vec, 110,120,60,70);
			make_blackrect(vec, 100,110,60,70);
			make_blackrect(vec, 90,100, 50,60);
			make_blackrect(vec, 80,90, 50,60);
			make_blackrect(vec, 70,80, 50,60);
			make_blackrect(vec, 60,70, 50,60);


			

			//Complex Example - Do sepia toning
			//Get the red, green and blue values at row i, col j:
			/*These magic numbers do sepia toning
			vec[i][j][RED]   = r*0.393 + g*0.769 + b*0.189;
			vec[i][j][GREEN] = r*0.349 + g*0.686 + b*0.168;
			vec[i][j][BLUE]  = r*0.272 + g*0.534 + b*0.131;
			*/

			//DEMO CODE END
		}
	}
}
