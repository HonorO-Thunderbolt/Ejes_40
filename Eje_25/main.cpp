//¿Cuál es la salida del siguiente código? 
int m[2][3] = {{1,2,3},{4,5,6}}; 
int (*p)[3] = m; 
cout << *(*(p+1)+1); 
//A) 4     B) 2     C) 6     D) 5   Respuesta: D