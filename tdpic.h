
struct TP_head
{
    unsigned char version;          // version
    unsigned char dtype;            // data type
    unsigned char vtype;            // projection type

    unsigned char check0 = 0x00;    // check code 0

    unsigned int index;             // index of frames
    unsigned int length;            // pixel amount
    unsigned int width;             // width of the picture
    unsigned int height;            // height of the picture

    unsigned char check1 = 0x0f;    // check code 1

    // perspective info 
    float vx, vy, vz;               // where the camera aims at
    float hx, hy, hz;               // where the head of the camera points to
    unsigned int near, far;         // distance of near plane and far plane from camera

    unsigned char check2 = 0xff;    // check code 2
};


struct TP_pixel
{
    unsigned char r, g, b, x;
    float d;
};