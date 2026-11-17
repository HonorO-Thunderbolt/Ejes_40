//¿Cuál es la salida del siguiente código? 
int m[3][2] = {{1,2},{3,4},{5,6}}; 
int (*p)[2] = m; 
cout << (p+2)[0][1]; 
//A) 3     B) 6     C) 5     D) 4   Respuesta: B