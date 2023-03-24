typedef struct {
        int          x, y;
        unsigned int width, height;
} Box;

typedef struct {
        int x, y;
} Position;

typedef struct {
        unsigned int width, height;
} Size;

typedef struct {
        Position   position;
        Size       size;
} PosSize;

typedef union Rect_tag {
        Box        coords;
        PosSize    props;
} Rectangle;

int main (){
  // Rectangle r;
  // r.coords.x = 0;

  Size s;
  Rectangle r;
  r.props.size = s;

  Rectangle box = {{ 0, 0, 0, 0 }}; // box initialization because box is first element of Rectangle.
}