//¿Cuál es la salida del siguiente código? 
int m[2][2] = {{1,2},{3,4}}; 
int (*p)[2] = m; 
for(int i=0;i<2;i++) p[i][i] *= 3; 
cout << m[0][0] << " " << m[1][1]; 
//A) 1 4     B) 3 12     C) 1 12     D) 3 4   Respuesta: B