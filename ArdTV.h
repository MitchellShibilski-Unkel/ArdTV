#include <iostream>
#include <tvout.h>
#include <fontALL.h>

using namespace std;

TVout tv;

class ArdTV {
    public:
        void createDisplay(int width, int height, bool printData) {
            // Setup display
            tv.begin(PAL, width, height);

            // Create font
            tv.select_font(font6x8);

            // Data to return
            const unsigned char data[] = {"Width = "+width, "Height = "+height, "Font = font6x8"}

            cout << data[] << endl;
        }

        void imageLoader(int x, int y, int width, int height, char imgBitmap) {
            const unsigned char img[] = {width, height, imgBitmap};

            // Draw image
            tv.bitmap(x, y, img);
        }

        void text(const char* textToDraw) {
            tv.println(textToDraw);
        }

        void quickCursorRender() {
            tv.set_cursor(20, 20);
        }

        void setCursor(int x, int y) {
            tv.set_cursor(x, y);
        }

        void restScreen() {
            tv.clear_screen();
        }

        void refreshRate(int rr) {
            tv.delay(rr);
        }
};