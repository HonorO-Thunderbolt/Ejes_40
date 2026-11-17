//¿Cuál es la salida del siguiente código? 
int m[2][2] = {{1,3},{5,7}}; 
int (*p)[2] = m; 
cout << *(*(p)+1) + *(*(p+1)); 
//A) 10     B) 8     C) 6     D) 4   Respuesta: B