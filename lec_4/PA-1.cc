#include"image.hpp"
typedef unsigned char uchar;

int main(void){
    Image sample("sample.png");
    Image grey_image(sample.w,sample.h,3);
    for(int y=0;y<sample.h;y++){
        for(int x=0;x<sample.w;x++){
            uchar v_sum=0;
            for(int c=0;c<sample.ch;c++){
                uchar v=sample.GetPixel(y,x,c);
                v_sum=v_sum+v/3;
            }
            for(int c=0;c<sample.ch;c++){
                grey_image.SetPixel(y,x,c,v_sum);
            }
        }
    }
    grey_image.save("grey.png");
}