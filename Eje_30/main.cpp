//¿Cuál es la salida del siguiente código? 
int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; 
int (*p)[3] = m; 
cout << p[0][0]+p[1][1]+p[2][2]; 
//A) 15     B) 18     C) 12     D) 9   Respuesta: A