typedef struct {
	int x;
	int y;
} vec; 

int dot_product(vec v1, vec v2) 
{
	return (v1.x * v2.x) + (v2.y * v2.y);
}
