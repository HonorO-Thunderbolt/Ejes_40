//¿Cuál es la salida del siguiente código? 
int m[2][3] = {{1,2,3},{4,5,6}}; 
int (*p)[3] = m; 
p[0][2] = p[1][0] + p[1][1]; 
cout << m[0][2]; 
//A) 7     B) 3     C) 9     D) 11   Respuesta: C