typedef struct matriz matrix;
struct matriz{
	int r;
	int c;
	float **d;
};
//////////////////////////////////////////////////////////////////////////
matrix m,n,p;

m.d= (float**)malloc(sizeof(float*)*m.r);   //d[0] sera el primer +float 
m.d[0]=(float*)malloc(sizeof(float)*m.r);	//d[0][0] sera float 
m.d[1]=(float*)malloc(sizeof(float)*m.c)	//en ambos se reserva memoria
/////////////////////////////////////////////////////////////////////////
